//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class FinderGetWindowProductProfileCardInfoResponse, MMUIButton, MMWebImageView, NSString, UIButton, UICollectionView, UILabel;

@interface WCFinderLiveCompleteShoppingView : UIView
{
    CDUnknownBlockType _onJumpToShopPage;
    CDUnknownBlockType _onJumpToDetailPage;
    FinderGetWindowProductProfileCardInfoResponse *_productInfo;
    UICollectionView *_collectionView;
    UILabel *_titleLabel;
    MMUIButton *_shopButton;
    UILabel *_shopNameLabel;
    MMWebImageView *_shopTagIcon;
    UILabel *_reputationTitleLabel;
    UILabel *_reputationValueLabel;
    UILabel *_reputationLevelLabel;
    UIView *_seperator;
    UILabel *_saleLabel;
    UIButton *_internalClickButton;
}

+ (_Bool)shouldShowShoppingViewWithProductInfo:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) UIButton *internalClickButton; // @synthesize internalClickButton=_internalClickButton;
@property(retain, nonatomic) UILabel *saleLabel; // @synthesize saleLabel=_saleLabel;
@property(retain, nonatomic) UIView *seperator; // @synthesize seperator=_seperator;
@property(retain, nonatomic) UILabel *reputationLevelLabel; // @synthesize reputationLevelLabel=_reputationLevelLabel;
@property(retain, nonatomic) UILabel *reputationValueLabel; // @synthesize reputationValueLabel=_reputationValueLabel;
@property(retain, nonatomic) UILabel *reputationTitleLabel; // @synthesize reputationTitleLabel=_reputationTitleLabel;
@property(retain, nonatomic) MMWebImageView *shopTagIcon; // @synthesize shopTagIcon=_shopTagIcon;
@property(retain, nonatomic) UILabel *shopNameLabel; // @synthesize shopNameLabel=_shopNameLabel;
@property(retain, nonatomic) MMUIButton *shopButton; // @synthesize shopButton=_shopButton;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(retain, nonatomic) FinderGetWindowProductProfileCardInfoResponse *productInfo; // @synthesize productInfo=_productInfo;
@property(copy, nonatomic) CDUnknownBlockType onJumpToDetailPage; // @synthesize onJumpToDetailPage=_onJumpToDetailPage;
@property(copy, nonatomic) CDUnknownBlockType onJumpToShopPage; // @synthesize onJumpToShopPage=_onJumpToShopPage;
- (void)onShoppingButtonTapped;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumInteritemSpacingForSectionAtIndex:(long long)arg3;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (double)calculateCollectionViewCellLen;
- (void)reloadContents;
- (void)initViewsIfNeeded;
- (void)sizeToFit;
- (void)layoutSubviews;
- (void)updateWithProductInfo:(id)arg1;
- (id)init;
- (_Bool)cannotClickCell;
- (_Bool)useNewStyle;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

