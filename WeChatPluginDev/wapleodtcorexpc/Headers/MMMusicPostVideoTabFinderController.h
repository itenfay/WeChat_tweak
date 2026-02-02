//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMMusicFinderVideoTabView, MMMusicInfo, MMMusicMVModel, MMMusicSearchVideoController, MMScrollView, NSMutableArray, NSString;
@protocol MMMusicPostVideoTabFinderControllerDataSource, MMMusicPostVideoTabFinderControllerDelegate;

@interface MMMusicPostVideoTabFinderController
{
    MMMusicSearchVideoController *_searchController;
    MMScrollView *_scrollView;
    NSMutableArray *_arrPageInfo;
    MMMusicFinderVideoTabView *_tabView;
    MMMusicMVModel *_mvModel;
    MMMusicInfo *m_musicInfo;
    double _currEposideDuration;
    long long _curTabIndex;
    _Bool _canMultiSelect;
    id <MMMusicPostVideoTabFinderControllerDataSource> _dataSource;
    id <MMMusicPostVideoTabFinderControllerDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool canMultiSelect; // @synthesize canMultiSelect=_canMultiSelect;
@property(nonatomic) __weak id <MMMusicPostVideoTabFinderControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <MMMusicPostVideoTabFinderControllerDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (void)reloadVisibleCellSelectedStatus;
- (id)generatePreviewDataSourceFromDataViewModel:(id)arg1;
- (id)generatePreviewDataSource;
- (id)searchVideoSelectedArr;
- (id)tabFinderBaseGetSelectedArr;
- (void)mmMusicPostVideoTabFinderBasePageController:(id)arg1 onTabFinderCellSelectedBtnChecked:(id)arg2;
- (void)onPageSelectVideo:(id)arg1 thumbImage:(id)arg2 cellFrameInVCAcquireBlock:(CDUnknownBlockType)arg3 contentOffsetResetBlock:(CDUnknownBlockType)arg4;
- (void)handleTabSelected:(long long)arg1;
- (void)onSwitchToThisPage:(_Bool)arg1;
- (void)mmMusicSearchVideoController:(id)arg1 onSearchFinderCellSelectedBtnChecked:(id)arg2;
- (void)onSelectSearchResultVideo:(id)arg1 thumbImage:(id)arg2 cellFrameInVCAcquireBlock:(CDUnknownBlockType)arg3 contentOffsetResetBlock:(CDUnknownBlockType)arg4;
- (void)onExitSearchMode;
- (void)onEnterSearchMode;
- (void)onSearch:(id)arg1;
- (void)resignTabFinderControllerSearchResponder;
- (void)enterTabFinderControllerSearchMode;
- (void)viewWillAppear:(_Bool)arg1;
- (void)layoutWithFrame:(struct CGRect)arg1;
- (void)initPageInfo;
- (void)initViews:(id)arg1;
- (_Bool)isDurationEnoughAndShowTipsIfNotEnough:(id)arg1;
- (_Bool)updateDataSelectedStatusByUniqueId:(id)arg1;
- (void)updateDataSelectedStatus;
- (void)updateCurrEposideDuration:(double)arg1;
- (void)setCurrEposideDuration:(double)arg1;
- (void)updateCanMultiSelect:(_Bool)arg1;
- (id)arrPanGestures;
- (id)initWithViewController:(id)arg1 mvModel:(id)arg2 canMultiSelect:(_Bool)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

