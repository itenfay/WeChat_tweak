//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CAShapeLayer, MMFinderLiveAngleViewModel, MMFinderLiveChooseClarityViewNavBar, MMFinderLiveMultiAngleCollectionView, UIView;

@interface MMFinderLiveMultiAngleView
{
    MMFinderLiveAngleViewModel *_angleViewModel;
    CAShapeLayer *_shapeLayer;
    UIView *_contentView;
    MMFinderLiveChooseClarityViewNavBar *_navBar;
    MMFinderLiveMultiAngleCollectionView *_mainCollectionView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMFinderLiveMultiAngleCollectionView *mainCollectionView; // @synthesize mainCollectionView=_mainCollectionView;
@property(retain, nonatomic) MMFinderLiveChooseClarityViewNavBar *navBar; // @synthesize navBar=_navBar;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) CAShapeLayer *shapeLayer; // @synthesize shapeLayer=_shapeLayer;
@property(nonatomic) __weak MMFinderLiveAngleViewModel *angleViewModel; // @synthesize angleViewModel=_angleViewModel;
- (double)getAngleViewCollectionViewHeight;
- (double)getItemHeight;
- (double)getItemWidth;
- (double)contentViewHeight;
- (void)updateSelfViewShapeClip;
- (void)setupPageSheetConfig;
- (void)layoutUI;
- (void)createUI;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

