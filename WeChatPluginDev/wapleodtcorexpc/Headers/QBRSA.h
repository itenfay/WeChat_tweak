//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface QBRSA : NSObject
{
}

+ (id)decryptData:(id)arg1 publicKey:(id)arg2;
+ (id)decryptString:(id)arg1 publicKey:(id)arg2;
+ (id)encryptString:(id)arg1 publicKey:(id)arg2;
+ (id)decryptData:(id)arg1 privateKey:(id)arg2;
+ (id)decryptString:(id)arg1 privateKey:(id)arg2;
+ (id)decryptData:(id)arg1 withKeyRef:(struct __SecKey *)arg2;
+ (id)encryptData:(id)arg1 privateKey:(id)arg2;
+ (id)encryptString:(id)arg1 privateKey:(id)arg2;
+ (id)encryptData:(id)arg1 withKeyRef:(struct __SecKey *)arg2 isSign:(_Bool)arg3;
+ (struct __SecKey *)addPrivateKey:(id)arg1;
+ (id)stripPrivateKeyHeader:(id)arg1;
+ (id)dataToHexString:(id)arg1;
+ (id)encryptOAEPData:(id)arg1 publicKey:(id)arg2;
+ (id)encryptData:(id)arg1 publicKey:(id)arg2;
+ (id)encryptData:(id)arg1 padding:(unsigned int)arg2 publicKey:(id)arg3;
+ (id)encryptData:(id)arg1 padding:(unsigned int)arg2 withKeyRef:(struct __SecKey *)arg3;
+ (struct __SecKey *)addPublicKey:(id)arg1;
+ (id)stripPublicKeyHeader:(id)arg1;

@end

