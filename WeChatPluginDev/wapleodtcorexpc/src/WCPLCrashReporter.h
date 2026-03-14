//
// WCPLCrashReporter.h
//
// 崩溃日志收集与自动上传
//

#import <Foundation/Foundation.h>

@protocol WCPLLogging;
@interface WCPLCrashReporter : NSObject

+ (instancetype)sharedReporter;
+ (instancetype)reporterWithDefaults:(NSUserDefaults *)defaults;
+ (instancetype)reporterWithDefaults:(NSUserDefaults *)defaults
                              logger:(id<WCPLLogging>)logger;

- (instancetype)initWithDefaults:(NSUserDefaults *)defaults;
- (instancetype)initWithDefaults:(NSUserDefaults *)defaults
                          logger:(id<WCPLLogging>)logger;

@property (nonatomic, assign) BOOL enabled;
@property (nonatomic, assign) BOOL autoUploadEnabled;

- (void)installIfNeeded;
- (void)recordBreadcrumb:(NSString *)breadcrumb;
- (void)recordBreadcrumbFormat:(NSString *)format, ... NS_FORMAT_FUNCTION(1,2);
- (void)recordDiagnostic:(NSString *)diagnostic;
- (void)recordDiagnosticFormat:(NSString *)format, ... NS_FORMAT_FUNCTION(1,2);
- (NSString *)crashLogPath;
- (void)tryUploadPendingReport;

@end

#define WCPLCrashBreadcrumb(fmt, ...) \
    do { \
        [[WCPLCrashReporter sharedReporter] recordBreadcrumbFormat:(fmt), ##__VA_ARGS__]; \
    } while (0)

#define WCPLCrashDiagnostic(fmt, ...) \
    do { \
        [[WCPLCrashReporter sharedReporter] recordDiagnosticFormat:(fmt), ##__VA_ARGS__]; \
    } while (0)
