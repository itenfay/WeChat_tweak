//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@protocol MMUDPHandleLogDelegate;

@interface MMUDPNativeMgr : NSObject
{
    id <MMUDPHandleLogDelegate> _delegate;
}

+ (id)shareInstance;
- (void).cxx_destruct;
@property(nonatomic) __weak id <MMUDPHandleLogDelegate> delegate; // @synthesize delegate=_delegate;
- (void)udpNativeLog:(int)arg1 log:(const char *)arg2 target:(long long)arg3;

@end

