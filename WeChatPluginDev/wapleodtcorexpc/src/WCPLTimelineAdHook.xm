#import "WCPLConfigCenter.h"
#import "WCPLLogger.h"

%hook GroupTool

- (BOOL)isBrandTimelineOpen {
    BOOL originalValue = %orig;

    if (![WCPLConfigCenter shared].timeline.blockTimelineBrandAdsEnable) {
        return originalValue;
    }

    if (originalValue) {
        static CFAbsoluteTime lastLogAt = 0;
        CFAbsoluteTime now = CFAbsoluteTimeGetCurrent();
        if ((now - lastLogAt) > 3.0) {
            lastLogAt = now;
            WCPLLogInfo(@"[朋友圈广告] 覆盖 isBrandTimelineOpen=NO");
        }
    }

    return NO;
}

%end
