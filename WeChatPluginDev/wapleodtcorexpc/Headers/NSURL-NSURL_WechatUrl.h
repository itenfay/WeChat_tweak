//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <Foundation/NSURL.h>

@class NSString;

@interface NSURL (NSURL_WechatUrl)
+ (id)queryDictionaryFromUrl:(id)arg1;
+ (id)wwkapi_nilobj;
+ (id)safeUrlWithString:(id)arg1;
- (_Bool)isInDmoain:(id)arg1;
- (id)hostPort;
- (_Bool)isHostPathHasPrefixWithConfigKey:(id)arg1 defaultValue:(id)arg2;
- (_Bool)isOAuthUrl;
- (_Bool)isNeedForceSyncA8Key;
- (_Bool)isWechatRedirect;
- (id)getUrlPartAfterSharp;
- (id)SC_URLWithQueries:(id)arg1;
- (void)setCodeCacheDetail:(id)arg1;
- (id)codeCacheDetail;
- (void)setByteCodeIdentifier:(id)arg1;
- (id)byteCodeIdentifier;
- (void)setByteCodeDirPath:(id)arg1;
- (id)byteCodeDirPath;
- (unsigned long long)byteCodeSwitchType;
- (void)setByteCodeSwitchType:(unsigned long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

