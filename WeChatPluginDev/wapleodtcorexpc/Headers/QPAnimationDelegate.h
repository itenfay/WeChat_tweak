//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface QPAnimationDelegate : NSObject
{
    CDUnknownBlockType _onStart;
    CDUnknownBlockType _onComplete;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType onComplete; // @synthesize onComplete=_onComplete;
@property(copy, nonatomic) CDUnknownBlockType onStart; // @synthesize onStart=_onStart;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (void)animationDidStart:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

