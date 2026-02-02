//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSThread;
@protocol wxAudioNativeLogDelegate;

@interface WXAudioNativeMgr : NSObject
{
    NSMutableDictionary *_tasks;
    NSThread *mgr_thread;
    id <wxAudioNativeLogDelegate> _delegate;
}

+ (id)shareInstance;
- (void).cxx_destruct;
@property(nonatomic) __weak id <wxAudioNativeLogDelegate> delegate; // @synthesize delegate=_delegate;
- (void)wxaudionativeLog:(int)arg1 log:(const char *)arg2 target:(long long)arg3;

@end

