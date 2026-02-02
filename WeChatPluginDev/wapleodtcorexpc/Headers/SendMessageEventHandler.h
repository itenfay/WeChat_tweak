//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CMMDB, NSMutableArray, NSMutableDictionary;

@interface SendMessageEventHandler
{
    NSMutableDictionary *m_dicMsgList;
    NSMutableArray *m_arrMsgList;
    CMMDB *m_oMMDB;
}

- (void).cxx_destruct;
- (void)LoadMsgFromDB;
- (void)handleSendSuccessMsg:(id)arg1;
- (void)HandleSendFail;
- (void)OnProtocolConnectFail:(id)arg1;
- (void)OnProtocolResponse:(id)arg1 shouldContinue:(_Bool *)arg2;
- (void)OnProtocolStart:(id)arg1 shouldContinue:(_Bool *)arg2;
- (id)init;

@end

