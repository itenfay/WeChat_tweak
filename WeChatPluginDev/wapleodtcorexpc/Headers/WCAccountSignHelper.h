//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSRecursiveLock, NSString, PubKeyInfo;

@interface WCAccountSignHelper : NSObject
{
    NSRecursiveLock *_signKeyLock;
    PubKeyInfo *_pubKeyInfoForECDSA;
    unsigned long long _pubkeyLastUpdateTime;
    NSString *_lastUploadPubKeyCgiName;
    basic_string_5909a4e2 _privateKeyForECDSA;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(retain) NSString *lastUploadPubKeyCgiName; // @synthesize lastUploadPubKeyCgiName=_lastUploadPubKeyCgiName;
@property(nonatomic) unsigned long long pubkeyLastUpdateTime; // @synthesize pubkeyLastUpdateTime=_pubkeyLastUpdateTime;
@property(nonatomic) basic_string_1e6f3770 privateKeyForECDSA; // @synthesize privateKeyForECDSA=_privateKeyForECDSA;
@property(retain, nonatomic) PubKeyInfo *pubKeyInfoForECDSA; // @synthesize pubKeyInfoForECDSA=_pubKeyInfoForECDSA;
@property(retain, nonatomic) NSRecursiveLock *signKeyLock; // @synthesize signKeyLock=_signKeyLock;
- (_Bool)createPubkey;
- (void)createEcdsaKeyPairIfNeededWithNeedTryUpdate:(_Bool)arg1;
- (id)pubKeyInfoWithoutUpdate;
- (id)pubKeyInfoForECDSAUpdateIfNeeded;
- (void)makeSureOkAfterLogin;
- (id)ecdsaSignWithData:(id)arg1;
- (void)updateUploadPubKeyCgiName:(id)arg1;
- (id)logInfos;
- (id)init;

@end

