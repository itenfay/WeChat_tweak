//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class HoneyPayReceiverStatusViewController, NSString, WCPayGetHoneyPayCardCgi, WCPayQryHoneyUserDetailCgi;
@protocol HoneyPayReceiverDetailControlLogicDelegate;

@interface HoneyPayReceiverDetailControlLogic
{
    _Bool _receiveCardSuccess;
    id <HoneyPayReceiverDetailControlLogicDelegate> _delegate;
    HoneyPayReceiverStatusViewController *_detailVC;
    WCPayQryHoneyUserDetailCgi *_detailCgi;
    WCPayGetHoneyPayCardCgi *_getCardCgi;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool receiveCardSuccess; // @synthesize receiveCardSuccess=_receiveCardSuccess;
@property(retain, nonatomic) WCPayGetHoneyPayCardCgi *getCardCgi; // @synthesize getCardCgi=_getCardCgi;
@property(retain, nonatomic) WCPayQryHoneyUserDetailCgi *detailCgi; // @synthesize detailCgi=_detailCgi;
@property(retain, nonatomic) HoneyPayReceiverStatusViewController *detailVC; // @synthesize detailVC=_detailVC;
@property(nonatomic) __weak id <HoneyPayReceiverDetailControlLogicDelegate> delegate; // @synthesize delegate=_delegate;
- (void)OnRealnameVerifySuccess:(id)arg1;
- (void)getHoneyPayCardCgi:(id)arg1 didFailWithError:(id)arg2;
- (void)getHoneyPayCardCgi:(id)arg1 didGetResponse:(id)arg2;
- (void)qryHoneyUserDetailCgi:(id)arg1 didFailWithError:(id)arg2;
- (void)qryHoneyUserDetailCgi:(id)arg1 didGetResponse:(id)arg2;
- (void)receiverStatusVCDidClickGotoBankCardList:(id)arg1;
- (void)receiverStatusVCDidClickGetCard:(id)arg1;
- (id)cardNo;
- (void)requestDetail;
- (void)WCPayViewControllerDidBeRemoved:(id)arg1;
- (void)dealloc;
- (void)startLogic;
- (void)MMUIViewControllerDidBeRemoved:(id)arg1;
- (id)initWithData:(id)arg1 delegate:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

