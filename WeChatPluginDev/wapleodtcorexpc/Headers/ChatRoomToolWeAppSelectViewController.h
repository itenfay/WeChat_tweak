//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CContact, MMTableView, MMToolManageTableViewLogic, MMUILabel, NSArray, NSMutableArray, NSMutableDictionary, NSString, WCTimeLineFooterView;
@protocol ChatRoomToolWeAppSelectViewControllerDelegate;

@interface ChatRoomToolWeAppSelectViewController
{
    unsigned long long m_selectedExistWeAppCount;
    id <ChatRoomToolWeAppSelectViewControllerDelegate> _m_delegate;
    MMTableView *_tableView;
    MMUILabel *_emptyLabel;
    WCTimeLineFooterView *_loadingView;
    NSMutableDictionary *_cellViewCache;
    NSMutableArray *_selectedInSideWeAppList;
    CContact *_chatRoomContact;
    NSMutableArray *_weAppList;
    NSArray *_selectedExistWeAppList;
    MMToolManageTableViewLogic *_toolManageTableViewLogic;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMToolManageTableViewLogic *toolManageTableViewLogic; // @synthesize toolManageTableViewLogic=_toolManageTableViewLogic;
@property(retain, nonatomic) NSArray *selectedExistWeAppList; // @synthesize selectedExistWeAppList=_selectedExistWeAppList;
@property(retain, nonatomic) NSMutableArray *weAppList; // @synthesize weAppList=_weAppList;
@property(retain, nonatomic) CContact *chatRoomContact; // @synthesize chatRoomContact=_chatRoomContact;
@property(retain, nonatomic) NSMutableArray *selectedInSideWeAppList; // @synthesize selectedInSideWeAppList=_selectedInSideWeAppList;
@property(retain, nonatomic) NSMutableDictionary *cellViewCache; // @synthesize cellViewCache=_cellViewCache;
@property(retain, nonatomic) WCTimeLineFooterView *loadingView; // @synthesize loadingView=_loadingView;
@property(retain, nonatomic) MMUILabel *emptyLabel; // @synthesize emptyLabel=_emptyLabel;
@property(retain, nonatomic) MMTableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) __weak id <ChatRoomToolWeAppSelectViewControllerDelegate> m_delegate; // @synthesize m_delegate=_m_delegate;
- (void)reloadTableWithWeAppList:(id)arg1;
- (void)onDone;
- (void)onExitConfirm;
- (void)onCancel;
- (id)genTableHeaderView;
- (void)initEmptyView;
- (void)initView;
- (void)initNavigationBar;
- (void)initData;
- (id)navigationBarBackgroundColor;
- (_Bool)useBlackStatusbar;
- (_Bool)shouldInteractiveDismiss;
- (void)viewDidLoad;
- (id)initWithChatRoomContact:(id)arg1 andSelectedExistWeAppList:(id)arg2 andWeAppList:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

