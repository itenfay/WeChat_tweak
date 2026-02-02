//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSIndexPath, NSString, WCFinderCarouselCollectionView, WCFinderCarouselFlowLayout;
@protocol WCFinderCarouseDelegate, WCFinderCarouselDatasource;

@interface WCFinderCarouselView
{
    _Bool _endless;
    unsigned long long _style;
    id <WCFinderCarouseDelegate> _delegate;
    id <WCFinderCarouselDatasource> _dataSource;
    WCFinderCarouselFlowLayout *_flowLayout;
    WCFinderCarouselCollectionView *_carouselView;
    long long _numbers;
    NSIndexPath *_currentIndexPath;
    long long _currentIndex;
}

+ (double)displayHeightWithWidth:(double)arg1;
- (void).cxx_destruct;
@property(nonatomic) long long currentIndex; // @synthesize currentIndex=_currentIndex;
@property(retain, nonatomic) NSIndexPath *currentIndexPath; // @synthesize currentIndexPath=_currentIndexPath;
@property(nonatomic) long long numbers; // @synthesize numbers=_numbers;
@property(retain, nonatomic) WCFinderCarouselCollectionView *carouselView; // @synthesize carouselView=_carouselView;
@property(nonatomic) _Bool endless; // @synthesize endless=_endless;
@property(retain, nonatomic) WCFinderCarouselFlowLayout *flowLayout; // @synthesize flowLayout=_flowLayout;
@property(nonatomic) __weak id <WCFinderCarouselDatasource> dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) __weak id <WCFinderCarouseDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) unsigned long long style; // @synthesize style=_style;
- (long long)infactNumbers;
- (void)setBackgroundColor:(id)arg1;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)scrollTo:(long long)arg1 animation:(_Bool)arg2;
- (void)nextCell;
- (void)velocityZero;
- (void)adjustErrorCell:(_Bool)arg1;
- (long long)caculateIndex:(long long)arg1;
- (void)checkOutofBounds;
- (id)originIndexPath;
- (void)cusScrollAnimationEnd:(id)arg1;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)cusScrollViewWillBeginDecelerating:(_Bool)arg1 scroll:(id)arg2;
- (void)scrollViewWillBeginDecelerating:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)freshCarousel;
- (void)registerViewClass:(Class)arg1 identifier:(id)arg2;
- (void)configureView;
- (id)initWithFrame:(struct CGRect)arg1 flowLayout:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

