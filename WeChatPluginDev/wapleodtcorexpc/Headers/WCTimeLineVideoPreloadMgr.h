//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface WCTimeLineVideoPreloadMgr : NSObject
{
}

- (id)preloadDisableTime;
- (long long)preloadPercent:(double)arg1;
- (long long)predownNetType;
- (_Bool)isPreloadTimeMatch;
- (_Bool)isPreloadNetMatch;
- (_Bool)isEnableVideoPreload;
- (void)stopVideoPreload:(id)arg1;
- (void)startVideoPreload:(id)arg1;

@end

