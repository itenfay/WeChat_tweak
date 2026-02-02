//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface WCFinderProcessTimeRecorder : NSObject
{
    _Bool _observed;
    unsigned long long _enterTime;
    CDUnknownBlockType _onEnterBackground;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool observed; // @synthesize observed=_observed;
@property(copy, nonatomic) CDUnknownBlockType onEnterBackground; // @synthesize onEnterBackground=_onEnterBackground;
@property(nonatomic) unsigned long long enterTime; // @synthesize enterTime=_enterTime;
- (unsigned long long)currentTime;
- (void)onVCEnterForeground;
- (void)onVCEnterBackground;
- (void)removeNotifications;
- (void)setupNotifications;
- (void)dealloc;
- (id)init;

@end

