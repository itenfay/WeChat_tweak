//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class EAGLContext, NSString;
@protocol OS_dispatch_queue;

@interface MMOpenGLContext : NSObject
{
    EAGLContext *_context;
    NSObject<OS_dispatch_queue> *_contextQueue;
    NSString *_queueName;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *queueName; // @synthesize queueName=_queueName;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *contextQueue; // @synthesize contextQueue=_contextQueue;
- (void)runSyncOnOpenGLESProcessQueueTrue:(CDUnknownBlockType)arg1;
- (void)runAsyncOnOpenGLESProcessQueue:(CDUnknownBlockType)arg1;
- (void)runSyncOnOpenGLESProcessQueue:(CDUnknownBlockType)arg1;
@property(readonly, retain, nonatomic) EAGLContext *context; // @synthesize context=_context;
- (id)createGLContext;
- (id)initWithQueueName:(id)arg1;
- (id)init;

@end

