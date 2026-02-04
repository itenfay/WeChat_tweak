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

+ (void)uploadLogFileAtPath:(NSString *)filePath
                    logName:(NSString *)logName
                 completion:(void (^)(BOOL success, NSInteger statusCode, NSError *error))completion;

@end
