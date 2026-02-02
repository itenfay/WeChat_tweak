//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class CAShapeLayer, MMUIButton, NSString, SightIconView, UICollectionView, UICollectionViewFlowLayout, UILabel, _TtC6WeChat36BrandProfileRecommendFollowViewModel;

@interface BrandProfileRecommendFollowUIView : UIView
{
    _TtC6WeChat36BrandProfileRecommendFollowViewModel *_viewModel;
    UILabel *_titleLabel;
    MMUIButton *_moreButton;
    UICollectionView *_collectionView;
    UICollectionViewFlowLayout *_collectionViewFlowLayout;
    UIView *_arrowBackgroundView;
    UIView *_arrowView;
    CAShapeLayer *_arrowLayer;
    SightIconView *_loadingView;
    UILabel *_errorLabel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UILabel *errorLabel; // @synthesize errorLabel=_errorLabel;
@property(retain, nonatomic) SightIconView *loadingView; // @synthesize loadingView=_loadingView;
@property(retain, nonatomic) CAShapeLayer *arrowLayer; // @synthesize arrowLayer=_arrowLayer;
@property(retain, nonatomic) UIView *arrowView; // @synthesize arrowView=_arrowView;
@property(retain, nonatomic) UIView *arrowBackgroundView; // @synthesize arrowBackgroundView=_arrowBackgroundView;
@property(retain, nonatomic) UICollectionViewFlowLayout *collectionViewFlowLayout; // @synthesize collectionViewFlowLayout=_collectionViewFlowLayout;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(retain, nonatomic) MMUIButton *moreButton; // @synthesize moreButton=_moreButton;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) _TtC6WeChat36BrandProfileRecommendFollowViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (id)generateArrowLayer:(double)arg1;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)onClickMoreButton;
- (void)onDatasUpdate;
- (void)layoutSubviews;
- (void)setupSubviews;
- (id)initWithViewModel:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

