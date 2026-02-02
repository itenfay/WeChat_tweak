//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, NSURLSession;
@protocol OS_dispatch_queue;

@interface HttpClientAppleImpl : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    NSURLSession *_session;
    struct Lock _lock;
    struct map<long long, std::unique_ptr<HttpTask>, std::less<long long>, std::allocator<std::pair<const long long, std::unique_ptr<HttpTask>>>> _taskMap;
    struct Config {
        int connect_timeout_ms;
        int read_timeout_ms;
        int write_timeout_ms;
        _Bool is_keep_alive;
        basic_string_5909a4e2 socks5_proxy_host;
        unsigned short socks5_proxy_port;
        basic_string_5909a4e2 socks5_proxy_user;
        basic_string_5909a4e2 socks5_proxy_password;
    } _config;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)parseIpAddress:(id)arg1;
- (struct IPEndPoint)getRemoteAddr:(id)arg1;
- (id)base64DecodeString:(id)arg1;
- (void)onResponse:(int)arg1 statusCode:(int)arg2 msg:(id)arg3 dataTask:(id)arg4 headers:(id)arg5 data:(id)arg6;
- (int)getStatusCode:(long long)arg1;
- (void)URLSession:(id)arg1 task:(id)arg2 willPerformHTTPRedirection:(id)arg3 newRequest:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)URLSession:(id)arg1 didReceiveChallenge:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)sendRequest:(unique_ptr_0164a445)arg1 repeatCallback:(RepeatingCallback_b3d05fce)arg2;
- (void)sendRequest:(unique_ptr_0164a445)arg1 onceCallback:(OnceCallback_88fa0ee2)arg2;
- (id)makeRequest:(const void *)arg1;
- (void)createURLSession;
- (_Bool)isSessionInvalid:(id)arg1;
- (void)cancelWithRequestIdInternal:(long long)arg1;
- (void)cancelWithRequestId:(long long)arg1;
- (void)cancelAll;
- (void)asyncRun:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)initWithConfig:(struct Config)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

