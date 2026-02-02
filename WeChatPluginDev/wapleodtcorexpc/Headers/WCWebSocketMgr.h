//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSArray, NSString;

@interface WCWebSocketMgr
{
    NSArray *_arrCertData;
    struct map<std::string, std::shared_ptr<WssCallback>, std::less<std::string>, std::allocator<std::pair<const std::string, std::shared_ptr<WssCallback>>>> callbackMap;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)webSocket:(unsigned int)arg1 group:(id)arg2 didCloseWithCode:(long long)arg3 reason:(id)arg4;
- (void)webSocket:(unsigned int)arg1 group:(id)arg2 didOpenWithCode:(long long)arg3 success:(_Bool)arg4 headers:(id)arg5 profiles:(id)arg6 msg:(id)arg7;
- (void)webSocket:(unsigned int)arg1 group:(id)arg2 didReceiveMessage:(id)arg3;
- (void)destroyWeApp:(id)arg1;
- (long long)sendMessage:(unsigned int)arg1 group:(id)arg2 message:(id)arg3;
- (long long)closeWebSocket:(unsigned int)arg1 group:(id)arg2 code:(long long)arg3 reason:(id)arg4;
- (id)certificateArrayFromDataList:(id)arg1;
- (void)_runPACScript:(id)arg1 url:(id)arg2;
- (void)_fetchPAC:(id)arg1 url:(id)arg2;
- (void)_readProxySettingWithType:(id)arg1 settings:(id)arg2;
- (void)_configureProxy:(id)arg1;
- (long long)connectWebSocket:(unsigned int *)arg1 group:(id)arg2 config:(id)arg3 appType:(unsigned int)arg4 appDebugModeType:(unsigned int)arg5 url:(id)arg6 httpHeaders:(id)arg7 subProtocols:(id)arg8 tcpNoDelay:(_Bool)arg9 perMessageDeflate:(_Bool)arg10 forceCellularNetwork:(_Bool)arg11;
- (void)onServiceClearData;
- (void)onServiceInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

