//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface SoterSignHelper : NSObject
{
    NSString *_m_publicKey;
    NSString *_m_privateKey;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *m_privateKey; // @synthesize m_privateKey=_m_privateKey;
@property(retain, nonatomic) NSString *m_publicKey; // @synthesize m_publicKey=_m_publicKey;
- (void)genRsaKeyPair;
- (_Bool)rawVerifyWithString:(id)arg1 WithSignatureString:(id)arg2;
- (id)rawSignWithString:(id)arg1;
- (id)getPrivateKey;
- (id)getPublicKey;
- (id)init;

@end

