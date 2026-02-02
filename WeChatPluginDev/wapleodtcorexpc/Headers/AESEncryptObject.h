//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface AESEncryptObject : NSObject
{
    NSString *_m_aesKey;
    NSString *_m_rsaEncryptedKey;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *m_rsaEncryptedKey; // @synthesize m_rsaEncryptedKey=_m_rsaEncryptedKey;
@property(retain, nonatomic) NSString *m_aesKey; // @synthesize m_aesKey=_m_aesKey;
- (id)encryptWithSourceString:(id)arg1;
- (id)rsaEncryptedKey;
- (id)initWithAesKey:(id)arg1 withRSAEncryptedKey:(id)arg2;

@end

