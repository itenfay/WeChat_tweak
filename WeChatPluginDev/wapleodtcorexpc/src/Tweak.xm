#import "WCPLCrashReporter.h"
#import "WCPLRealtimeLogUploader.h"

%ctor {
    @autoreleasepool {
        [[WCPLCrashReporter sharedReporter] installIfNeeded];
        [[WCPLRealtimeLogUploader sharedUploader] startIfNeeded];
    }
}
