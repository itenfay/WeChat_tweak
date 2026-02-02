//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface WXGChatSyncKeyService
{
    NSString *_publicKey;
    NSString *_privateKey;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *privateKey; // @synthesize privateKey=_privateKey;
@property(retain, nonatomic) NSString *publicKey; // @synthesize publicKey=_publicKey;
- (void)genRsaKeyPair;
- (id)getPrivateKeyString;
- (id)getPublicKeyString;
- (id)getSyncPublicKey;
- (void)onServiceInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

