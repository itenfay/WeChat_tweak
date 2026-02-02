//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@protocol OS_dispatch_source;

@interface WebViewSanboxTaskGcdTimer : NSObject
{
    NSObject<OS_dispatch_source> *_timer;
    id _userInfo;
}

+ (id)scheduledTimerWithQueue:(id)arg1 timeInterval:(double)arg2 block:(CDUnknownBlockType)arg3 userInfo:(id)arg4 repeats:(_Bool)arg5;
+ (id)scheduledTimerWithQueue:(id)arg1 timeInterval:(double)arg2 target:(id)arg3 selector:(SEL)arg4 userInfo:(id)arg5 repeats:(_Bool)arg6;
- (void).cxx_destruct;
@property(retain, nonatomic) id userInfo; // @synthesize userInfo=_userInfo;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *timer; // @synthesize timer=_timer;
- (void)dealloc;
- (void)invalidate;

@end

