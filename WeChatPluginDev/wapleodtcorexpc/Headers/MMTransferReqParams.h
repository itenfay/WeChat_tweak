//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface MMTransferReqParams : NSObject
{
    _Bool _needVerifySignature;
    _Bool _disableRetryWhenFail;
    _Bool _isWaitingH5auth;
    _Bool _isReqRetry;
    unsigned int _cmdId;
    unsigned int _method;
    unsigned int _scene;
    unsigned int _transferType;
    unsigned int _jsApiControlBytesIndex;
    NSString *_cgiUri;
    NSString *_reqJson;
    NSString *_h5Url;
    NSString *_scope;
    NSDictionary *_reqHeader;
    NSString *_pubKeyToken;
    NSString *_appId;
    NSString *_debugIpName;
    NSString *_routeTag;
    CDUnknownBlockType _callback;
    NSString *_h5AuthToken;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isReqRetry; // @synthesize isReqRetry=_isReqRetry;
@property(nonatomic) _Bool isWaitingH5auth; // @synthesize isWaitingH5auth=_isWaitingH5auth;
@property(nonatomic) _Bool disableRetryWhenFail; // @synthesize disableRetryWhenFail=_disableRetryWhenFail;
@property(retain, nonatomic) NSString *h5AuthToken; // @synthesize h5AuthToken=_h5AuthToken;
@property(nonatomic) unsigned int jsApiControlBytesIndex; // @synthesize jsApiControlBytesIndex=_jsApiControlBytesIndex;
@property(copy, nonatomic) CDUnknownBlockType callback; // @synthesize callback=_callback;
@property(nonatomic) unsigned int transferType; // @synthesize transferType=_transferType;
@property(retain, nonatomic) NSString *routeTag; // @synthesize routeTag=_routeTag;
@property(retain, nonatomic) NSString *debugIpName; // @synthesize debugIpName=_debugIpName;
@property(nonatomic) _Bool needVerifySignature; // @synthesize needVerifySignature=_needVerifySignature;
@property(nonatomic) unsigned int scene; // @synthesize scene=_scene;
@property(retain, nonatomic) NSString *appId; // @synthesize appId=_appId;
@property(retain, nonatomic) NSString *pubKeyToken; // @synthesize pubKeyToken=_pubKeyToken;
@property(retain, nonatomic) NSDictionary *reqHeader; // @synthesize reqHeader=_reqHeader;
@property(nonatomic) unsigned int method; // @synthesize method=_method;
@property(retain, nonatomic) NSString *scope; // @synthesize scope=_scope;
@property(retain, nonatomic) NSString *h5Url; // @synthesize h5Url=_h5Url;
@property(retain, nonatomic) NSString *reqJson; // @synthesize reqJson=_reqJson;
@property(retain, nonatomic) NSString *cgiUri; // @synthesize cgiUri=_cgiUri;
@property(nonatomic) unsigned int cmdId; // @synthesize cmdId=_cmdId;
- (_Bool)isValid;
- (id)toTransferReq;

@end

