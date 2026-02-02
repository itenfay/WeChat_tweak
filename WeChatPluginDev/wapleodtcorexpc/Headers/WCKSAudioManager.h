//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableDictionary, NSString;

@interface WCKSAudioManager
{
    _Bool _useCronetDownloader;
    NSMutableDictionary *_referrerDict;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *referrerDict; // @synthesize referrerDict=_referrerDict;
@property(nonatomic) _Bool useCronetDownloader; // @synthesize useCronetDownloader=_useCronetDownloader;
- (id)getReferrerWithUrl:(id)arg1;
- (void)setReferrer:(id)arg1 forUrl:(id)arg2;
- (id)limitNetParam;
- (unsigned int)downloadRetryCnt;
- (id)createAudioDownloader;
- (id)createUserAudioProcessor:(id)arg1;
- (_Bool)isNetOk;
- (void)cleanUpCache;
- (void)makeSureCachePatchExist;
- (id)cacheRootPath;
- (void)onServiceInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

