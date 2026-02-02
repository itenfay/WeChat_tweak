//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class GetTransferWordingResponse, NSString, WCPayGetTransferWordingCgi;

@interface WCPayJsOpenResetTransferDelayViewLogic
{
    unsigned long long _fromScene;
    WCPayGetTransferWordingCgi *_wordingCgi;
    GetTransferWordingResponse *_wordingResponse;
}

- (void).cxx_destruct;
@property(retain, nonatomic) GetTransferWordingResponse *wordingResponse; // @synthesize wordingResponse=_wordingResponse;
@property(retain, nonatomic) WCPayGetTransferWordingCgi *wordingCgi; // @synthesize wordingCgi=_wordingCgi;
@property(nonatomic) unsigned long long fromScene; // @synthesize fromScene=_fromScene;
- (void)wcpayGetTransferWordingCgi:(id)arg1 didFailWithError:(id)arg2;
- (void)wcpayGetTransferWordingCgi:(id)arg1 didGetResponse:(id)arg2;
- (void)onDelayTransferDurationViewControllerBack;
- (void)startLogic;
- (id)initWithFromScene:(unsigned long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

