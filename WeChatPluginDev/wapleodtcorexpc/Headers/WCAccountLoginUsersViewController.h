//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CTRichTextView, LoginUserCellViewModel, MMUILabel, NSMutableArray, NSString, UIImageView, UIView;
@protocol WCAccountLoginUsersViewControllerDelegate;

@interface WCAccountLoginUsersViewController
{
    id <WCAccountLoginUsersViewControllerDelegate> m_delegate;
    UIView *m_headerView;
    UIImageView *m_logoImageView;
    CTRichTextView *m_headerTip;
    CTRichTextView *m_headerEditTip;
    UIView *m_lineView;
    MMUILabel *m_editTip;
    NSMutableArray *m_cellViewModels;
    LoginUserCellViewModel *m_curLoginLoadingViewModel;
    _Bool m_isEditing;
    _Bool _hideDefaultLoadingView;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool hideDefaultLoadingView; // @synthesize hideDefaultLoadingView=_hideDefaultLoadingView;
- (void)onCancelEditLoginUserInfo;
- (void)onEditLoginUserInfo;
- (void)onRealDeleteLoginUser:(id)arg1;
- (void)onClickDeleteLoginUser:(id)arg1;
- (void)onClickAddLoginInfo;
- (void)onClickLoginUserCell:(id)arg1;
- (void)onSwitchMainViewToLoginView;
- (void)tryLoginUserWithUserName:(id)arg1;
- (void)onUpdateLoginUsers;
- (void)onLoginErrorWithIsNetworkError:(_Bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)startLoadingNonBlock;
- (void)startLoadingBlocked;
- (void)makeAccountCell:(id)arg1 cellInfo:(id)arg2;
- (void)reloadLoginUserCells;
- (void)viewDidLoad;
- (void)initNavigationBar;
- (id)getNewHeaderView:(id)arg1;
- (_Bool)hasUserLogined;
- (id)navigationBarBackgroundColor;
- (_Bool)useTableView;
- (_Bool)useGrayBackgroundColor;
- (void)reportOpCode:(unsigned int)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

