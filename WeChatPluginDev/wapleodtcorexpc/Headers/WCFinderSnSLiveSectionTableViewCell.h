//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUIButton, NSMutableArray, NSString, UICollectionView, UILabel, UIView;
@protocol WCFinderSnSLiveSectionTableViewCellDelegate;

@interface WCFinderSnSLiveSectionTableViewCell
{
    id <WCFinderSnSLiveSectionTableViewCellDelegate> _delegate;
    unsigned long long _displayType;
    UICollectionView *_snsLiveCollectionView;
    NSMutableArray *_dataSource;
    UILabel *_titleTipsLabel;
    MMUIButton *_clearBtn;
    UIView *_topSeparateLine;
    UIView *_bottomSeparateLine;
}

+ (double)cellHeightWithWidth:(double)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) UIView *bottomSeparateLine; // @synthesize bottomSeparateLine=_bottomSeparateLine;
@property(retain, nonatomic) UIView *topSeparateLine; // @synthesize topSeparateLine=_topSeparateLine;
@property(retain, nonatomic) MMUIButton *clearBtn; // @synthesize clearBtn=_clearBtn;
@property(retain, nonatomic) UILabel *titleTipsLabel; // @synthesize titleTipsLabel=_titleTipsLabel;
@property(retain, nonatomic) NSMutableArray *dataSource; // @synthesize dataSource=_dataSource;
@property(retain, nonatomic) UICollectionView *snsLiveCollectionView; // @synthesize snsLiveCollectionView=_snsLiveCollectionView;
@property(nonatomic) unsigned long long displayType; // @synthesize displayType=_displayType;
@property(nonatomic) __weak id <WCFinderSnSLiveSectionTableViewCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void)monitorView:(id)arg1 newExposedItems:(id)arg2 lastExposedItems:(id)arg3;
- (void)onClickClearBtn:(id)arg1;
- (void)collectionView:(id)arg1 didUnhighlightItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didHighlightItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)scrollToFirstLiveItem;
- (void)updateWithDataSource:(id)arg1 hiddenBottomSeparateLine:(_Bool)arg2;
- (id)getVisibleFeedVM;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (void)initSubView;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

