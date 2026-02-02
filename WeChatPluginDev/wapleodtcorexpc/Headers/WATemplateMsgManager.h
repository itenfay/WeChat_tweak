//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableArray, NSMutableDictionary, NSString, WATemplateMsgInfoWrap;

@interface WATemplateMsgManager
{
    _Bool _isManulLogined;
    _Bool _isContactListUpdated;
    WATemplateMsgInfoWrap *_infoWrap;
    NSMutableArray *_debug_unreadUsernames;
    NSString *_debug_lastUsername;
    unsigned long long _debug_unreadMsgCount;
    NSMutableDictionary *_debug_fakeTemplateMsgDic;
    NSMutableArray *_debug_msgArray;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isContactListUpdated; // @synthesize isContactListUpdated=_isContactListUpdated;
@property(nonatomic) _Bool isManulLogined; // @synthesize isManulLogined=_isManulLogined;
@property(retain, nonatomic) NSMutableArray *debug_msgArray; // @synthesize debug_msgArray=_debug_msgArray;
@property(retain, nonatomic) NSMutableDictionary *debug_fakeTemplateMsgDic; // @synthesize debug_fakeTemplateMsgDic=_debug_fakeTemplateMsgDic;
@property(nonatomic) unsigned long long debug_unreadMsgCount; // @synthesize debug_unreadMsgCount=_debug_unreadMsgCount;
@property(retain, nonatomic) NSString *debug_lastUsername; // @synthesize debug_lastUsername=_debug_lastUsername;
@property(retain, nonatomic) NSMutableArray *debug_unreadUsernames; // @synthesize debug_unreadUsernames=_debug_unreadUsernames;
@property(retain, nonatomic) WATemplateMsgInfoWrap *infoWrap; // @synthesize infoWrap=_infoWrap;
- (void)showLocalNotificationWithInfo:(id)arg1 msgWrap:(id)arg2;
- (void)OnGetWXAPayInfoMsg:(id)arg1;
- (void)OnAddMsg:(id)arg1 MsgWrap:(id)arg2;
- (void)tryGetTemplateMsgMngInfoFromSvr;
- (void)onContactListUpdate:(unsigned int)arg1;
- (void)onManulLoginOK;
- (void)addTemplateMsgAudioNotifyRecord:(id)arg1;
- (_Bool)isExistTemplateMsgAudioNotifyRecord:(id)arg1;
- (void)onChangeBanListWithChangedArray:(id)arg1;
- (void)modifyContactOptForUsername:(id)arg1 withOpt:(unsigned int)arg2;
- (void)modifyServiceNotificationContactWithNotifyStatus:(_Bool)arg1;
- (_Bool)ifUserNameInBanListWithUserName:(id)arg1 banList:(id)arg2;
- (_Bool)isWeAppInTemplateMsgBanListFromLocal:(id)arg1;
- (id)getTemplateMsgMngInfoWrapFromLocal;
- (id)getTemplateMsgBanListFromLocal;
- (_Bool)getTemplateMsgAudioNotifyStatusFromLocal;
- (_Bool)getTemplateMsgNotifyStatusFromLocal;
- (void)saveTemplateMsgMngInfoToLocal:(id)arg1;
- (void)handleUpdateSwitchServiceFail:(id)arg1;
- (void)handleUpdateSwitchServiceSuccess:(id)arg1;
- (void)handleBatchSwitchServiceNotifyOption:(id)arg1;
- (void)handleGetServiceNotifyOptions:(id)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)getTemplateMsgMngInfoFromSvr:(unsigned int)arg1;
- (void)batchUpdateTemplateMsgNotifyEnable:(unsigned long long)arg1 audioNotifyEnable:(unsigned long long)arg2 msgStatusForApps:(id)arg3;
- (void)batchUpdateAWeAppTemplateMsgStatusForAppArray:(id)arg1;
- (void)updateTemplateMsgNotifyEnable:(unsigned long long)arg1;
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

