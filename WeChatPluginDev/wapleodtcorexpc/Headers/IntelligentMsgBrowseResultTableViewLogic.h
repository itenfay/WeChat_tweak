//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class IntelligentRefreshTableFooterView, MMTableView, MMUIView, NSMutableArray, NSMutableDictionary, NSString, SimpleImgInfo;
@protocol IntelligentMsgBrowseResultTableViewLogicDelegate, IntelligentMsgBrowseViewDelegate;

@interface IntelligentMsgBrowseResultTableViewLogic
{
    SimpleImgInfo *m_curImgInfo;
    NSMutableArray *m_arrImgInfo;
    unsigned long long m_colNum;
    double m_margin;
    struct CGRect m_frame;
    NSMutableArray *m_needLoadArray;
    double m_scrollOffset;
    IntelligentRefreshTableFooterView *m_nextLoadingView;
    NSMutableDictionary *m_dicSectionTitle;
    NSMutableDictionary *m_dicMsgsByTitle;
    NSMutableDictionary *m_dicSectionSelected;
    struct map<NSString *, bool, CompareNSString, std::allocator<std::pair<NSString *const, bool>>> m_dicMsgSelected;
    NSMutableDictionary *m_dicWeakMedia;
    MMUIView *m_nullDataNextLoadingView;
    _Bool _m_bIsShowMenu;
    unsigned int _m_style;
    id <IntelligentMsgBrowseViewDelegate> m_browseViewDelegate;
    MMTableView *m_tableView;
    id <IntelligentMsgBrowseResultTableViewLogicDelegate> _m_delegate;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(nonatomic) __weak id <IntelligentMsgBrowseResultTableViewLogicDelegate> m_delegate; // @synthesize m_delegate=_m_delegate;
@property(nonatomic) _Bool m_bIsShowMenu; // @synthesize m_bIsShowMenu=_m_bIsShowMenu;
@property(nonatomic) unsigned int m_style; // @synthesize m_style=_m_style;
@property(retain, nonatomic) MMTableView *m_tableView; // @synthesize m_tableView;
@property(nonatomic) __weak id <IntelligentMsgBrowseViewDelegate> m_browseViewDelegate; // @synthesize m_browseViewDelegate;
- (void)MMRefreshTableFooterDidTriggerRefresh:(id)arg1;
- (void)onButtonLongClick:(id)arg1;
- (void)onClickMsgSquareThumb:(id)arg1;
- (long long)IntelligentMsgBrowseResultTableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (_Bool)IntelligentMsgBrowseResultTableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (id)IntelligentMsgBrowseResultTableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)getMsgImageSquareThumbView:(unsigned int)arg1;
- (void)genImgCell:(id)arg1 indexPath:(id)arg2;
- (long long)calcImgItemIndex:(long long)arg1 num:(long long)arg2;
- (double)IntelligentMsgBrowseResultTableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)IntelligentMsgBrowseResultTableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (id)IntelligentMsgBrowseResultTableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (double)IntelligentMsgBrowseResultTableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (long long)IntelligentMsgBrowseResultTableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInIntelligentMsgBrowseResultTableView:(id)arg1;
- (void)setCurMsgHighlighted:(_Bool)arg1 animated:(_Bool)arg2;
- (id)getIndexPathOfCurMsg;
- (void)startHighLightedCurMsg;
- (void)endHighLightedCurMsg;
- (void)onTransitionToNewSize;
- (void)setTableViewContentInset:(struct UIEdgeInsets)arg1;
- (void)setM_scrollOffset:(double)arg1;
- (void)IntelligentMsgBrowseResultTableViewWillBeginDragging:(id)arg1;
- (void)IntelligentMsgBrowseResultTableViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)_genImgCell:(id)arg1 indexPath:(id)arg2;
- (void)relaodCellWhenScrollViewStop;
- (void)IntelligentMsgBrowseResultTableViewDidEndDecelerating:(id)arg1;
- (void)IntelligentMsgBrowseResultTableViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)IntelligentMsgBrowseResultTableViewDidScroll:(id)arg1;
- (id)getNextLoadingView;
- (void)clearNextLoadingView;
- (unsigned long long)getArrImgCount;
- (_Bool)checkIsHadDelayLoadingStatus;
- (_Bool)getIsInitialHadBuildPriorityBuildIndexMsg;
- (_Bool)getIsHadBuildPriorityBuildIndexMsg;
- (id)getMediaViewWithMsgWrap:(id)arg1;
- (struct CGRect)getMediaFrameWithMsgWrap:(id)arg1;
- (id)getArrSectionData;
- (id)getSimpleMsgFrom:(id)arg1;
- (void)showNullDataNextLoadingView;
- (void)resetNormalNextLoadingView;
- (void)updateNextLoadingViewText;
- (id)getNextLoadingViewText;
- (void)updateNextMore:(_Bool)arg1;
- (void)updateLoadinNextMore:(_Bool)arg1;
- (void)resetData;
- (void)rebuildMsgData:(id)arg1;
- (void)reSizeFrame:(struct CGRect)arg1;
- (void)initData;
- (void)initUI;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

