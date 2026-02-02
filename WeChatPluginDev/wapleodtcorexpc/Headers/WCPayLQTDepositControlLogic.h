//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class LQTDepositPlanDelete, LQTDepositPlanIndexAfterDelete, LQTDepositPlanIndexAfterDetail, LQTDepositPlanIndexAfterModify, LQTDepositPlanIndexlAfterManage, LQTDepositPreAddPlanAfterDelete, NSString, PlanIndexResp_PlanItem, QryAutoPlanOrderListResp, WCPayLQTDepositAddPlanCgi, WCPayLQTDepositManagePlanCgi, WCPayLQTDepositModifyPlanCgi, WCPayLQTDepositPlanIndexCgi, WCPayLQTDepositPreAddPlanCgi, WCPayPayPwdViewController, WCPayQryLqtAutoPlanOrderListCgi;

@interface WCPayLQTDepositControlLogic
{
    long long m_logicState;
    _Bool _hasDeleteAllPlan;
    _Bool _isRefetchUsrPlanId;
    _Bool _isPlanDetailEnd;
    unsigned long long _entryScene;
    WCPayLQTDepositPlanIndexCgi *_planIndexCgi;
    WCPayLQTDepositPreAddPlanCgi *_preAddPlanCgi;
    NSString *_bindSerialFromNewCard;
    WCPayPayPwdViewController *_pwdVC;
    WCPayLQTDepositAddPlanCgi *_addPlanCgi;
    WCPayLQTDepositManagePlanCgi *_managePlanCgi;
    WCPayLQTDepositModifyPlanCgi *_modifyPlanCgi;
    QryAutoPlanOrderListResp *_planDetailResp;
    WCPayQryLqtAutoPlanOrderListCgi *_planDetailCgi;
    PlanIndexResp_PlanItem *_selectedItem;
    LQTDepositPlanIndexAfterModify *_afterModifyLogic;
    LQTDepositPlanIndexlAfterManage *_afterManageLogic;
    LQTDepositPlanDelete *_afterDeleteLogic;
    LQTDepositPlanIndexAfterDelete *_planIndexAfterDeleteLogic;
    LQTDepositPlanIndexAfterDetail *_planIndexAfterDetailLogic;
    LQTDepositPreAddPlanAfterDelete *_preAddPlanAfterDeleteLogic;
    WCPayLQTDepositManagePlanCgi *_deletePlanCgi;
    WCPayLQTDepositPlanIndexCgi *_planIndexAfterDeleteCgi;
    WCPayLQTDepositPlanIndexCgi *_planIndexAfterDetailCgi;
    WCPayLQTDepositPreAddPlanCgi *_preAddPlanAfterDeleteCgi;
    WCPayLQTDepositPlanIndexCgi *_planIndexAfterManageCgi;
    WCPayLQTDepositPlanIndexCgi *_planIndexAfterModifyCgi;
}

- (void).cxx_destruct;
@property(retain) WCPayLQTDepositPlanIndexCgi *planIndexAfterModifyCgi; // @synthesize planIndexAfterModifyCgi=_planIndexAfterModifyCgi;
@property(retain) WCPayLQTDepositPlanIndexCgi *planIndexAfterManageCgi; // @synthesize planIndexAfterManageCgi=_planIndexAfterManageCgi;
@property(retain) WCPayLQTDepositPreAddPlanCgi *preAddPlanAfterDeleteCgi; // @synthesize preAddPlanAfterDeleteCgi=_preAddPlanAfterDeleteCgi;
@property(retain) WCPayLQTDepositPlanIndexCgi *planIndexAfterDetailCgi; // @synthesize planIndexAfterDetailCgi=_planIndexAfterDetailCgi;
@property(retain) WCPayLQTDepositPlanIndexCgi *planIndexAfterDeleteCgi; // @synthesize planIndexAfterDeleteCgi=_planIndexAfterDeleteCgi;
@property(retain) WCPayLQTDepositManagePlanCgi *deletePlanCgi; // @synthesize deletePlanCgi=_deletePlanCgi;
@property(retain) LQTDepositPreAddPlanAfterDelete *preAddPlanAfterDeleteLogic; // @synthesize preAddPlanAfterDeleteLogic=_preAddPlanAfterDeleteLogic;
@property(retain) LQTDepositPlanIndexAfterDetail *planIndexAfterDetailLogic; // @synthesize planIndexAfterDetailLogic=_planIndexAfterDetailLogic;
@property(retain) LQTDepositPlanIndexAfterDelete *planIndexAfterDeleteLogic; // @synthesize planIndexAfterDeleteLogic=_planIndexAfterDeleteLogic;
@property(retain) LQTDepositPlanDelete *afterDeleteLogic; // @synthesize afterDeleteLogic=_afterDeleteLogic;
@property(retain) LQTDepositPlanIndexlAfterManage *afterManageLogic; // @synthesize afterManageLogic=_afterManageLogic;
@property(retain) LQTDepositPlanIndexAfterModify *afterModifyLogic; // @synthesize afterModifyLogic=_afterModifyLogic;
@property(retain) PlanIndexResp_PlanItem *selectedItem; // @synthesize selectedItem=_selectedItem;
@property _Bool isPlanDetailEnd; // @synthesize isPlanDetailEnd=_isPlanDetailEnd;
@property(retain) WCPayQryLqtAutoPlanOrderListCgi *planDetailCgi; // @synthesize planDetailCgi=_planDetailCgi;
@property(retain) QryAutoPlanOrderListResp *planDetailResp; // @synthesize planDetailResp=_planDetailResp;
@property(nonatomic) _Bool isRefetchUsrPlanId; // @synthesize isRefetchUsrPlanId=_isRefetchUsrPlanId;
@property _Bool hasDeleteAllPlan; // @synthesize hasDeleteAllPlan=_hasDeleteAllPlan;
@property(retain, nonatomic) WCPayLQTDepositModifyPlanCgi *modifyPlanCgi; // @synthesize modifyPlanCgi=_modifyPlanCgi;
@property(retain, nonatomic) WCPayLQTDepositManagePlanCgi *managePlanCgi; // @synthesize managePlanCgi=_managePlanCgi;
@property(retain, nonatomic) WCPayLQTDepositAddPlanCgi *addPlanCgi; // @synthesize addPlanCgi=_addPlanCgi;
@property(retain, nonatomic) WCPayPayPwdViewController *pwdVC; // @synthesize pwdVC=_pwdVC;
@property(retain, nonatomic) NSString *bindSerialFromNewCard; // @synthesize bindSerialFromNewCard=_bindSerialFromNewCard;
@property(retain, nonatomic) WCPayLQTDepositPreAddPlanCgi *preAddPlanCgi; // @synthesize preAddPlanCgi=_preAddPlanCgi;
@property(retain, nonatomic) WCPayLQTDepositPlanIndexCgi *planIndexCgi; // @synthesize planIndexCgi=_planIndexCgi;
@property(nonatomic) unsigned long long entryScene; // @synthesize entryScene=_entryScene;
- (void)onLQTDepositPreAddPlanAfterDeleteError:(id)arg1 errorCode:(unsigned int)arg2;
- (void)onLQTDepositPreAddPlanAfterDeleteReponseOK:(id)arg1;
- (void)onLQTDepositPlanIndexAfterDetailError:(id)arg1 errorCode:(unsigned int)arg2;
- (void)onLQTDepositPlanIndexAfterDetailResponseOK:(id)arg1;
- (void)startPreAddPlanCgiAfterDelete;
- (void)onLQTDepositPlanIndexAfterDeleteError:(id)arg1 errorCode:(unsigned int)arg2;
- (void)onLQTDepositPlanIndexAfterDeleteResponseOK:(id)arg1;
- (void)onLQTDepositPlanIndexlAfterManageError:(id)arg1 errorCode:(unsigned int)arg2;
- (void)onLQTDepositPlanIndexlAfterManageResp:(id)arg1;
- (void)onLQTDepositPlanIndexAfterModifyError:(id)arg1 errorCode:(unsigned int)arg2;
- (void)onLQTDepositPlanIndexAfterModifyResp:(id)arg1;
- (void)onLQTDepositPlanDeleteError:(id)arg1 errorCode:(unsigned int)arg2;
- (void)onLQTDepositPlanDeleteResponseOK:(id)arg1;
- (id)onWCPayLQTDepositDetailViewControllerPlanItem;
- (id)onWCPayLQTDepositDetailViewControllerDetailResp;
- (void)onWCPayLQTDepositDetailViewControllerModify:(id)arg1;
- (void)onWCPayLQTDepositDetailViewControllerDelete:(id)arg1;
- (void)onWCPayLQTDepositDetailViewControllerStop:(id)arg1;
- (void)onWCPayLQTDepositDetailViewControllerOpen:(id)arg1;
- (void)onWCPayLQTDepositDetailViewControllerLoadMore;
- (_Bool)onWCPayLQTDepositDetailViewControllerNoMoreData;
- (void)onWCPayLQTDepositDetailViewControllerBack;
- (void)startDetailCgi;
- (void)onWCPayQryLqtAutoPlanOrderListCgiError:(id)arg1 errorCode:(unsigned int)arg2;
- (void)onWCPayQryLqtAutoPlanOrderListCgiResp:(id)arg1;
- (void)popToViewController:(Class)arg1 andPush:(id)arg2 animated:(_Bool)arg3 delegate:(id)arg4;
- (void)popToViewController:(Class)arg1 animated:(_Bool)arg2;
- (void)onClickTipsBtn:(id)arg1 Index:(long long)arg2 tipTag:(long long)arg3;
- (void)onWCPayLQTDepositModifyPlanCgiError:(id)arg1 errorCode:(unsigned int)arg2;
- (void)onWCPayLQTDepositModifyPlanCgiResponseOK:(id)arg1;
- (void)onWCPayLQTDepositManagePlanCgiError:(id)arg1 errorCode:(unsigned int)arg2;
- (void)onWCPayLQTDepositManagePlanCgiResponseOK:(id)arg1;
- (void)onWCPayLQTDepositPlanListViewControllerOpearte:(id)arg1 operateType:(int)arg2;
- (void)onWCPayLQTDepositPlanListViewControllerClickAddPlan;
- (void)onWCPayLQTDepositPlanListViewControllerBack;
- (void)onWCPayLQTDepositPlanListViewControllerToDetail:(id)arg1;
- (void)onWCPayLQTDepositAddPlanCgiError:(id)arg1 errorCode:(unsigned int)arg2;
- (void)onWCPayLQTDepositAddPlanCgiResponseOK:(id)arg1;
- (void)OnVerifyPayPassword:(id)arg1;
- (void)VerifyPayPwdNext:(id)arg1;
- (void)PayPwdRightActionBack;
- (void)PayPwdBack;
- (void)onWCPayLQTDepositFillInfoViewControllerNext;
- (void)onAddPayCardResult:(_Bool)arg1 newCardBindSerial:(id)arg2;
- (void)onWCPayLQTDepositFillInfoViewControllerChooseAddCard;
- (void)onWCPayLQTDepositFillInfoViewControllerCancel;
- (void)onWCPayLQTDepositEntryViewControllerCancel;
- (void)activeTextField;
- (void)onWCPayLQTDepositPreAddPlanCgiError:(id)arg1 errorCode:(unsigned int)arg2;
- (void)onWCPayLQTDepositPreAddPlanCgiReponseOK:(id)arg1;
- (void)onWCPayLQTDepositEntryViewControllerNewPlan;
- (void)startBlockedWithTip:(id)arg1 delay:(double)arg2;
- (void)onWCPayLQTDepositPlanIndexCgiError:(id)arg1 errorCode:(unsigned int)arg2;
- (void)onWCPayLQTDepositPlanIndexCgiResponseOK:(id)arg1 fromServer:(_Bool)arg2;
- (void)startLogic;
- (_Bool)AddScene;
- (void)setExtraInfo:(id)arg1;
- (id)initWithData:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

