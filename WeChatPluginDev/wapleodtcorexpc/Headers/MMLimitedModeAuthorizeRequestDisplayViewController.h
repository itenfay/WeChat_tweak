//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CContact, CMessageWrap, MMAcceptAgreementCommonHeadView, MMLimitedModeAuthorizationUtilLogic, MMLimitedModeGuardianLogic, MMTableView, MMTableViewInfo, NSString, UIButton, UIColor, UIImage;

@interface MMLimitedModeAuthorizeRequestDisplayViewController
{
    UIButton *m_operateButton;
    CContact *m_guardianContact;
    _Bool m_needReload;
    MMLimitedModeGuardianLogic *m_guardianLogic;
    MMLimitedModeAuthorizationUtilLogic *m_authorizationUtilLogic;
    _Bool m_bAcceptOperate;
    _Bool _m_bCanAccessory;
    _Bool _m_bHiddenOperateButton;
    MMAcceptAgreementCommonHeadView *m_commonHeadView;
    MMTableViewInfo *m_tableViewInfo;
    MMTableView *m_tableView;
    CMessageWrap *m_authorizeRequestMessageWrap;
    UIImage *_m_svgImage;
    NSString *_m_nsTitle;
    NSString *_m_nsDesc;
    NSString *_m_nsSessionFootTitle;
    CDUnknownBlockType _m_resultActionBlock;
    UIColor *_m_navigationBarBackgroundColor;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIColor *m_navigationBarBackgroundColor; // @synthesize m_navigationBarBackgroundColor=_m_navigationBarBackgroundColor;
@property(copy, nonatomic) CDUnknownBlockType m_resultActionBlock; // @synthesize m_resultActionBlock=_m_resultActionBlock;
@property(nonatomic) _Bool m_bHiddenOperateButton; // @synthesize m_bHiddenOperateButton=_m_bHiddenOperateButton;
@property(nonatomic) _Bool m_bCanAccessory; // @synthesize m_bCanAccessory=_m_bCanAccessory;
@property(retain, nonatomic) NSString *m_nsSessionFootTitle; // @synthesize m_nsSessionFootTitle=_m_nsSessionFootTitle;
@property(retain, nonatomic) NSString *m_nsDesc; // @synthesize m_nsDesc=_m_nsDesc;
@property(retain, nonatomic) NSString *m_nsTitle; // @synthesize m_nsTitle=_m_nsTitle;
@property(retain, nonatomic) UIImage *m_svgImage; // @synthesize m_svgImage=_m_svgImage;
@property(nonatomic) _Bool m_bAcceptOperate; // @synthesize m_bAcceptOperate;
@property(retain, nonatomic) CMessageWrap *m_authorizeRequestMessageWrap; // @synthesize m_authorizeRequestMessageWrap;
- (void)setM_tableView:(id)arg1;
- (id)m_tableView;
- (void)setM_tableViewInfo:(id)arg1;
- (id)m_tableViewInfo;
- (void)setM_commonHeadView:(id)arg1;
- (id)m_commonHeadView;
- (id)navigationBarBackgroundColor;
- (void)onAgreeTeenagerModeAuthorization:(id)arg1 businessType:(unsigned int)arg2 success:(_Bool)arg3 errMsg:(id)arg4;
- (void)didClickLeftCloseBarButton;
- (void)didOperateButton;
- (void)tapAuthorizeRequestDisplayCell;
- (void)makeAuthorizeRequestDisplayCell:(id)arg1;
- (id)genHeaderView;
- (_Bool)canAccessory;
- (void)reloadForwardPreview;
- (void)reloadFootView;
- (void)reloadTableData;
- (double)getCellHeight;
- (void)layoutOperateButton;
- (void)initData;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

