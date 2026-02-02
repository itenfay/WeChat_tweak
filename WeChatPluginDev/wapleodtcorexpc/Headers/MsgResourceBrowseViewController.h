//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CMessageWrap, MsgFastBrowseView, NSMutableArray, NSString, UIButton, UILabel, UIView;

@interface MsgResourceBrowseViewController
{
    NSMutableArray *m_arrMsg;
    vector_d88869c6 _arrSelectedData;
    shared_ptr_5102c92c m_sessionItem;
    MsgFastBrowseView *m_msgFastBrowseView;
    UIView *_footerView;
    UIButton *_selectAllButton;
    UIButton *_deleteButton;
    UILabel *_sizeLabel;
    unsigned long long m_eType;
    _Bool m_bFilterSession;
    CMessageWrap *m_curMsgWrap;
    NSString *m_nsChatName;
}

+ (void)globalClickAppMessage:(id)arg1 inNavigationController:(id)arg2 withClickFrame:(struct CGRect)arg3 lookDetailMsgRecord:(_Bool)arg4;
+ (void)globalClickAppMessage:(id)arg1 inNavigationController:(id)arg2 withClickFrame:(struct CGRect)arg3;
+ (void)PreviewAppNode:(id)arg1 msgWrap:(id)arg2 inNavigationController:(id)arg3 withClickFrame:(struct CGRect)arg4 msgLocateForFile:(_Bool)arg5;
+ (void)PreviewAppNode:(id)arg1 msgWrap:(id)arg2 inNavigationController:(id)arg3 withClickFrame:(struct CGRect)arg4;
- (id).cxx_construct;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *m_nsChatName; // @synthesize m_nsChatName;
@property(retain, nonatomic) CMessageWrap *m_curMsgWrap; // @synthesize m_curMsgWrap;
- (void)doDeleteData;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)onDeleteSelectedData:(id)arg1;
- (void)rebuildSelectedData;
- (void)onChatLogDataReloadItem;
- (void)onSelecteAll;
- (void)msgFastBrowseView:(id)arg1 didChangeCheckMarkTo:(_Bool)arg2 atSection:(unsigned long long)arg3;
- (void)msgFastBrowseView:(id)arg1 didChangeCheckMarkTo:(_Bool)arg2 withMsgInfo:(id)arg3;
- (void)onSquareImgClicked:(id)arg1 withInfo:(id)arg2 withOffset:(unsigned int)arg3;
- (id)messageWrapsForMsgFastBrowseView:(id)arg1;
- (void)handleClickAppMessage:(id)arg1 msgView:(id)arg2;
- (void)handleClickBrandMpVideoMessage:(id)arg1;
- (void)handleClickVideoMessage:(id)arg1;
- (void)hanleClickImageMessage:(id)arg1 msgView:(id)arg2;
- (void)onCancel;
- (void)viewDidTransitionToNewSize;
- (id)getDataSizeShowString:(const void *)arg1;
- (unsigned long long)getDataSize:(const void *)arg1;
- (id)getSelectButtonTitle;
- (void)updateFooterPannelView;
- (void)initFooterPannelView;
- (void)initView;
- (void)initNavBar;
- (void)initData;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithMsgWrap:(id)arg1 type:(unsigned long long)arg2 filter:(_Bool)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

