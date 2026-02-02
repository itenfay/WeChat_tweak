//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class FinderLiveProductHintAnimationInfo, MMFinderLiveNumberAnimationLogic, MMFinderLiveTaskId, MMGradientView, NSString, PAGImageView, UILabel;
@protocol MMFinderLiveECHotSaleLikeAnimationViewDelegate;

@interface MMFinderLiveECHotSaleLikeAnimationView : UIView
{
    _Bool _hasFinishedEnter;
    MMFinderLiveNumberAnimationLogic *_numberAnimationLogic;
    id <MMFinderLiveECHotSaleLikeAnimationViewDelegate> _delegate;
    MMGradientView *_backgroundView;
    PAGImageView *_pagView;
    UILabel *_prefixLabel;
    UILabel *_numberLabel;
    FinderLiveProductHintAnimationInfo *_animationInfo;
    unsigned long long _productID;
    MMFinderLiveTaskId *_taskID;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMFinderLiveTaskId *taskID; // @synthesize taskID=_taskID;
@property(nonatomic) _Bool hasFinishedEnter; // @synthesize hasFinishedEnter=_hasFinishedEnter;
@property(nonatomic) unsigned long long productID; // @synthesize productID=_productID;
@property(retain, nonatomic) FinderLiveProductHintAnimationInfo *animationInfo; // @synthesize animationInfo=_animationInfo;
@property(retain, nonatomic) UILabel *numberLabel; // @synthesize numberLabel=_numberLabel;
@property(retain, nonatomic) UILabel *prefixLabel; // @synthesize prefixLabel=_prefixLabel;
@property(retain, nonatomic) PAGImageView *pagView; // @synthesize pagView=_pagView;
@property(retain, nonatomic) MMGradientView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(nonatomic) __weak id <MMFinderLiveECHotSaleLikeAnimationViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) MMFinderLiveNumberAnimationLogic *numberAnimationLogic; // @synthesize numberAnimationLogic=_numberAnimationLogic;
- (void)didMoveToWindow;
- (void)finishWithLogic:(id)arg1;
- (void)changeNumberWithLogic:(id)arg1;
- (void)didFinishEnter;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (id)initWithAnimationInfo:(id)arg1 taskID:(id)arg2 productID:(unsigned long long)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

