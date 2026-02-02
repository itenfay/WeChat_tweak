//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UICollectionViewCell.h>

@class EmoticonBoardCrossSectionInfo, MMLoadMoreCollectionView, NSString, UICollectionViewFlowLayout, UIView;
@protocol EmoticonBoardCrossCollectionBasePageDelegate;

@interface EmoticonBoardCrossCollectionBasePageCell : UICollectionViewCell
{
    _Bool _darkMode;
    id <EmoticonBoardCrossCollectionBasePageDelegate> _delegate;
    EmoticonBoardCrossSectionInfo *_sectionInfo;
    MMLoadMoreCollectionView *_collectionView;
    UICollectionViewFlowLayout *_collectionLayout;
    UIView *_topMaskView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *topMaskView; // @synthesize topMaskView=_topMaskView;
@property(retain, nonatomic) UICollectionViewFlowLayout *collectionLayout; // @synthesize collectionLayout=_collectionLayout;
@property(retain, nonatomic) MMLoadMoreCollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(nonatomic) _Bool darkMode; // @synthesize darkMode=_darkMode;
@property(retain, nonatomic) EmoticonBoardCrossSectionInfo *sectionInfo; // @synthesize sectionInfo=_sectionInfo;
@property(nonatomic) __weak id <EmoticonBoardCrossCollectionBasePageDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)accessibilityScroll:(long long)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (id)collectionViewLayout;
- (unsigned long long)maximumNumberOfItemsInRow;
- (void)layoutSubviews;
- (void)configCollectionViewWithFrame:(struct CGRect)arg1;
@property(readonly, nonatomic, getter=isTracking) _Bool tracking;
- (void)setPageOffset:(struct CGPoint)arg1 animated:(_Bool)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

