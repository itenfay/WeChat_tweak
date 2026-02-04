//
// WCPLCrashReporter.h
//
// 崩溃日志收集与自动上传
//

#import <Foundation/Foundation.h>

@interface WCPLCrashReporter : NSObject

+ (instancetype)sharedReporter;

@property (nonatomic, assign) BOOL enabled;
@property (nonatomic, assign) BOOL autoUploadEnabled;

- (void)installIfNeeded;
- (void)recordBreadcrumb:(NSString *)breadcrumb;
- (void)recordBreadcrumbFormat:(NSString *)format, ... NS_FORMAT_FUNCTION(1,2);
- (NSString *)crashLogPath;
- (void)tryUploadPendingReport;

@end

#define WCPLCrashBreadcrumb(fmt, ...) \
    do { \
        [[WCPLCrashReporter sharedReporter] recordBreadcrumbFormat:(fmt), ##__VA_ARGS__]; \
    } while (0)
