//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray;
@protocol OS_dispatch_queue;

@interface WXPMKPromise : NSObject
{
    NSObject<OS_dispatch_queue> *_promiseQueue;
    NSMutableArray *_handlers;
    id _result;
}

+ (id)promiseWithBooleanAdapter:(CDUnknownBlockType)arg1;
+ (id)promiseWithIntegerAdapter:(CDUnknownBlockType)arg1;
+ (id)promiseWithAdapter:(CDUnknownBlockType)arg1;
+ (id)new:(CDUnknownBlockType)arg1;
+ (id)promiseWithResolver:(CDUnknownBlockType)arg1;
+ (id)promiseWithValue:(id)arg1;
+ (id)join:(id)arg1;
+ (id)until:(CDUnknownBlockType)arg1 catch:(id)arg2;
+ (id)hang:(id)arg1;
+ (id)all:(id)arg1;
+ (id)when:(id)arg1;
+ (id)pause:(double)arg1;
- (void).cxx_destruct;
- (id)description;
- (id)value;
- (_Bool)rejected;
- (_Bool)fulfilled;
- (_Bool)resolved;
- (_Bool)pending;
- (id)then:(CDUnknownBlockType)arg1:(CDUnknownBlockType)arg2;
- (CDUnknownBlockType)finallyOn;
- (CDUnknownBlockType)catchOn;
- (CDUnknownBlockType)thenOn;
- (id)resolved:(CDUnknownBlockType)arg1 pending:(CDUnknownBlockType)arg2;
- (CDUnknownBlockType)finally;
- (CDUnknownBlockType)catchOnMain;
- (CDUnknownBlockType)thenInBackground;
- (CDUnknownBlockType)then;
- (id)init;
- (CDUnknownBlockType)pause;
- (CDUnknownBlockType)thenUnleashZalgo;

@end

