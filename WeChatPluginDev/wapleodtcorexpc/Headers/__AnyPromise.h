//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

@interface __AnyPromise : NSObject
{
    MISSING_TYPE *box;
    MISSING_TYPE *context;
}

- (void).cxx_destruct;
- (id)init;
@property(nonatomic, readonly) _Bool __pending;
@property(nonatomic, readonly) id __value;
- (void)__pipe:(CDUnknownBlockType)arg1;
- (id)__wait;
- (id)__ensureOn:(id)arg1 execute:(CDUnknownBlockType)arg2;
- (id)__catchOn:(id)arg1 execute:(CDUnknownBlockType)arg2;
- (id)__thenOn:(id)arg1 execute:(CDUnknownBlockType)arg2;
- (void)setExpiredWithTime:(double)arg1;
- (void)sealTimeOutError;
- (id)initWithResolver:(CDUnknownBlockType)arg1;

@end

