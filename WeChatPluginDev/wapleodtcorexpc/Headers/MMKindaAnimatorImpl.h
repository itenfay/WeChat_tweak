//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMVoidCallback, NSString;

@interface MMKindaAnimatorImpl : NSObject
{
    MMVoidCallback *_shakeCompletion;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMVoidCallback *shakeCompletion; // @synthesize shakeCompletion=_shakeCompletion;
- (void)startShakeRotateImpl:(id)arg1 completion:(id)arg2;
- (void)startAnimationImpl:(float)arg1 animation:(id)arg2 completion:(id)arg3;
- (void)startAnimationImpl:(float)arg1 animation:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

