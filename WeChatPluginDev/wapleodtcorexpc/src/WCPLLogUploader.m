//
// WCPLLogUploader.m
//
// 本地日志上传工具
//

#import "WCPLLogUploader.h"

static NSString *const kWCPLLogUploadURLKey = @"kWCPLLogUploadURL";
static const NSInteger kWCPLUploadRetryLimit = 2;

static NSString *WCPLTrimUploadURLString(NSString *value) {
    if (![value isKindOfClass:[NSString class]]) {
        return @"";
    }
    NSString *trimmed = [value stringByTrimmingCharactersInSet:[NSCharacterSet whitespaceAndNewlineCharacterSet]];
    return trimmed.length > 0 ? trimmed : @"";
}

static BOOL WCPLShouldRetryUploadError(NSInteger statusCode, NSError *error, NSInteger retryCount) {
    if (retryCount >= kWCPLUploadRetryLimit) {
        return NO;
    }

    if (statusCode == 502 || statusCode == 503 || statusCode == 504 || statusCode == 429) {
        return YES;
    }

    if (!error) {
        return NO;
    }

    if (![error.domain isEqualToString:NSURLErrorDomain]) {
        return NO;
    }

    switch (error.code) {
        case NSURLErrorTimedOut:
        case NSURLErrorNetworkConnectionLost:
        case NSURLErrorNotConnectedToInternet:
        case NSURLErrorCannotConnectToHost:
        case NSURLErrorCannotFindHost:
        case NSURLErrorDNSLookupFailed:
            return YES;
        default:
            return NO;
    }
}

static NSString *WCPLResponseTextSnippet(NSData *data) {
    if (![data isKindOfClass:[NSData class]] || data.length == 0) {
        return @"";
    }

    NSString *text = [[NSString alloc] initWithData:data encoding:NSUTF8StringEncoding];
    if (text.length == 0) {
        text = [[NSString alloc] initWithData:data encoding:NSISOLatin1StringEncoding];
    }
    if (text.length == 0) {
        return @"";
    }

    text = [[text stringByReplacingOccurrencesOfString:@"\r" withString:@" "]
            stringByReplacingOccurrencesOfString:@"\n" withString:@" "];
    if (text.length > 200) {
        text = [[text substringToIndex:200] stringByAppendingString:@"…"];
    }
    return text;
}

static NSError *WCPLBuildUploadNSError(NSInteger statusCode, NSString *urlString, NSData *respData, NSError *originError) {
    if (originError) {
        return originError;
    }

    NSString *snippet = WCPLResponseTextSnippet(respData);
    NSMutableString *message = [NSMutableString stringWithFormat:@"服务器返回状态码: %ld", (long)statusCode];
    if (urlString.length > 0) {
        [message appendFormat:@"\nURL: %@", urlString];
    }
    if (snippet.length > 0) {
        [message appendFormat:@"\n响应: %@", snippet];
    }

    NSMutableDictionary *userInfo = [NSMutableDictionary dictionaryWithObject:message forKey:NSLocalizedDescriptionKey];
    if (urlString.length > 0) {
        userInfo[@"WCPLUploadURL"] = urlString;
    }
    if (snippet.length > 0) {
        userInfo[@"WCPLUploadResponseSnippet"] = snippet;
    }
    userInfo[@"WCPLUploadStatusCode"] = @(statusCode);

    return [NSError errorWithDomain:@"WCPLLogUploader" code:statusCode userInfo:userInfo];
}

static NSArray<NSString *> *WCPLCandidateUploadURLStrings(NSString *urlString) {
    NSString *base = WCPLTrimUploadURLString(urlString);
    if (base.length == 0) {
        return @[];
    }

    NSMutableOrderedSet<NSString *> *results = [NSMutableOrderedSet orderedSetWithObject:base];
    if ([base hasSuffix:@"/"]) {
        NSString *withoutSlash = [base substringToIndex:base.length - 1];
        if (withoutSlash.length > 0) {
            [results addObject:withoutSlash];
        }
    } else {
        [results addObject:[base stringByAppendingString:@"/"]];
    }

    return results.array;
}

@implementation WCPLLogUploader

+ (NSString *)defaultUploadURLString {
    return @"http://127.0.0.1:8099/wcpl_log";
}

+ (NSString *)currentUploadURLString {
    NSString *saved = [[NSUserDefaults standardUserDefaults] stringForKey:kWCPLLogUploadURLKey];
    if (saved.length > 0) {
        return saved;
    }
    return [self defaultUploadURLString];
}

+ (BOOL)isValidUploadURLString:(NSString *)urlString {
    if (urlString.length == 0) {
        return NO;
    }
    NSURL *url = [NSURL URLWithString:urlString];
    return (url != nil && url.scheme.length > 0 && url.host.length > 0);
}

+ (void)setCurrentUploadURLString:(NSString *)urlString {
    if (urlString.length == 0) {
        [[NSUserDefaults standardUserDefaults] removeObjectForKey:kWCPLLogUploadURLKey];
        return;
    }
    [[NSUserDefaults standardUserDefaults] setObject:urlString forKey:kWCPLLogUploadURLKey];
}

+ (void)uploadLogData:(NSData *)data
              logName:(NSString *)logName
              headers:(NSDictionary<NSString *, NSString *> *)headers
           completion:(void (^)(BOOL success, NSInteger statusCode, NSError *error))completion {
    if (data.length == 0) {
        if (completion) {
            NSError *error = [NSError errorWithDomain:@"WCPLLogUploader"
                                                 code:-2
                                             userInfo:@{NSLocalizedDescriptionKey: @"日志为空"}];
            dispatch_async(dispatch_get_main_queue(), ^{
                completion(NO, 0, error);
            });
        }
        return;
    }

    NSString *urlString = [self currentUploadURLString];
    if (![self isValidUploadURLString:urlString]) {
        if (completion) {
            NSError *error = [NSError errorWithDomain:@"WCPLLogUploader"
                                                 code:-3
                                             userInfo:@{NSLocalizedDescriptionKey: @"日志上传地址无效"}];
            dispatch_async(dispatch_get_main_queue(), ^{
                completion(NO, 0, error);
            });
        }
        return;
    }

    NSString *uploadName = (logName.length > 0) ? logName : @"wcpl_debug.log";
    NSArray<NSString *> *candidateURLs = WCPLCandidateUploadURLStrings(urlString);
    if (candidateURLs.count == 0) {
        if (completion) {
            NSError *error = [NSError errorWithDomain:@"WCPLLogUploader"
                                                 code:-4
                                             userInfo:@{NSLocalizedDescriptionKey: @"没有可用的上传地址"}];
            dispatch_async(dispatch_get_main_queue(), ^{
                completion(NO, 0, error);
            });
        }
        return;
    }

    __block NSUInteger candidateIndex = 0;
    __block NSInteger retryCount = 0;
    __block NSInteger lastStatusCode = 0;
    __block NSError *lastError = nil;
    __block NSData *lastRespData = nil;

    __block void (^attemptUpload)(void) = nil;
    __weak void (^weakAttemptUpload)(void) = nil;
    attemptUpload = ^{
        if (candidateIndex >= candidateURLs.count) {
            if (completion) {
                NSError *finalError = WCPLBuildUploadNSError(lastStatusCode,
                                                            candidateURLs.count > 0 ? candidateURLs.lastObject : urlString,
                                                            lastRespData,
                                                            lastError);
                dispatch_async(dispatch_get_main_queue(), ^{
                    completion(NO, lastStatusCode, finalError);
                });
            }
            return;
        }

        NSString *targetURLString = candidateURLs[candidateIndex];
        NSURL *targetURL = [NSURL URLWithString:targetURLString];
        if (!targetURL) {
            candidateIndex += 1;
            retryCount = 0;
            if (weakAttemptUpload) {
                weakAttemptUpload();
            }
            return;
        }

        NSMutableURLRequest *request = [NSMutableURLRequest requestWithURL:targetURL];
        request.HTTPMethod = @"POST";
        request.timeoutInterval = 12.0;
        [request setValue:@"text/plain; charset=utf-8" forHTTPHeaderField:@"Content-Type"];
        [request setValue:uploadName forHTTPHeaderField:@"X-Log-Name"];

        if (headers.count > 0) {
            [headers enumerateKeysAndObjectsUsingBlock:^(NSString *key, NSString *value, __unused BOOL *stop) {
                if (key.length == 0 || value.length == 0) {
                    return;
                }
                [request setValue:value forHTTPHeaderField:key];
            }];
        }

        NSURLSessionUploadTask *task = [[NSURLSession sharedSession]
                                        uploadTaskWithRequest:request
                                                      fromData:data
                                             completionHandler:^(NSData *respData, NSURLResponse *response, NSError *error) {
            NSInteger statusCode = 0;
            if ([response isKindOfClass:[NSHTTPURLResponse class]]) {
                statusCode = ((NSHTTPURLResponse *)response).statusCode;
            }
            BOOL success = (error == nil && statusCode >= 200 && statusCode < 300);
            if (success) {
                if (completion) {
                    dispatch_async(dispatch_get_main_queue(), ^{
                        completion(YES, statusCode, nil);
                    });
                }
                return;
            }

            lastStatusCode = statusCode;
            lastError = error;
            lastRespData = respData;

            if (WCPLShouldRetryUploadError(statusCode, error, retryCount)) {
                retryCount += 1;
                dispatch_after(dispatch_time(DISPATCH_TIME_NOW, (int64_t)(0.6 * NSEC_PER_SEC)), dispatch_get_global_queue(DISPATCH_QUEUE_PRIORITY_DEFAULT, 0), ^{
                    if (weakAttemptUpload) {
                        weakAttemptUpload();
                    }
                });
                return;
            }

            candidateIndex += 1;
            retryCount = 0;
            if (weakAttemptUpload) {
                weakAttemptUpload();
            }
        }];

        [task resume];
    };

    weakAttemptUpload = attemptUpload;
    attemptUpload();
}

+ (void)uploadLogFileAtPath:(NSString *)filePath
                    logName:(NSString *)logName
                 completion:(void (^)(BOOL success, NSInteger statusCode, NSError *error))completion {
    if (filePath.length == 0) {
        if (completion) {
            NSError *error = [NSError errorWithDomain:@"WCPLLogUploader"
                                                 code:-1
                                             userInfo:@{NSLocalizedDescriptionKey: @"日志路径为空"}];
            dispatch_async(dispatch_get_main_queue(), ^{
                completion(NO, 0, error);
            });
        }
        return;
    }

    NSDictionary *attributes = [[NSFileManager defaultManager] attributesOfItemAtPath:filePath error:nil];
    NSString *fileType = [attributes fileType];
    unsigned long long fileSize = [attributes fileSize];
    if (![fileType isEqualToString:NSFileTypeRegular] || fileSize == 0) {
        if (completion) {
            NSError *error = [NSError errorWithDomain:@"WCPLLogUploader"
                                                 code:-2
                                             userInfo:@{NSLocalizedDescriptionKey: @"日志为空"}];
            dispatch_async(dispatch_get_main_queue(), ^{
                completion(NO, 0, error);
            });
        }
        return;
    }

    NSURL *fileURL = [NSURL fileURLWithPath:filePath];
    if (!fileURL) {
        if (completion) {
            NSError *error = [NSError errorWithDomain:@"WCPLLogUploader"
                                                 code:-2
                                             userInfo:@{NSLocalizedDescriptionKey: @"日志为空"}];
            dispatch_async(dispatch_get_main_queue(), ^{
                completion(NO, 0, error);
            });
        }
        return;
    }

    NSString *urlString = [self currentUploadURLString];
    if (![self isValidUploadURLString:urlString]) {
        if (completion) {
            NSError *error = [NSError errorWithDomain:@"WCPLLogUploader"
                                                 code:-3
                                             userInfo:@{NSLocalizedDescriptionKey: @"日志上传地址无效"}];
            dispatch_async(dispatch_get_main_queue(), ^{
                completion(NO, 0, error);
            });
        }
        return;
    }

    NSString *uploadName = (logName.length > 0) ? logName : @"wcpl_debug.log";
    NSArray<NSString *> *candidateURLs = WCPLCandidateUploadURLStrings(urlString);
    if (candidateURLs.count == 0) {
        if (completion) {
            NSError *error = [NSError errorWithDomain:@"WCPLLogUploader"
                                                 code:-4
                                             userInfo:@{NSLocalizedDescriptionKey: @"没有可用的上传地址"}];
            dispatch_async(dispatch_get_main_queue(), ^{
                completion(NO, 0, error);
            });
        }
        return;
    }

    __block NSUInteger candidateIndex = 0;
    __block NSInteger retryCount = 0;
    __block NSInteger lastStatusCode = 0;
    __block NSError *lastError = nil;
    __block NSData *lastRespData = nil;

    __block void (^attemptUpload)(void) = nil;
    __weak void (^weakAttemptUpload)(void) = nil;
    attemptUpload = ^{
        if (candidateIndex >= candidateURLs.count) {
            if (completion) {
                NSError *finalError = WCPLBuildUploadNSError(lastStatusCode,
                                                            candidateURLs.count > 0 ? candidateURLs.lastObject : urlString,
                                                            lastRespData,
                                                            lastError);
                dispatch_async(dispatch_get_main_queue(), ^{
                    completion(NO, lastStatusCode, finalError);
                });
            }
            return;
        }

        NSString *targetURLString = candidateURLs[candidateIndex];
        NSURL *targetURL = [NSURL URLWithString:targetURLString];
        if (!targetURL) {
            candidateIndex += 1;
            retryCount = 0;
            if (weakAttemptUpload) {
                weakAttemptUpload();
            }
            return;
        }

        NSMutableURLRequest *request = [NSMutableURLRequest requestWithURL:targetURL];
        request.HTTPMethod = @"POST";
        request.timeoutInterval = 12.0;
        [request setValue:@"text/plain; charset=utf-8" forHTTPHeaderField:@"Content-Type"];
        [request setValue:uploadName forHTTPHeaderField:@"X-Log-Name"];

        NSURLSessionUploadTask *task = [[NSURLSession sharedSession]
                                        uploadTaskWithRequest:request
                                                      fromFile:fileURL
                                             completionHandler:^(NSData *respData, NSURLResponse *response, NSError *error) {
            NSInteger statusCode = 0;
            if ([response isKindOfClass:[NSHTTPURLResponse class]]) {
                statusCode = ((NSHTTPURLResponse *)response).statusCode;
            }
            BOOL success = (error == nil && statusCode >= 200 && statusCode < 300);
            if (success) {
                if (completion) {
                    dispatch_async(dispatch_get_main_queue(), ^{
                        completion(YES, statusCode, nil);
                    });
                }
                return;
            }

            lastStatusCode = statusCode;
            lastError = error;
            lastRespData = respData;

            if (WCPLShouldRetryUploadError(statusCode, error, retryCount)) {
                retryCount += 1;
                dispatch_after(dispatch_time(DISPATCH_TIME_NOW, (int64_t)(0.6 * NSEC_PER_SEC)), dispatch_get_global_queue(DISPATCH_QUEUE_PRIORITY_DEFAULT, 0), ^{
                    if (weakAttemptUpload) {
                        weakAttemptUpload();
                    }
                });
                return;
            }

            candidateIndex += 1;
            retryCount = 0;
            if (weakAttemptUpload) {
                weakAttemptUpload();
            }
        }];

        [task resume];
    };

    weakAttemptUpload = attemptUpload;
    attemptUpload();
}

@end
