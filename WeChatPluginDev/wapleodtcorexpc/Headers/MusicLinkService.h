//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableDictionary, NSString;

@interface MusicLinkService
{
    NSMutableDictionary *_checkUrlCacheList;
    NSMutableDictionary *_checkUrlCacheTimeList;
    long long _checkUrlResultExipredTimeInterval;
    long long _checkUrlLimit;
}

- (void).cxx_destruct;
@property(nonatomic) long long checkUrlLimit; // @synthesize checkUrlLimit=_checkUrlLimit;
@property(nonatomic) long long checkUrlResultExipredTimeInterval; // @synthesize checkUrlResultExipredTimeInterval=_checkUrlResultExipredTimeInterval;
@property(retain, nonatomic) NSMutableDictionary *checkUrlCacheTimeList; // @synthesize checkUrlCacheTimeList=_checkUrlCacheTimeList;
@property(retain, nonatomic) NSMutableDictionary *checkUrlCacheList; // @synthesize checkUrlCacheList=_checkUrlCacheList;
- (id)cachedLinkInfoWithMid:(id)arg1;
- (void)cancelCheckMusicUrl:(unsigned int)arg1;
- (unsigned int)checkMusicUrls:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (unsigned int)checkMusicUrlWithReqeuestInfo:(id)arg1 ignoreCache:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)onServiceClearData;
- (void)onServiceInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

