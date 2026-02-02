//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@protocol WCPayOfflineGetMsgCgiDelegate;

@interface WCPayOfflineGetMsgCgi
{
}

- (void)didGetTenPayError:(id)arg1;
- (void)didFailWithError:(id)arg1;
- (void)didGetTenPayResponse:(id)arg1;
- (void)startRequest:(double)arg1 withAckKey:(id)arg2 lastReqKey:(id)arg3 lastPayMsgType:(int)arg4 lastTransId:(id)arg5;
- (void)startRequest;
- (id)init;

// Remaining properties
@property(nonatomic) __weak id <WCPayOfflineGetMsgCgiDelegate> delegate; // @dynamic delegate;

@end

