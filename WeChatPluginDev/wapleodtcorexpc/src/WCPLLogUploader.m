//
// WCPLLogUploader.m
//
// 本地日志上传工具
//

#import "WCPLLogUploader.h"

static NSString *const kWCPLLogUploadURLKey = @"kWCPLLogUploadURL";

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

    NSURL *url = [NSURL URLWithString:urlString];
    NSMutableURLRequest *request = [NSMutableURLRequest requestWithURL:url];
    request.HTTPMethod = @"POST";
    request.HTTPBody = data;
    [request setValue:@"text/plain; charset=utf-8" forHTTPHeaderField:@"Content-Type"];

    NSString *uploadName = (logName.length > 0) ? logName : @"wcpl_debug.log";
    [request setValue:uploadName forHTTPHeaderField:@"X-Log-Name"];

    if (headers.count > 0) {
        [headers enumerateKeysAndObjectsUsingBlock:^(NSString *key, NSString *value, __unused BOOL *stop) {
            if (key.length == 0 || value.length == 0) {
                return;
            }
            [request setValue:value forHTTPHeaderField:key];
        }];
    }

    NSURLSessionDataTask *task = [[NSURLSession sharedSession]
                                 dataTaskWithRequest:request
                                 completionHandler:^(__unused NSData *respData, NSURLResponse *response, NSError *error) {
        NSInteger statusCode = 0;
        if ([response isKindOfClass:[NSHTTPURLResponse class]]) {
            statusCode = ((NSHTTPURLResponse *)response).statusCode;
        }
        BOOL success = (error == nil && statusCode >= 200 && statusCode < 300);

        if (completion) {
            dispatch_async(dispatch_get_main_queue(), ^{
                completion(success, statusCode, error);
            });
        }
    }];

    [task resume];
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

    NSData *logData = [NSData dataWithContentsOfFile:filePath];
    [self uploadLogData:logData logName:logName headers:nil completion:completion];
}

@end
