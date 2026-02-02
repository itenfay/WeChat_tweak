//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMFinderLivePkTaskedBonusModel, UIImageView;
@protocol MMFinderLivePkTaskedBonusBarBackgroundView, MMFinderLivePkTaskedBonusBarContentView, MMFinderLivePkTaskedBonusBarViewDelegate;

@interface MMFinderLivePkTaskedBonusBarView : UIView
{
    id <MMFinderLivePkTaskedBonusBarViewDelegate> _delegate;
    UIView *_statefulViewsContainer;
    UIView<MMFinderLivePkTaskedBonusBarBackgroundView> *_backgroundView;
    UIView<MMFinderLivePkTaskedBonusBarContentView> *_contentView;
    UIImageView *_rightChevronView;
    MMFinderLivePkTaskedBonusModel *_model;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMFinderLivePkTaskedBonusModel *model; // @synthesize model=_model;
@property(retain, nonatomic) UIImageView *rightChevronView; // @synthesize rightChevronView=_rightChevronView;
@property(retain, nonatomic) UIView<MMFinderLivePkTaskedBonusBarContentView> *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) UIView<MMFinderLivePkTaskedBonusBarBackgroundView> *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(retain, nonatomic) UIView *statefulViewsContainer; // @synthesize statefulViewsContainer=_statefulViewsContainer;
@property(nonatomic) __weak id <MMFinderLivePkTaskedBonusBarViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)layoutBackgroundView:(id)arg1 matchingContentView:(id)arg2;
- (void)layoutContentView:(id)arg1;
- (void)onBarViewTapped;
- (void)layoutSubviews;
- (void)updateWithModel:(id)arg1 stateDescriptor:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end

