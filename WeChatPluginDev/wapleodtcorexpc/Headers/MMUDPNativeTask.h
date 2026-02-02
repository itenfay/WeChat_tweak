//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSThread;

@interface MMUDPNativeTask : NSObject
{
    struct IMBNativeInterface *_interface;
    NSThread *_thread;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSThread *thread; // @synthesize thread=_thread;
@property(nonatomic) struct IMBNativeInterface *interface; // @synthesize interface=_interface;
- (void)update:(id)arg1;
- (void)run:(long long)arg1;

@end

