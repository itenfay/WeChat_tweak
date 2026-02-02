//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMFinderLiveBannerView, MMFinderLiveTask, MMUILabel, NSArray, NSString, UICollectionView;

@interface WCFinderLiveCompleteLiveBannerContentView : UIView
{
    MMFinderLiveBannerView *_bannerView;
    MMFinderLiveTask *_liveTask;
    UIView *_verticalLineView;
    MMUILabel *_titleLabel;
    UICollectionView *_collectionView;
    NSArray *_bannerList;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *bannerList; // @synthesize bannerList=_bannerList;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(retain, nonatomic) MMUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIView *verticalLineView; // @synthesize verticalLineView=_verticalLineView;
@property(retain, nonatomic) MMFinderLiveTask *liveTask; // @synthesize liveTask=_liveTask;
@property(retain, nonatomic) MMFinderLiveBannerView *bannerView; // @synthesize bannerView=_bannerView;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumInteritemSpacingForSectionAtIndex:(long long)arg3;
- (double)itemMargin;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForFooterInSection:(long long)arg3;
- (double)videoContainerViewPadding;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)didSelectWithBannerInfo:(id)arg1;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)updateWithLiveInfo:(id)arg1;
- (void)layoutUI;
- (void)createUI;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

