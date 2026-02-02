//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMFinderLivePkTaskedBonusBarBriefingContentMaskingView, MMFinderLivePkTaskedBonusModel, MMLiveDisplayLinkAnimator, NSString, UIColor, UILabel;

@interface MMFinderLivePkTaskedBonusBarBriefingContentView : UIView
{
    UIView *_contentContainer;
    UILabel *_contentLabel;
    MMFinderLivePkTaskedBonusBarBriefingContentMaskingView *_maskingView;
    MMLiveDisplayLinkAnimator *_animator;
    double _currentProgress;
    MMFinderLivePkTaskedBonusModel *_model;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMFinderLivePkTaskedBonusModel *model; // @synthesize model=_model;
@property(nonatomic) double currentProgress; // @synthesize currentProgress=_currentProgress;
@property(retain, nonatomic) MMLiveDisplayLinkAnimator *animator; // @synthesize animator=_animator;
@property(retain, nonatomic) MMFinderLivePkTaskedBonusBarBriefingContentMaskingView *maskingView; // @synthesize maskingView=_maskingView;
@property(retain, nonatomic) UILabel *contentLabel; // @synthesize contentLabel=_contentLabel;
@property(retain, nonatomic) UIView *contentContainer; // @synthesize contentContainer=_contentContainer;
- (void)updateContentTransformWithProgress:(double)arg1;
- (void)stopScrolling;
- (void)startScrolling;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)updateWithModel:(id)arg1;
@property(readonly, nonatomic) UIColor *contentShadowColor;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, nonatomic) NSString *currentPreferredGiftId;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,N

@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

