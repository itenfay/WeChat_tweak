//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class NSMutableArray, NSMutableDictionary, NSString, UICollectionView, WCFilterView;
@protocol ResourceBrowseCollectionViewDelegate;

@interface ResourceBrowseCollectionView : UIView
{
    _Bool _showFilter;
    _Bool _inAllActionProgress;
    id <ResourceBrowseCollectionViewDelegate> _delegate;
    NSMutableArray *_allMsgInfos;
    NSMutableArray *_selectedMsgInfos;
    NSMutableDictionary *_sectionTimeTitleInfo;
    NSMutableArray *_sectionTitleArray;
    NSMutableDictionary *_sectionMsgInfos;
    NSMutableDictionary *_sectionSelectedMsgInfos;
    UICollectionView *_dataCollectionView;
    double _itemMargin;
    unsigned long long _eCollectonViewOrder;
    WCFilterView *_filterView;
    struct CGSize _resourceThumbSize;
    struct CGSize _resourceHeaderSize;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool inAllActionProgress; // @synthesize inAllActionProgress=_inAllActionProgress;
@property(retain, nonatomic) WCFilterView *filterView; // @synthesize filterView=_filterView;
@property(nonatomic) unsigned long long eCollectonViewOrder; // @synthesize eCollectonViewOrder=_eCollectonViewOrder;
@property(nonatomic) double itemMargin; // @synthesize itemMargin=_itemMargin;
@property(nonatomic) struct CGSize resourceHeaderSize; // @synthesize resourceHeaderSize=_resourceHeaderSize;
@property(nonatomic) struct CGSize resourceThumbSize; // @synthesize resourceThumbSize=_resourceThumbSize;
@property(retain, nonatomic) UICollectionView *dataCollectionView; // @synthesize dataCollectionView=_dataCollectionView;
@property(retain, nonatomic) NSMutableDictionary *sectionSelectedMsgInfos; // @synthesize sectionSelectedMsgInfos=_sectionSelectedMsgInfos;
@property(retain, nonatomic) NSMutableDictionary *sectionMsgInfos; // @synthesize sectionMsgInfos=_sectionMsgInfos;
@property(retain, nonatomic) NSMutableArray *sectionTitleArray; // @synthesize sectionTitleArray=_sectionTitleArray;
@property(retain, nonatomic) NSMutableDictionary *sectionTimeTitleInfo; // @synthesize sectionTimeTitleInfo=_sectionTimeTitleInfo;
@property(retain, nonatomic) NSMutableArray *selectedMsgInfos; // @synthesize selectedMsgInfos=_selectedMsgInfos;
@property(retain, nonatomic) NSMutableArray *allMsgInfos; // @synthesize allMsgInfos=_allMsgInfos;
@property(nonatomic) _Bool showFilter; // @synthesize showFilter=_showFilter;
@property(nonatomic) __weak id <ResourceBrowseCollectionViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)p_handleChatLogInfo:(id)arg1 cellFrame:(struct CGRect)arg2;
- (void)onClickCell:(id)arg1;
- (void)onUnselectCell:(id)arg1;
- (void)onSelectCell:(id)arg1;
- (_Bool)isCellBeSelected:(id)arg1;
- (void)onUnselectResourceHeader:(id)arg1;
- (void)onSelectResourceHeader:(id)arg1;
- (_Bool)isResourceHeaderViewCellAllClick:(id)arg1;
- (void)collectionView:(id)arg1 didDeselectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)selectAll;
- (void)deselectAll;
- (unsigned long long)getSelectedSize;
- (_Bool)isAllSelected;
- (_Bool)isDataEmpty;
- (id)getCurrentViewController;
- (void)onSelectionPanelDismissed:(id)arg1;
- (void)willMoveToParentViewController;
- (id)getSelectedMsgInfos;
- (void)updateMsgInfos:(id)arg1 withSortType:(unsigned long long)arg2;
- (void)updateMsgInfos:(id)arg1;
- (void)sortMsgInfos;
- (_Bool)isCurrentBrowseViewInShowTimeMode;
- (id)initWithFrame:(struct CGRect)arg1 andShowFilter:(_Bool)arg2;
- (id)p_getFilterSection;
- (id)initFilterWithFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

