//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMFinderLivePivotEducationViewModel, MMUILabel, NSString, UIImageView;

@interface MMFinderLivePivotEducationView : UIView
{
    _Bool _touchToDismiss;
    CDUnknownBlockType _dismissAction;
    CDUnknownBlockType _hitTestBlock;
    CDUnknownBlockType _clickTipsViewBlock;
    MMFinderLivePivotEducationViewModel *_viewModel;
    UIView *_backgroundView;
    UIImageView *_upIconView;
    MMUILabel *_tipsLabel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMUILabel *tipsLabel; // @synthesize tipsLabel=_tipsLabel;
@property(retain, nonatomic) UIImageView *upIconView; // @synthesize upIconView=_upIconView;
@property(retain, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(retain, nonatomic) MMFinderLivePivotEducationViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(copy, nonatomic) CDUnknownBlockType clickTipsViewBlock; // @synthesize clickTipsViewBlock=_clickTipsViewBlock;
@property(copy, nonatomic) CDUnknownBlockType hitTestBlock; // @synthesize hitTestBlock=_hitTestBlock;
@property(copy, nonatomic) CDUnknownBlockType dismissAction; // @synthesize dismissAction=_dismissAction;
@property(nonatomic) _Bool touchToDismiss; // @synthesize touchToDismiss=_touchToDismiss;
- (double)tipsContainerViewHeight;
- (void)onTipsHeightChange:(id)arg1 tipsHeight:(double)arg2;
- (void)onTipsAlphaChange:(id)arg1 tipsAlpha:(double)arg2;
- (id)educationView;
- (double)viewHeight;
- (void)updateViewModel:(id)arg1;
- (void)onScrollViewDidScroll:(id)arg1;
- (void)disMissSelf;
- (void)scrollToOtherLiveTask;
- (void)refreshBackgroundViewHeight:(double)arg1;
- (void)refreshLayout;
- (void)layoutSubviews;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)setup;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

