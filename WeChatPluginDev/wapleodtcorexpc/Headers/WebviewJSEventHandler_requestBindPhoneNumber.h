//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class JSEvent, MMPageSheetAdapter, NSString;

@interface WebviewJSEventHandler_requestBindPhoneNumber
{
    MMPageSheetAdapter *_adapter;
    NSString *_bindPhoneNum;
    JSEvent *_event;
}

- (void).cxx_destruct;
@property(retain, nonatomic) JSEvent *event; // @synthesize event=_event;
@property(retain, nonatomic) NSString *bindPhoneNum; // @synthesize bindPhoneNum=_bindPhoneNum;
@property(retain, nonatomic) MMPageSheetAdapter *adapter; // @synthesize adapter=_adapter;
- (void)onClickPageSheetCancelButton;
- (void)onClickPageSheetConfirmButton;
- (id)titleForPageSheetCancelButton;
- (id)titleForPageSheetConfirmButton;
- (id)getPhoneInfoView;
- (id)getRequestInfoView:(id)arg1;
- (void)showHalfScreen:(id)arg1;
- (void)handleJSEvent:(id)arg1 HandlerFacade:(id)arg2 ExtraData:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

