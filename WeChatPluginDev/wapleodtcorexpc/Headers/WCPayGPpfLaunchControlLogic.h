//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CContact, NSString, WCPayGppfQueryInfoCgi;
@protocol WCPayGppfLaunchControlLogicDelegate;

@interface WCPayGPpfLaunchControlLogic
{
    _Bool _bIsLaunchSucc;
    id <WCPayGppfLaunchControlLogicDelegate> _launchDelegate;
    NSString *_appId;
    NSString *_pfOrderNo;
    unsigned long long _pfFromScene;
    CContact *_launchContact;
    WCPayGppfQueryInfoCgi *_queryPfInfoCgi;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCPayGppfQueryInfoCgi *queryPfInfoCgi; // @synthesize queryPfInfoCgi=_queryPfInfoCgi;
@property(retain, nonatomic) CContact *launchContact; // @synthesize launchContact=_launchContact;
@property(nonatomic) _Bool bIsLaunchSucc; // @synthesize bIsLaunchSucc=_bIsLaunchSucc;
@property(nonatomic) unsigned long long pfFromScene; // @synthesize pfFromScene=_pfFromScene;
@property(retain, nonatomic) NSString *pfOrderNo; // @synthesize pfOrderNo=_pfOrderNo;
@property(retain, nonatomic) NSString *appId; // @synthesize appId=_appId;
@property(nonatomic) __weak id <WCPayGppfLaunchControlLogicDelegate> launchDelegate; // @synthesize launchDelegate=_launchDelegate;
- (void)onLaunchControlLogicStop;
- (void)onLaunchGroupPaySuccWithContact:(id)arg1;
- (void)saveAndRefreshSvrConfigData;
- (void)onGetpfQueryInfoCgiResp:(id)arg1;
- (void)sendQueryPfInfoRequest;
- (void)startLogic;
- (void)stopLogic;
- (void)dealloc;
- (void)setPfLaunchLogicDelegate:(id)arg1;
- (id)initWith3rdAppId:(id)arg1 pfOrderNo:(id)arg2 pfFromScene:(unsigned long long)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

