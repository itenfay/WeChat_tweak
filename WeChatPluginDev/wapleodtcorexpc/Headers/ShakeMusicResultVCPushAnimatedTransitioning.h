//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, UIView;

@interface ShakeMusicResultVCPushAnimatedTransitioning : NSObject
{
    CDUnknownBlockType _onFinishBlock;
    unsigned long long _scene;
    UIView *_musicCardView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *musicCardView; // @synthesize musicCardView=_musicCardView;
@property(nonatomic) unsigned long long scene; // @synthesize scene=_scene;
@property(copy, nonatomic) CDUnknownBlockType onFinishBlock; // @synthesize onFinishBlock=_onFinishBlock;
- (void)animateTransition:(id)arg1;
- (double)transitionDuration:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

