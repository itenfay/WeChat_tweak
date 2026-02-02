//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMTableView, NSMutableArray, NSMutableDictionary, NSString, SimpleImgInfo, UILabel, UIView, WCTimeLineFooterView;
@protocol MsgFastBrowseViewDelegate;

@interface MsgFastBrowseView
{
    SimpleImgInfo *m_curImgInfo;
    NSMutableArray *m_arrImgInfo;
    double m_scrollOffset;
    NSMutableDictionary *m_dicSectionTitle;
    NSMutableDictionary *m_dicMsgsByTitle;
    NSMutableDictionary *m_dicSectionSelected;
    struct map<NSString *, bool, CompareNSString, std::allocator<std::pair<NSString *const, bool>>> m_dicMsgSelected;
    MMTableView *m_tableView;
    UILabel *m_noImageTip;
    id <MsgFastBrowseViewDelegate> fastBrowseViewDelegate;
    unsigned long long m_colNum;
    double m_margin;
    NSMutableArray *m_needLoadArray;
    WCTimeLineFooterView *m_nextLoadingView;
    WCTimeLineFooterView *m_preLoadingView;
    NSMutableDictionary *m_dicWeakMedia;
    UIView *m_footerView;
    _Bool m_showCheckMark;
    _Bool m_hideSelectAllSection;
    _Bool _m_bNotMainTable;
    id <MsgFastBrowseViewDelegate> m_fastBrowseViewDelegate;
    unsigned long long m_style;
    NSString *_m_nsChatName;
    long long _m_selectionLimit;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(nonatomic) long long m_selectionLimit; // @synthesize m_selectionLimit=_m_selectionLimit;
@property(nonatomic) _Bool m_bNotMainTable; // @synthesize m_bNotMainTable=_m_bNotMainTable;
@property(retain, nonatomic) NSString *m_nsChatName; // @synthesize m_nsChatName=_m_nsChatName;
@property(nonatomic) unsigned long long m_style; // @synthesize m_style;
@property(retain, nonatomic) MMTableView *m_tableView; // @synthesize m_tableView;
@property(nonatomic) _Bool m_hideSelectAllSection; // @synthesize m_hideSelectAllSection;
@property(nonatomic) _Bool m_showCheckMark; // @synthesize m_showCheckMark;
@property(nonatomic) double m_scrollOffset; // @synthesize m_scrollOffset;
@property(retain, nonatomic) SimpleImgInfo *m_curImgInfo; // @synthesize m_curImgInfo;
@property(nonatomic) __weak id <MsgFastBrowseViewDelegate> m_fastBrowseViewDelegate; // @synthesize m_fastBrowseViewDelegate;
- (void)setImgInfoAsSelected:(id)arg1;
- (id)getFooterView;
- (void)setTableFooterView:(id)arg1;
- (struct CGRect)getMediaFrameWithMsgWrap:(id)arg1;
- (void)unSelectAllMessages;
- (void)selectAllMessages;
- (long long)hasSelectedMessagesCount;
- (id)getSelectedMessages;
- (void)updateSectionHeaderCheckMarkBtn:(id)arg1 isSelected:(_Bool)arg2;
- (void)updateSectionHeaderCheckMark:(id)arg1 to:(_Bool)arg2;
- (void)onSelectSection:(id)arg1;
- (_Bool)changeSelectOfMessage:(id)arg1 fromMsgImageSquareThumbView:(_Bool)arg2;
- (_Bool)changeSelectOfMessage:(id)arg1;
- (_Bool)onSelectMessage:(id)arg1;
- (void)onLongPressMsgSquareThumb:(id)arg1;
- (void)onClickMsgSquareThumb:(id)arg1;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)getMsgImageSquareThumbViewWithImgInfo:(id)arg1;
- (id)getMsgImageSquareThumbView:(unsigned int)arg1;
- (void)genImgCell:(id)arg1 indexPath:(id)arg2;
- (long long)calcImgItemIndex:(long long)arg1 num:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)setCurMsgHighlighted:(_Bool)arg1 animated:(_Bool)arg2;
- (id)getIndexPathOfCurMsg;
- (void)startHighLightedCurMsg;
- (void)endHighLightedCurMsg;
- (void)onTransitionToNewSize;
- (void)setTableViewContentInset:(struct UIEdgeInsets)arg1;
- (void)adjustContentOffset;
- (void)initTableView;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)_genImgCell:(id)arg1 indexPath:(id)arg2;
- (void)relaodCellWhenScrollViewStop;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)MMRefreshTableFooterDidTriggerRefresh:(id)arg1;
- (void)updatePreMore:(_Bool)arg1 NextMore:(_Bool)arg2;
- (void)updateLoading:(_Bool)arg1 NextMore:(_Bool)arg2;
- (void)rebuildMsgData;
- (void)initData;
- (void)reloadData;
- (void)dealloc;
- (id)initWithImgInfo:(id)arg1 withDelegate:(id)arg2 style:(unsigned long long)arg3;
- (id)initWithMsgWrap:(id)arg1 withDelegate:(id)arg2 style:(unsigned long long)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

