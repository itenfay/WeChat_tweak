//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, NSURLConnection;

@interface TVConfigManager : NSObject
{
    NSString *bakPrefix;
    NSString *otype;
    NSString *platform;
    NSString *host;
    NSString *port;
    NSString *cgi;
    NSString *player_channel_id;
    NSString *version;
    NSString *versionCode;
    NSString *ipflag;
    NSString *guid;
    int MAXRetryTimes;
    double timeout;
    NSURLConnection *configConnection;
    NSString *receiveData;
    _Bool useHTTPS;
    int retryTime;
    _Bool isRequested;
}

- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)connectionDidFinishLoading:(id)arg1;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (void)cancelAttainConfig;
- (void)SaveConfig:(id)arg1;
- (id)GetTVProxyConfigVersion;
- (id)GetTVProxyVersionCode;
- (id)GetTVProxyVersion;
- (id)GetTVProxyConfig;
- (id)MakeBKGetServerConfigUrl;
- (id)MakeGetServerConfigUrl;
- (void)SendSynRequestToHost:(id)arg1 withTimeOut:(double)arg2;
- (_Bool)SendHTTPSRequestToHost:(id)arg1 withTimeOut:(double)arg2;
- (void)SynRequestForConfig;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

