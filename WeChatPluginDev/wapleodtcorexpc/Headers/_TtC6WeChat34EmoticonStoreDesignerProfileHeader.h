//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UICollectionReusableView.h>

@class MISSING_TYPE;

@interface _TtC6WeChat34EmoticonStoreDesignerProfileHeader : UICollectionReusableView
{
    MISSING_TYPE *desginer;
    MISSING_TYPE *finderInfo;
    MISSING_TYPE *delegate;
    MISSING_TYPE *ipPacks;
    MISSING_TYPE *designerDesc;
    MISSING_TYPE *bannerUrl;
    MISSING_TYPE *ipCellIdentifier;
    MISSING_TYPE *$__lazy_storage_$_bannerView;
    MISSING_TYPE *$__lazy_storage_$_desginerNameLabel;
    MISSING_TYPE *$__lazy_storage_$_designerDescView;
    MISSING_TYPE *$__lazy_storage_$_finderLinkView;
    MISSING_TYPE *$__lazy_storage_$_ipPackLayout;
    MISSING_TYPE *$__lazy_storage_$_ipPackCollection;
    MISSING_TYPE *$__lazy_storage_$_loadMoreView;
}

- (void).cxx_destruct;
- (void)onLoadDone;
- (void)onLoadMore;
- (void)scrollViewWillBeginDecelerating:(id)arg1;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)onLinkClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (void)onExpandableTextViewExpand:(_Bool)arg1;
- (void)layoutSubviews;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

