//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, NSThread;

@interface WCBackgroundTaskRunner : NSObject
{
    struct _opaque_pthread_t *_pThread;
    NSString *_name;
    NSThread *_nsThread;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSThread *nsThread; // @synthesize nsThread=_nsThread;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void)routine;
- (void)start;
- (id)initWithName:(id)arg1;

@end

