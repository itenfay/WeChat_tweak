//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMProgressViewExLayer, NSString, UIColor;

@interface MMProgressViewEx : UIView
{
    double total;
    double current;
    UIColor *frontColor;
    UIColor *backColor;
    double stepDuration;
    _Bool hideOnCompleteProcess;
    MMProgressViewExLayer *m_layer;
    _Bool _autoContinue;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool autoContinue; // @synthesize autoContinue=_autoContinue;
@property(nonatomic) _Bool hideOnCompleteProcess; // @synthesize hideOnCompleteProcess;
@property(nonatomic) double stepDuration; // @synthesize stepDuration;
@property(retain, nonatomic) UIColor *backColor; // @synthesize backColor;
@property(retain, nonatomic) UIColor *frontColor; // @synthesize frontColor;
@property(nonatomic) double current; // @synthesize current;
@property(nonatomic) double total; // @synthesize total;
- (void)stopLoading;
- (void)startLoadingWithImage:(id)arg1;
- (void)startLoading;
- (void)autoContinueAnimate;
- (void)setFrame:(struct CGRect)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (void)didMoveToWindow;
- (void)animateBecomeActive:(id)arg1;
- (void)hideSelf;
- (void)doAnimation_v2;
- (void)doAnimation;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

