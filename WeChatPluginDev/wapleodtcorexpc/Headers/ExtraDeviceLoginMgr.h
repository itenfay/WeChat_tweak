//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface ExtraDeviceLoginMgr
{
    unsigned int _uiFromScene;
    unsigned int _extDevice;
    NSString *_loginUrl;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int extDevice; // @synthesize extDevice=_extDevice;
@property(retain, nonatomic) NSString *loginUrl; // @synthesize loginUrl=_loginUrl;
@property(nonatomic) unsigned int uiFromScene; // @synthesize uiFromScene=_uiFromScene;
- (void)onGetExtDeviceControlReponse:(id)arg1 eventID:(unsigned int)arg2;
- (unsigned int)sendDeviceControlCGIWithIsLock:(_Bool)arg1 deviceType:(unsigned int)arg2 uuid:(id)arg3;
- (unsigned int)sendDeviceControlCGIWithIsLock:(_Bool)arg1 onlineInfo:(id)arg2;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)onGetExtDeviceLoginResponse:(id)arg1 eventID:(unsigned int)arg2;
- (void)sendExtraDeviceLoginRequset;
- (void)showExtraDeviceLoginViewControllerWithExtInfo:(id)arg1;
- (void)handleExtraDeviceLoginUrl:(id)arg1 uiFromScene:(unsigned int)arg2;
- (unsigned int)getExtDeviceType;
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

