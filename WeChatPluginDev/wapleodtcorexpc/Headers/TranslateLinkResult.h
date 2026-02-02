//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSData, NSString, SdkFinderInfoResult, TranslateLinkCacheWrap, TranslateLinkResultShareInfo;

@interface TranslateLinkResult
{
    _Bool _isFromLocalCache;
    int _errcode;
    unsigned int _version;
    unsigned int _actionCode;
    unsigned int _wxaScene;
    NSString *_deeplink;
    NSString *_errmsg;
    NSString *_errWording;
    NSString *_sdkToken;
    NSString *_appNickname;
    NSString *_appIconUrl;
    NSString *_redirectUrl;
    NSData *_wxaRuntimeBuffer;
    TranslateLinkResultShareInfo *_shareMsgInfo;
    NSString *_wxaSceneNote;
    SdkFinderInfoResult *_finderInfoResult;
    NSString *_platformSignature;
    NSString *_appmsgSignature3rd;
    long long _shareChatScope;
    TranslateLinkCacheWrap *_cacheWrap;
}

+ (id)errorWithCode:(long long)arg1 message:(id)arg2;
+ (id)resultWithCacheWrap:(id)arg1 andError:(id *)arg2;
- (void).cxx_destruct;
@property(nonatomic) _Bool isFromLocalCache; // @synthesize isFromLocalCache=_isFromLocalCache;
@property(retain, nonatomic) TranslateLinkCacheWrap *cacheWrap; // @synthesize cacheWrap=_cacheWrap;
@property(nonatomic) long long shareChatScope; // @synthesize shareChatScope=_shareChatScope;
@property(copy, nonatomic) NSString *appmsgSignature3rd; // @synthesize appmsgSignature3rd=_appmsgSignature3rd;
@property(copy, nonatomic) NSString *platformSignature; // @synthesize platformSignature=_platformSignature;
@property(retain, nonatomic) SdkFinderInfoResult *finderInfoResult; // @synthesize finderInfoResult=_finderInfoResult;
@property(copy, nonatomic) NSString *wxaSceneNote; // @synthesize wxaSceneNote=_wxaSceneNote;
@property(nonatomic) unsigned int wxaScene; // @synthesize wxaScene=_wxaScene;
@property(retain, nonatomic) TranslateLinkResultShareInfo *shareMsgInfo; // @synthesize shareMsgInfo=_shareMsgInfo;
@property(nonatomic) unsigned int actionCode; // @synthesize actionCode=_actionCode;
@property(retain, nonatomic) NSData *wxaRuntimeBuffer; // @synthesize wxaRuntimeBuffer=_wxaRuntimeBuffer;
@property(copy, nonatomic) NSString *redirectUrl; // @synthesize redirectUrl=_redirectUrl;
@property(copy, nonatomic) NSString *appIconUrl; // @synthesize appIconUrl=_appIconUrl;
@property(copy, nonatomic) NSString *appNickname; // @synthesize appNickname=_appNickname;
@property(copy, nonatomic) NSString *sdkToken; // @synthesize sdkToken=_sdkToken;
@property(nonatomic) unsigned int version; // @synthesize version=_version;
@property(copy, nonatomic) NSString *errWording; // @synthesize errWording=_errWording;
@property(copy, nonatomic) NSString *errmsg; // @synthesize errmsg=_errmsg;
@property(nonatomic) int errcode; // @synthesize errcode=_errcode;
@property(copy, nonatomic) NSString *deeplink; // @synthesize deeplink=_deeplink;
- (id)description;

@end

