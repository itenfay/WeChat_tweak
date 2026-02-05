//
// WCPLLogUploader.h
//
// 本地日志上传工具
//

#import <Foundation/Foundation.h>

@interface WCPLLogUploader : NSObject

+ (NSString *)defaultUploadURLString;
+ (NSString *)currentUploadURLString;
+ (BOOL)isValidUploadURLString:(NSString *)urlString;
+ (void)setCurrentUploadURLString:(NSString *)urlString;

+ (void)uploadLogData:(NSData *)data
              logName:(NSString *)logName
              headers:(NSDictionary<NSString *, NSString *> *)headers
           completion:(void (^)(BOOL success, NSInteger statusCode, NSError *error))completion;

+ (void)uploadLogFileAtPath:(NSString *)filePath
                    logName:(NSString *)logName
                 completion:(void (^)(BOOL success, NSInteger statusCode, NSError *error))completion;

@end
