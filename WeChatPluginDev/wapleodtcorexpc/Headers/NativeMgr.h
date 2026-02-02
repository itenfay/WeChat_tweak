//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSThread;
@protocol wxNativeLogDelegate;

@interface NativeMgr : NSObject
{
    NSMutableDictionary *_tasks;
    NSThread *mgr_thread;
    id <wxNativeLogDelegate> _delegate;
}

+ (id)shareInstance;
- (void).cxx_destruct;
@property(nonatomic) __weak id <wxNativeLogDelegate> delegate; // @synthesize delegate=_delegate;
- (void)nativeLog:(int)arg1 log:(const char *)arg2 target:(long long)arg3;

@end

