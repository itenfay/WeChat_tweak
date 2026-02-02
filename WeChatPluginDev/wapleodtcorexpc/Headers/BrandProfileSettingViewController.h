//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class BrandProfileReporter, CContact, JSAPIGetAllUseUserInfoResponse, MMTableViewInfo, MMUILabel, NSMutableDictionary, NSString;
@protocol BrandProfileSettingViewControllerDelegate;

@interface BrandProfileSettingViewController
{
    _Bool _isNewMessageNotifySwitchOn;
    _Bool _isReceiveMessageSwitchOn;
    _Bool _isProvideLocationSwitchOn;
    _Bool _hasTemplateMsgAuthCell;
    BrandProfileReporter *_reporter;
    MMTableViewInfo *_tableViewInfo;
    double _tableViewWidth;
    unsigned int _scene;
    unsigned int _profileEnterTimeStamps;
    id <BrandProfileSettingViewControllerDelegate> _delegate;
    CContact *_brandContact;
    NSMutableDictionary *_extInfo;
    JSAPIGetAllUseUserInfoResponse *_jsAPIGetAllUseUserInfoResponse;
    MMUILabel *_emptyLabel;
    NSString *_appId;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *appId; // @synthesize appId=_appId;
@property(retain, nonatomic) MMUILabel *emptyLabel; // @synthesize emptyLabel=_emptyLabel;
@property(retain, nonatomic) JSAPIGetAllUseUserInfoResponse *jsAPIGetAllUseUserInfoResponse; // @synthesize jsAPIGetAllUseUserInfoResponse=_jsAPIGetAllUseUserInfoResponse;
@property(retain, nonatomic) NSMutableDictionary *extInfo; // @synthesize extInfo=_extInfo;
@property(nonatomic) unsigned int profileEnterTimeStamps; // @synthesize profileEnterTimeStamps=_profileEnterTimeStamps;
@property(nonatomic) unsigned int scene; // @synthesize scene=_scene;
@property(retain, nonatomic) CContact *brandContact; // @synthesize brandContact=_brandContact;
@property(nonatomic) __weak id <BrandProfileSettingViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (_Bool)isInMyContactList;
- (void)handleModBizUseUserInfoResponse:(id)arg1;
- (void)handleGetBizAuthInfoResponse:(id)arg1;
- (void)requsetModifyUsedUserInfoWithScope:(id)arg1 Switch:(id)arg2;
- (void)requestAuthorizedInfo;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)reportClearMessage;
- (void)clickClearMessageCell;
- (void)openAuthList;
- (void)openAuthorizedScopeVC;
- (void)clickTemplateMsgMgr;
- (void)onProvideLocationCancel;
- (void)onProvideLocationConfirm;
- (void)switchLocationScopeAuthState:(id)arg1;
- (void)switchRecordScopeAuthState:(id)arg1;
- (void)switchProvideLocationCell:(id)arg1;
- (void)switchReceiveMessageCell:(id)arg1;
- (void)switchNewMessageNotificationCell:(id)arg1;
- (void)onFetchShowInSettingScopeList:(id)arg1 forUser:(id)arg2 hasSettingEntry:(_Bool)arg3;
- (void)reloadTableViewInfo;
- (void)viewDidLayoutSubviews;
- (void)initEmptyWordingView;
- (void)initTableViewInfo;
- (void)viewWillBePoped:(_Bool)arg1;
- (id)init;
- (void)addLocalSystemMessageWhenReceiveMessageSwitchChanged;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

