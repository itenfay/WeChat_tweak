//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMFinderLiveGiftCustomizationModel, MMLiveRewardGiftCustomizationTipChevronView, NSString, UIButton, UICollectionView;
@protocol MMLiveRewardGiftCustomizationTipViewDelegate;

@interface MMLiveRewardGiftCustomizationTipView : UIView
{
    _Bool _expanded;
    MMFinderLiveGiftCustomizationModel *_model;
    double _chevronX;
    id <MMLiveRewardGiftCustomizationTipViewDelegate> _delegate;
    UIView *_containerView;
    MMLiveRewardGiftCustomizationTipChevronView *_chevronView;
    UIView *_compactContainerView;
    UIButton *_expandButton;
    UIView *_expandedContainerView;
    UIView *_colorsCollectionViewContainerView;
    UICollectionView *_colorsCollectionView;
    UIView *_separatorBar;
    UIButton *_textCustomizationButton;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIButton *textCustomizationButton; // @synthesize textCustomizationButton=_textCustomizationButton;
@property(retain, nonatomic) UIView *separatorBar; // @synthesize separatorBar=_separatorBar;
@property(retain, nonatomic) UICollectionView *colorsCollectionView; // @synthesize colorsCollectionView=_colorsCollectionView;
@property(retain, nonatomic) UIView *colorsCollectionViewContainerView; // @synthesize colorsCollectionViewContainerView=_colorsCollectionViewContainerView;
@property(retain, nonatomic) UIView *expandedContainerView; // @synthesize expandedContainerView=_expandedContainerView;
@property(retain, nonatomic) UIButton *expandButton; // @synthesize expandButton=_expandButton;
@property(retain, nonatomic) UIView *compactContainerView; // @synthesize compactContainerView=_compactContainerView;
@property(retain, nonatomic) MMLiveRewardGiftCustomizationTipChevronView *chevronView; // @synthesize chevronView=_chevronView;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(nonatomic) __weak id <MMLiveRewardGiftCustomizationTipViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) double chevronX; // @synthesize chevronX=_chevronX;
@property(nonatomic) _Bool expanded; // @synthesize expanded=_expanded;
@property(retain, nonatomic) MMFinderLiveGiftCustomizationModel *model; // @synthesize model=_model;
- (void)configureViewsForStyle:(id)arg1;
- (void)configureViewsForExpansion:(_Bool)arg1;
- (void)initializeComponents;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)onTextCustomizationButtonTapped;
- (void)onExpandButtonTapped;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)reloadContent;
- (id)initWithModel:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

