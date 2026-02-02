//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, SRWebSocket;

@interface WARemoteDebugWANChannel
{
    SRWebSocket *_webSocket;
}

+ (id)sharedQueue;
- (void).cxx_destruct;
- (void)webSocket:(id)arg1 didReceiveMessageWithData:(id)arg2;
- (void)webSocket:(id)arg1 didCloseWithCode:(long long)arg2 reason:(id)arg3 wasClean:(_Bool)arg4;
- (void)webSocket:(id)arg1 didFailWithError:(id)arg2;
- (void)webSocketDidOpen:(id)arg1;
- (void)sendData:(id)arg1;
- (void)closeChannel;
- (void)openChannel;
- (_Bool)isConnected;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

