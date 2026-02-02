//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@interface WebviewJSEventHandler_sendGameLifeMsg
{
}

- (id)printNodeText:(struct XmlReaderNode_t *)arg1;
- (void)updateContent:(id)arg1;
- (id)constructMsgWrap:(id)arg1 content:(id)arg2 selfUsername:(id)arg3 talker:(id)arg4 msgType:(long long)arg5;
- (void)sendMsg:(int)arg1 sessionId:(id)arg2 msg:(id)arg3;
- (_Bool)isNullOrEmpty:(id)arg1;
- (void)handleJSEvent:(id)arg1 HandlerFacade:(id)arg2 ExtraData:(id)arg3;

@end

