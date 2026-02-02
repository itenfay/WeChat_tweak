//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>
typedef void (^CDUnknownBlockType)(void);

@class NSThread;

@interface NSThreadHolder : NSObject
{
    NSThread *_thread;
}

- (_Bool)onWorkingThread;
- (void)checkAndPost:(CDUnknownBlockType)arg1;
- (id)initWithNSThread:(id)arg1;

@end
