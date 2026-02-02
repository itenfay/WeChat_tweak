//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class GetHbRefundConfigResp, JSEvent, NSString, WCPayHongBaoRefundConfigCgi;

@interface WCPayJumpHbRefundJsapiLogic
{
    JSEvent *m_jsEvent;
    WCPayHongBaoRefundConfigCgi *_hbRefundConfigCgi;
    GetHbRefundConfigResp *_hbRefundConfigResp;
}

- (void).cxx_destruct;
@property(retain, nonatomic) GetHbRefundConfigResp *hbRefundConfigResp; // @synthesize hbRefundConfigResp=_hbRefundConfigResp;
@property(retain, nonatomic) WCPayHongBaoRefundConfigCgi *hbRefundConfigCgi; // @synthesize hbRefundConfigCgi=_hbRefundConfigCgi;
- (void)OnHongBaoRefundConfigRepsonseError:(id)arg1 errorCode:(unsigned int)arg2;
- (void)OnHongBaoRefundConfigRepsonseOK:(id)arg1;
- (void)onChangeHongBaoRefundPayWay;
- (void)requestHbRefundConfig;
- (void)startLogic;
- (void)stopLogic;
- (id)initWithJSEvent:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

