//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSArray, NSMutableArray, NSMutableDictionary, NSString;

@interface ServiceAppsLogicImpl
{
    NSArray *_serviceAppsList;
    NSMutableArray *_tempList;
    _Bool _isUpdating;
    _Bool _isGettingIcon;
    NSMutableDictionary *_updateIconDic;
    unsigned int _lastUpdateTime;
    NSMutableArray *_validJumpUrlList;
}

- (void).cxx_destruct;
- (void)onWCPayWalletChange;
- (void)OnSetUserWallet:(id)arg1;
- (void)loadData;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (_Bool)handleGetAppIconRsp:(id)arg1;
- (void)handleNotShowNewLogic;
- (void)handleUpdateServiceAppsListWithOffsetResp:(id)arg1;
- (void)addNewItemToUpdateIconDicAndStartUpdate;
- (_Bool)makeUrlRequest:(id)arg1 userData:(id)arg2;
- (void)getAppIcon:(id)arg1 appID:(id)arg2;
- (void)checkAndUpdateAppIcon;
- (void)setServiceAppNotShowNew:(id)arg1;
- (id)GetPathOfServiceAppIcon:(id)arg1 IconUrl:(id)arg2;
- (void)saveServiceAppsList;
- (void)loadServiceAppsListFromFile;
- (id)getAppInfoDataRootDir;
- (_Bool)updateServiceAppsListWithOffset:(unsigned int)arg1;
- (_Bool)updateServiceAppsList;
- (id)getServiceAppsList:(id)arg1;
- (_Bool)IsServiceAppDataValid:(id)arg1;
- (_Bool)NativeUrlIsValid:(id)arg1;
- (void)InitValidJumpUrl;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

