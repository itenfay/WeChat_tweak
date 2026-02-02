//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, __AnyPromise;

@interface AnyPromise : NSObject
{
    __AnyPromise *d;
}

+ (id)promiseWithValue:(id)arg1;
+ (id)promiseWithResolverBlock:(CDUnknownBlockType)arg1;
+ (id)promiseWithDuration:(double)arg1 animate:(CDUnknownBlockType)arg2;
+ (id)promiseWithBlock:(CDUnknownBlockType)arg1;
+ (id)errorPromiseWithDomain:(id)arg1 code:(long long)arg2 userInfo:(id)arg3;
+ (id)promiseWithSmartResolver:(CDUnknownBlockType *)arg1;
+ (id)promiseWithSmartResolverBlock:(CDUnknownBlockType)arg1;
+ (id)promiseWithBooleanAdapterBlock:(CDUnknownBlockType)arg1;
+ (id)promiseWithIntegerAdapterBlock:(CDUnknownBlockType)arg1;
+ (id)promiseWithAdapterBlock:(CDUnknownBlockType)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) id value;
@property(readonly, nonatomic) _Bool fulfilled;
@property(readonly, nonatomic) _Bool rejected;
@property(readonly, nonatomic) _Bool pending;
- (id)wait;
- (CDUnknownBlockType)ensureOn;
- (CDUnknownBlockType)ensure;
- (CDUnknownBlockType)catchInBackground;
- (CDUnknownBlockType)catchOnMain;
- (CDUnknownBlockType)catchOn;
- (CDUnknownBlockType)thenInBackground;
- (CDUnknownBlockType)thenOn;
- (CDUnknownBlockType)then;
- (id)__d;
- (void)__pipe:(CDUnknownBlockType)arg1;
- (id)initWithResolver:(CDUnknownBlockType *)arg1;
- (id)initWith__D:(id)arg1;
@property(readonly, copy, nonatomic) CDUnknownBlockType thenAnimation;
- (CDUnknownBlockType)showToastForCatchedError;
- (CDUnknownBlockType)catchErrorThenSay;
- (CDUnknownBlockType)setExpiredTime;
@property(nonatomic, readonly) NSString *description;

@end

