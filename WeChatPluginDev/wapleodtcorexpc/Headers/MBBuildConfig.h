//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MagicBrushBiz, NSDictionary, NSMutableArray, NSMutableDictionary, NSString;
@protocol IMBBizInfoDelegate, IMBExternalViewDelegate, IMBJsApiDelegate, IMBNetwork, IMBPkgManagement, IMBProfilerDelegate, IMBStorage, IMBVConsoleDelegate, IMBViewDelegate, wxAudioFileLoaderDelegate;

@interface MBBuildConfig : NSObject
{
    _Bool _useJitMode;
    _Bool _isRollbackPresentBugfix;
    _Bool _useMBNano;
    _Bool _autoHighFreshRate;
    id <IMBViewDelegate> _viewDelegate;
    id <IMBExternalViewDelegate> _externalViewDelegate;
    id <IMBPkgManagement> _pkgManagement;
    id <IMBJsApiDelegate> _jsApiDelegate;
    id <IMBVConsoleDelegate> _vConsoleDelegate;
    id <IMBStorage> _storage;
    id <IMBNetwork> _network;
    id _context;
    id <wxAudioFileLoaderDelegate> _wxAudioFileLoaderDelegate;
    id <IMBBizInfoDelegate> _bizInfoDelegate;
    MagicBrushBiz *_biz;
    NSString *_jitDomain;
    unsigned long long _reportSample;
    CDUnknownBlockType _provideExtraInfo;
    id <IMBProfilerDelegate> _profilerDelegate;
    NSMutableArray *_jsapiBlackList;
    NSMutableDictionary *_extJsApiInfoPool;
    NSMutableDictionary *_jsApiPool;
    NSDictionary *_extEnvContents;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSDictionary *extEnvContents; // @synthesize extEnvContents=_extEnvContents;
@property(retain, nonatomic) NSMutableDictionary *jsApiPool; // @synthesize jsApiPool=_jsApiPool;
@property(retain, nonatomic) NSMutableDictionary *extJsApiInfoPool; // @synthesize extJsApiInfoPool=_extJsApiInfoPool;
@property(retain, nonatomic) NSMutableArray *jsapiBlackList; // @synthesize jsapiBlackList=_jsapiBlackList;
@property(nonatomic) __weak id <IMBProfilerDelegate> profilerDelegate; // @synthesize profilerDelegate=_profilerDelegate;
@property(copy, nonatomic) CDUnknownBlockType provideExtraInfo; // @synthesize provideExtraInfo=_provideExtraInfo;
@property(nonatomic) _Bool autoHighFreshRate; // @synthesize autoHighFreshRate=_autoHighFreshRate;
@property(nonatomic) _Bool useMBNano; // @synthesize useMBNano=_useMBNano;
@property(nonatomic) _Bool isRollbackPresentBugfix; // @synthesize isRollbackPresentBugfix=_isRollbackPresentBugfix;
@property(nonatomic) unsigned long long reportSample; // @synthesize reportSample=_reportSample;
@property(retain, nonatomic) NSString *jitDomain; // @synthesize jitDomain=_jitDomain;
@property(nonatomic) _Bool useJitMode; // @synthesize useJitMode=_useJitMode;
@property(nonatomic) __weak MagicBrushBiz *biz; // @synthesize biz=_biz;
@property(nonatomic) __weak id <IMBBizInfoDelegate> bizInfoDelegate; // @synthesize bizInfoDelegate=_bizInfoDelegate;
@property(nonatomic) __weak id <wxAudioFileLoaderDelegate> wxAudioFileLoaderDelegate; // @synthesize wxAudioFileLoaderDelegate=_wxAudioFileLoaderDelegate;
@property(nonatomic) __weak id context; // @synthesize context=_context;
@property(nonatomic) __weak id <IMBNetwork> network; // @synthesize network=_network;
@property(nonatomic) __weak id <IMBStorage> storage; // @synthesize storage=_storage;
@property(nonatomic) __weak id <IMBVConsoleDelegate> vConsoleDelegate; // @synthesize vConsoleDelegate=_vConsoleDelegate;
@property(nonatomic) __weak id <IMBJsApiDelegate> jsApiDelegate; // @synthesize jsApiDelegate=_jsApiDelegate;
@property(nonatomic) __weak id <IMBPkgManagement> pkgManagement; // @synthesize pkgManagement=_pkgManagement;
@property(nonatomic) __weak id <IMBExternalViewDelegate> externalViewDelegate; // @synthesize externalViewDelegate=_externalViewDelegate;
@property(nonatomic) __weak id <IMBViewDelegate> viewDelegate; // @synthesize viewDelegate=_viewDelegate;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)removeNativeArrayBuffer:(int)arg1;
- (id)insertNativeArrayBufferWithBuffer:(void *)arg1 length:(unsigned long long)arg2 permission:(unsigned long long)arg3 dataRef:(id)arg4;
- (id)getArrayBuffer:(unsigned int)arg1;
- (id)getAllMBJsApis;
- (id)getApi:(id)arg1;
- (id)getExtJsApiInfo:(id)arg1;
- (_Bool)isJsApiExist:(id)arg1;
- (void)setExtraEnvContents:(id)arg1;
- (void)endWithResult:(unsigned long long)arg1 result:(id)arg2;
- (void)addExtJsApiInfo:(id)arg1 handler:(id)arg2;
- (void)addExtJsApiInfo:(id)arg1;
- (void)addExtJsApi:(id)arg1 name:(id)arg2 isSync:(_Bool)arg3 isRunOnMainThread:(_Bool)arg4;
- (void)addExtJsApi:(id)arg1 name:(id)arg2 isSync:(_Bool)arg3;
- (void)addExtJsApis:(id)arg1;
- (id)getJsApiBlackList;
- (void)setJsApiBlackList:(id)arg1;
- (void)addMBJsApis:(id)arg1;
- (void)addMBJsApi:(id)arg1;
- (id)init;

@end

