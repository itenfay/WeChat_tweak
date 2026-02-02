//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UICollectionViewCell.h>

@class MISSING_TYPE;

@interface _TtC6WeChat41EmoticonStoreDesignerProfileCrossBaseCell : UICollectionViewCell
{
    MISSING_TYPE *scrollDelegate;
    MISSING_TYPE *$__lazy_storage_$_collectionLayout;
    MISSING_TYPE *$__lazy_storage_$_collectionView;
    MISSING_TYPE *$__lazy_storage_$_loadMoreView;
    MISSING_TYPE *lastOffsetY;
    MISSING_TYPE *loadMoreViewHeight;
    MISSING_TYPE *layoutHorizontalInset;
}

- (void).cxx_destruct;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewWillBeginDecelerating:(id)arg1;
- (void)onLoadDone;
- (void)onLoadMore;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

