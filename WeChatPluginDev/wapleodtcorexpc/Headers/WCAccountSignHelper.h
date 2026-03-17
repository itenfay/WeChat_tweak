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
    void * _privateKeyForECDSA;
}

@property(retain) NSString *lastUploadPubKeyCgiName; // @synthesize lastUploadPubKeyCgiName=_lastUploadPubKeyCgiName;
@property(nonatomic) unsigned long long pubkeyLastUpdateTime; // @synthesize pubkeyLastUpdateTime=_pubkeyLastUpdateTime;
@property(nonatomic) void * privateKeyForECDSA; // @synthesize privateKeyForECDSA=_privateKeyForECDSA;
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

