//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString, WCFPSMonitorPlugin;

@protocol WCFPSMonitorPluginDelegate <NSObject>
- (void)onFPSMonitorPluginReport:(WCFPSMonitorPlugin *)arg1 totalTime:(double)arg2 dropFrameTime:(double)arg3 hitchRate:(double)arg4 scene:(NSString *)arg5;
@end

