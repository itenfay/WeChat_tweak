//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class AppCommunicateData, NSString, OpenApiAppMsgGenerator;

@interface WXKBOpenSDKMessageAction
{
    _Bool _hasFetchedAppRegisterInfo;
    AppCommunicateData *_communicateData;
    OpenApiAppMsgGenerator *_messageGenerator;
}

+ (id)musicVideoOpenParamsFromMessage:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) _Bool hasFetchedAppRegisterInfo; // @synthesize hasFetchedAppRegisterInfo=_hasFetchedAppRegisterInfo;
@property(retain, nonatomic) OpenApiAppMsgGenerator *messageGenerator; // @synthesize messageGenerator=_messageGenerator;
@property(retain, nonatomic) AppCommunicateData *communicateData; // @synthesize communicateData=_communicateData;
- (void)OnAppInfoChanged:(id)arg1;
- (id)generateEmoticonMessage;
- (_Bool)openMessage:(id)arg1;
- (_Bool)openMessageAtPc:(id)arg1;
- (void)onFetchedAppRegisterInfo;
- (void)onFetchedAppRegisterInfoTimeOut;
- (void)fetchAppRegisterInfo;
- (_Bool)needFetchAppRegisterInfo;
- (id)getAppId;
- (_Bool)precheck;
- (long long)openSDKMessageType;
- (void)privatePerform;
- (id)initWithDictionary:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

