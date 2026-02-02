//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, WCPayIBGCheckJSAPICgi;

@interface WebviewJSEventHandler_handleWCPayWalletBuffer
{
    NSString *_action;
    long long _region;
    NSString *_buffer;
    NSString *_currentBuffer;
    WCPayIBGCheckJSAPICgi *_cgi;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCPayIBGCheckJSAPICgi *cgi; // @synthesize cgi=_cgi;
@property(retain, nonatomic) NSString *currentBuffer; // @synthesize currentBuffer=_currentBuffer;
@property(retain, nonatomic) NSString *buffer; // @synthesize buffer=_buffer;
@property(nonatomic) long long region; // @synthesize region=_region;
@property(retain, nonatomic) NSString *action; // @synthesize action=_action;
- (void)handleFetchBuffer;
- (void)handleSaveBuffer;
- (void)callFail;
- (id)mmkvBufferKeyWithRegion:(long long)arg1;
- (void)ibgCheckJSAPICgi:(id)arg1 didFailWithError:(id)arg2;
- (void)ibgCheckJSAPICgi:(id)arg1 didGetResponse:(id)arg2;
- (void)handleJSEvent:(id)arg1 HandlerFacade:(id)arg2 ExtraData:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

