//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface WANetworkConfigBase : NSObject
{
    NSString *_appID;
    unsigned long long _appVersion;
    _Bool _skipPortCheck;
    unsigned int _timeoutMS;
    NSString *_httpHeaderReferer;
    NSString *_mmUserAgent;
    NSArray *_arrCertData;
    NSArray *_arrDomainList;
    NSString *_httpHeaderMode;
    NSArray *_arrHttpHeaderBlackList;
    NSArray *_arrHttpHeaderWhiteList;
}

+ (id)certificateDataTrustChainForServerTrust:(struct __SecTrust *)arg1;
+ (_Bool)validateChallenge:(id)arg1 withCertificateDataArray:(id)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *arrHttpHeaderWhiteList; // @synthesize arrHttpHeaderWhiteList=_arrHttpHeaderWhiteList;
@property(retain, nonatomic) NSArray *arrHttpHeaderBlackList; // @synthesize arrHttpHeaderBlackList=_arrHttpHeaderBlackList;
@property(retain, nonatomic) NSString *httpHeaderMode; // @synthesize httpHeaderMode=_httpHeaderMode;
@property(retain, nonatomic) NSArray *arrDomainList; // @synthesize arrDomainList=_arrDomainList;
@property(nonatomic) _Bool skipPortCheck; // @synthesize skipPortCheck=_skipPortCheck;
@property(retain, nonatomic) NSArray *arrCertData; // @synthesize arrCertData=_arrCertData;
@property(retain, nonatomic) NSString *mmUserAgent; // @synthesize mmUserAgent=_mmUserAgent;
@property(retain, nonatomic) NSString *httpHeaderReferer; // @synthesize httpHeaderReferer=_httpHeaderReferer;
@property(nonatomic) unsigned int timeoutMS; // @synthesize timeoutMS=_timeoutMS;
- (unsigned int)configDefaultTimeoutMS;
- (unsigned int)configTimeoutMS;
- (unsigned int)configMaxTimeoutMS;
- (id)configDomainList;
- (void)loadConfig:(id)arg1;
- (_Bool)validateChallenge:(id)arg1;
- (id)filterHttpHeader:(id)arg1;
- (_Bool)checkDomainList:(id)arg1;
- (_Bool)checkDomain:(id)arg1;
- (int)checkIp:(id)arg1;
- (id)initWithAppID:(id)arg1 appVersion:(unsigned long long)arg2 context:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

