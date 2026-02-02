//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class JSEvent, NSDictionary, NSMutableData, NSURLConnection;

@interface WebviewJSEventHandler_sendEnterpriseChat
{
    NSURLConnection *_connection;
    JSEvent *_curEvent;
    NSDictionary *_curExtraData;
    NSMutableData *_recData;
}

- (void).cxx_destruct;
- (void)dealloc;
- (void)sendAppMessage:(id)arg1 extraData:(id)arg2 imageData:(id)arg3;
- (void)connectionDidFinishLoading:(id)arg1;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)clearCurData;
- (void)processLinkMsg;
- (void)processTextMsg;
- (void)handleJSEvent:(id)arg1 HandlerFacade:(id)arg2 ExtraData:(id)arg3;

@end

