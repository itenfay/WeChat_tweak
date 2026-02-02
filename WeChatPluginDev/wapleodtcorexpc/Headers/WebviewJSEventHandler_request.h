//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSURLSession;

@interface WebviewJSEventHandler_request
{
    NSURLSession *_urlSession;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSURLSession *urlSession; // @synthesize urlSession=_urlSession;
- (id)headerDictionaryFromResponse:(id)arg1;
- (void)setupNSURLSession;
- (void)endWithResult:(id)arg1 event:(id)arg2;
- (void)endWithSuccessResult:(id)arg1 event:(id)arg2;
- (void)endWithError:(id)arg1 event:(id)arg2;
- (void)onResponse:(id)arg1 data:(id)arg2 error:(id)arg3 event:(id)arg4 url:(id)arg5;
- (void)handleJSEvent:(id)arg1 HandlerFacade:(id)arg2 ExtraData:(id)arg3;
- (void)dealloc;
- (id)init;

@end

