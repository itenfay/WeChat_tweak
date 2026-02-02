//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class QryAutoPlanOrderListReq;
@protocol WCPayQryLqtAutoPlanOrderListCgiDelegate;

@interface WCPayQryLqtAutoPlanOrderListCgi
{
    id <WCPayQryLqtAutoPlanOrderListCgiDelegate> _m_delegate;
    QryAutoPlanOrderListReq *_planDetailReq;
}

- (void).cxx_destruct;
@property(retain) QryAutoPlanOrderListReq *planDetailReq; // @synthesize planDetailReq=_planDetailReq;
@property __weak id <WCPayQryLqtAutoPlanOrderListCgiDelegate> m_delegate; // @synthesize m_delegate=_m_delegate;
- (void)didFailWithError:(id)arg1;
- (void)didGetResponse:(id)arg1;
- (void)startRequest:(id)arg1 delegate:(id)arg2;
- (id)init;
- (unsigned long long)reqLimit;
- (void)clearDelegate;

@end

