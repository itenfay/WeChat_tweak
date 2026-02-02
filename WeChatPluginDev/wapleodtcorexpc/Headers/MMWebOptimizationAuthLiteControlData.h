//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSData, NSString;

@interface MMWebOptimizationAuthLiteControlData
{
    _Bool _hasAllowanceOfFirstAsyncGetA8Key;
    _Bool _needAuthState;
    _Bool _forbidAsyncGetA8key;
    _Bool _fromKara;
    unsigned int _controlExpiredTime;
    unsigned int _ret;
    unsigned int _antiSpamBit;
    unsigned int _authBits;
    unsigned int _scene;
    NSString *_liteRespUrl;
    NSString *_liteUrl;
    NSData *_jsapiControlBytes;
}

+ (void)initialize;
+ (void)PBArrayAdd_jsapiControlBytes;
+ (void)PBArrayAdd_fromKara;
+ (void)PBArrayAdd_scene;
+ (void)PBArrayAdd_forbidAsyncGetA8key;
+ (void)PBArrayAdd_needAuthState;
+ (void)PBArrayAdd_antiSpamBit;
+ (void)PBArrayAdd_authBits;
+ (void)PBArrayAdd_ret;
+ (void)PBArrayAdd_liteUrl;
+ (void)PBArrayAdd_controlExpiredTime;
+ (void)PBArrayAdd_liteRespUrl;
+ (void)PBArrayAdd_hasAllowanceOfFirstAsyncGetA8Key;
- (void).cxx_destruct;
@property(retain, nonatomic) NSData *jsapiControlBytes; // @synthesize jsapiControlBytes=_jsapiControlBytes;
@property(nonatomic) _Bool fromKara; // @synthesize fromKara=_fromKara;
@property(nonatomic) unsigned int scene; // @synthesize scene=_scene;
@property(nonatomic) _Bool forbidAsyncGetA8key; // @synthesize forbidAsyncGetA8key=_forbidAsyncGetA8key;
@property(nonatomic) _Bool needAuthState; // @synthesize needAuthState=_needAuthState;
@property(nonatomic) unsigned int authBits; // @synthesize authBits=_authBits;
@property(nonatomic) unsigned int antiSpamBit; // @synthesize antiSpamBit=_antiSpamBit;
@property(nonatomic) unsigned int ret; // @synthesize ret=_ret;
@property(copy, nonatomic) NSString *liteUrl; // @synthesize liteUrl=_liteUrl;
@property(copy, nonatomic) NSString *liteRespUrl; // @synthesize liteRespUrl=_liteRespUrl;
@property(nonatomic) _Bool hasAllowanceOfFirstAsyncGetA8Key; // @synthesize hasAllowanceOfFirstAsyncGetA8Key=_hasAllowanceOfFirstAsyncGetA8Key;
@property(nonatomic) unsigned int controlExpiredTime; // @synthesize controlExpiredTime=_controlExpiredTime;
@property(readonly, copy) NSString *description;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

