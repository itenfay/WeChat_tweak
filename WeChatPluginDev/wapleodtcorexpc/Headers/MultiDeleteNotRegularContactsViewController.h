//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class ContactBatchModifyLogic, MMAcceptAgreementCommonHeadView, MMDeleteNotRegularContactLogic, MMTableView, MMTableViewInfo, MMUIActivityIndicatorView, MMUIButton, MMUILabel, MMUIView, MultiDeleteNotRegularContactsMaskViewView, NSMutableArray, NSMutableDictionary, NSString;

@interface MultiDeleteNotRegularContactsViewController
{
    NSMutableArray *m_arrNeedDeleteNotRegularContact;
    NSMutableDictionary *m_dicMultiSelect;
    NSString *m_sessionId;
    _Bool m_isLoading;
    NSString *m_context;
    _Bool m_rightBarButtonItemEnabled;
    MMUIButton *m_sessionHeaderOperateBtn;
    NSMutableArray *m_arrNoAddCreateTimeUserName;
    MMAcceptAgreementCommonHeadView *m_commonHeadView;
    MMTableViewInfo *m_tableViewInfo;
    MMTableView *m_tableView;
    NSString *_contactsMaxLimitSortSessionid;
    MultiDeleteNotRegularContactsMaskViewView *_operateButtonMaskView;
    MMUILabel *_emptyTitleLabel;
    MMUIView *_headerTitleView;
    MMUIButton *_deleteButton;
    MMUIView *_sessionHeaderView;
    MMUIActivityIndicatorView *_dataLoadingIndicator;
    MMUILabel *_descriptionLabel;
    ContactBatchModifyLogic *_contactBatchModifyLogic;
    MMDeleteNotRegularContactLogic *_deleteNotRegularContactLogic;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMDeleteNotRegularContactLogic *deleteNotRegularContactLogic; // @synthesize deleteNotRegularContactLogic=_deleteNotRegularContactLogic;
@property(retain, nonatomic) ContactBatchModifyLogic *contactBatchModifyLogic; // @synthesize contactBatchModifyLogic=_contactBatchModifyLogic;
@property(retain, nonatomic) MMUILabel *descriptionLabel; // @synthesize descriptionLabel=_descriptionLabel;
@property(retain, nonatomic) MMUIActivityIndicatorView *dataLoadingIndicator; // @synthesize dataLoadingIndicator=_dataLoadingIndicator;
@property(retain, nonatomic) MMUIView *sessionHeaderView; // @synthesize sessionHeaderView=_sessionHeaderView;
@property(retain, nonatomic) MMUIButton *deleteButton; // @synthesize deleteButton=_deleteButton;
@property(retain, nonatomic) MMUIView *headerTitleView; // @synthesize headerTitleView=_headerTitleView;
@property(retain, nonatomic) MMUILabel *emptyTitleLabel; // @synthesize emptyTitleLabel=_emptyTitleLabel;
@property(retain, nonatomic) MultiDeleteNotRegularContactsMaskViewView *operateButtonMaskView; // @synthesize operateButtonMaskView=_operateButtonMaskView;
@property(retain, nonatomic) NSString *contactsMaxLimitSortSessionid; // @synthesize contactsMaxLimitSortSessionid=_contactsMaxLimitSortSessionid;
- (void)setM_tableView:(id)arg1;
- (id)m_tableView;
- (void)setM_tableViewInfo:(id)arg1;
- (id)m_tableViewInfo;
- (void)setM_commonHeadView:(id)arg1;
- (id)m_commonHeadView;
- (_Bool)isSetNormalToBlackStyle;
- (id)normalTintColor;
- (void)onGetNeedDeleteNotRegularContactListFail:(id)arg1;
- (void)handleNeedDeleteNotRegularContactList:(id)arg1;
- (void)onGetNeedDeleteNotRegularContactListDone:(id)arg1 context:(id)arg2;
- (void)onDeleteFaildWithErrMsgTitle:(id)arg1 errMsgContent:(id)arg2;
- (void)onDeleteFaildWithErrMsg:(id)arg1;
- (void)OnContactBatchModify:(id)arg1 withRet:(unsigned int)arg2 errorMsg:(id)arg3 isNetWorkError:(_Bool)arg4;
- (void)handleDeteContact:(id)arg1;
- (void)onModifyContact:(id)arg1;
- (void)onDeleteContact:(id)arg1;
- (id)getDeleteContactParamDic;
- (id)getBaseParamDic;
- (void)onViewContact:(id)arg1;
- (void)updateDeleteButtonStatus;
- (void)refreshAnimateRloadTableView;
- (void)onRighRefreshButtonClick;
- (void)onClickSelectdContactBtn:(id)arg1;
- (void)deleteSelectedContacts;
- (void)onDeleteButtonClick:(id)arg1;
- (_Bool)isSelected:(id)arg1;
- (void)removeLoadingDataState;
- (void)makeLoadingDataState:(_Bool)arg1;
- (void)updateOperateButtonMaskViewGradientLayer;
- (void)layoutEmptyTitleView;
- (void)layoutOperateButtonMaskView;
- (id)genSessionHeaderOperateButton;
- (id)genSessionHeaderTitleLable;
- (void)layoutSessionHeaderView;
- (void)layoutHeaderView;
- (void)initNavigationBar;
- (void)updateSelectImageView:(_Bool)arg1 selectedImageView:(id)arg2;
- (void)handleShowViewContact:(id)arg1;
- (void)handleSelectdContact:(id)arg1;
- (void)makeDeleteNotRegularContactCell:(id)arg1 cellInfo:(id)arg2;
- (void)reloadTableData;
- (_Bool)shouldInteractiveDismiss;
- (void)setupReportData;
- (void)dealloc;
- (void)viewWillAppear:(_Bool)arg1;
- (void)initDeleteNotRegularContactsViewData;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

