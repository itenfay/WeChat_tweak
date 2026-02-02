//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, WCAdConfirmHalfScreenAdapter;

@interface LiteAppJsApiAdRequestPhoneNumber
{
    NSString *_requestIcon;
    NSString *_requestName;
    WCAdConfirmHalfScreenAdapter *_phoneNumAdapter;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCAdConfirmHalfScreenAdapter *phoneNumAdapter; // @synthesize phoneNumAdapter=_phoneNumAdapter;
@property(retain, nonatomic) NSString *requestName; // @synthesize requestName=_requestName;
@property(retain, nonatomic) NSString *requestIcon; // @synthesize requestIcon=_requestIcon;
- (void)confirmAdapterClosedWithResult:(long long)arg1 extInfo:(id)arg2;
- (void)showAppointmentPhoneNumberRequestView;
- (void)dealloc;
- (void)doAdInvokeJsApi:(id)arg1 param:(id)arg2 isFromView:(_Bool)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

