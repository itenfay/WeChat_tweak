//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableDictionary, NSString, WebvViewWebComPublicLibInfo;

@interface WebvViewSanboxSessionInfo
{
    _Bool _hasInjectSessionOpenTagFrame;
    NSString *_sanboxId;
    NSString *_sanboxUrl;
    NSString *_verifyAppId;
    NSString *_debugConfigHost;
    NSMutableDictionary *_dictSandboxAppTask;
    NSMutableDictionary *_dictWebComInfos;
    unsigned long long _performance_evalMainFrameTagsJsBeginTs;
    unsigned long long _performance_evalMainFrameTagsJsEndTs;
    WebvViewWebComPublicLibInfo *_sessionPublicInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WebvViewWebComPublicLibInfo *sessionPublicInfo; // @synthesize sessionPublicInfo=_sessionPublicInfo;
@property(nonatomic) unsigned long long performance_evalMainFrameTagsJsEndTs; // @synthesize performance_evalMainFrameTagsJsEndTs=_performance_evalMainFrameTagsJsEndTs;
@property(nonatomic) unsigned long long performance_evalMainFrameTagsJsBeginTs; // @synthesize performance_evalMainFrameTagsJsBeginTs=_performance_evalMainFrameTagsJsBeginTs;
@property(retain, nonatomic) NSMutableDictionary *dictWebComInfos; // @synthesize dictWebComInfos=_dictWebComInfos;
@property(retain, nonatomic) NSMutableDictionary *dictSandboxAppTask; // @synthesize dictSandboxAppTask=_dictSandboxAppTask;
@property(copy, nonatomic) NSString *debugConfigHost; // @synthesize debugConfigHost=_debugConfigHost;
@property(nonatomic) _Bool hasInjectSessionOpenTagFrame; // @synthesize hasInjectSessionOpenTagFrame=_hasInjectSessionOpenTagFrame;
@property(copy, nonatomic) NSString *verifyAppId; // @synthesize verifyAppId=_verifyAppId;
@property(copy, nonatomic) NSString *sanboxUrl; // @synthesize sanboxUrl=_sanboxUrl;
@property(copy, nonatomic) NSString *sanboxId; // @synthesize sanboxId=_sanboxId;
- (id)tryGenAndGetNewSessionPublicInfo;
- (void)onSessionResume;
- (void)releaseSession;
- (void)dealloc;
- (id)init;

@end

