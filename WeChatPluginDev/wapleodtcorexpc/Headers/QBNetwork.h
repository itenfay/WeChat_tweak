//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSError, NSString, NSThread, NSURLConnection, NSURLRequest, NSURLSessionTask, QBASIHTTPRequest;
@protocol QBNetworkDelegate;

@interface QBNetwork : NSObject
{
    NSURLSessionTask *_nsurlSessionTask;
    NSURLConnection *_nsurlConnection;
    _Bool _iscancel;
    NSThread *_currentThread;
    _Bool _isProtocol;
    QBASIHTTPRequest *_asiHttpRequest;
    NSURLRequest *_currentRequest;
    NSError *_httpsError;
    id <QBNetworkDelegate> _delegate;
}

+ (id)NSErrorForASIRequest:(id)arg1;
+ (id)sendSynchronousRequest:(id)arg1 needSession:(_Bool)arg2 returningResponse:(id *)arg3 error:(id *)arg4;
+ (_Bool)canSessionON;
+ (_Bool)defaultSessionSON;
@property __weak id <QBNetworkDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 willCacheResponse:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 didReceiveChallenge:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)URLSession:(id)arg1 task:(id)arg2 willPerformHTTPRedirection:(id)arg3 newRequest:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)postError:(id)arg1;
- (void)postFinish;
- (void)postReceiveData:(id)arg1;
- (void)postReceiveResp:(id)arg1;
- (void)postRedict:(id)arg1;
- (void)connection:(id)arg1 willSendRequestForAuthenticationChallenge:(id)arg2;
- (_Bool)connectionShouldUseCredentialStorage:(id)arg1;
- (id)connection:(id)arg1 willCacheResponse:(id)arg2;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)connectionDidFinishLoading:(id)arg1;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (id)connection:(id)arg1 willSendRequest:(id)arg2 redirectResponse:(id)arg3;
- (void)retryErrorRequest:(id)arg1;
- (void)request:(id)arg1 didReceiveData:(id)arg2;
- (void)requestFailed:(id)arg1;
- (void)requestFinished:(id)arg1;
- (void)request:(id)arg1 willRedirectToURL:(id)arg2;
- (void)request:(id)arg1 didReceiveResponseHeaders:(id)arg2;
- (void)cancel;
- (id)initWithRequest:(id)arg1 delegate:(id)arg2 isProtocol:(_Bool)arg3 needSession:(_Bool)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

