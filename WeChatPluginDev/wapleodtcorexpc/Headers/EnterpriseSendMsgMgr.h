//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableArray;
@protocol EnterpriseSendMsgMgrDelegate;

@interface EnterpriseSendMsgMgr
{
    NSMutableArray *arySendMsgRunningQueue;
    NSMutableArray *arySendMsgWaitingQueue;
    id <EnterpriseSendMsgMgrDelegate> delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <EnterpriseSendMsgMgrDelegate> delegate; // @synthesize delegate;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)handleSendMsgResp:(id)arg1;
- (void)handleSendMsgListSuc:(id)arg1 microMsgReqList:(id)arg2;
- (void)handleSendMsgListFail:(id)arg1;
- (id)microMsgReq2WrapMsg:(id)arg1;
- (void)batchSendMsg:(id)arg1;
- (void)checkWaitingQueue;
- (void)sendMsg:(id)arg1;
- (void)dealloc;
- (id)init;

@end

