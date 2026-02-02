//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface CAESCrypt : NSObject
{
    struct _CCCryptor *m_cryptorRef;
}

+ (id)AESGCMDecryptWithKey:(id)arg1 Data:(id)arg2;
+ (id)AESECBDecryptWithKey:(id)arg1 Data:(id)arg2 Final:(_Bool)arg3;
+ (id)AESECBEncryptWithKey:(id)arg1 Data:(id)arg2 Final:(_Bool)arg3;
+ (id)AESDecryptWithKey:(id)arg1 Data:(id)arg2;
+ (id)AESEncryptWithKey:(id)arg1 Data:(id)arg2;
+ (id)fastAESECBDecryptWithKey:(id)arg1 Data:(id)arg2 Final:(_Bool)arg3;
+ (id)fastAESECBEncryptWithKey:(id)arg1 Data:(id)arg2 Final:(_Bool)arg3;
+ (id)fastAESDecryptWithKey:(id)arg1 Data:(id)arg2;
+ (id)fastAESEncryptWithKey:(id)arg1 Data:(id)arg2;
- (id)decryptECBWithData:(id)arg1 Final:(_Bool)arg2;
- (id)encryptECBWithData:(id)arg1 Final:(_Bool)arg2;
- (id)decryptCBCWithData:(id)arg1 Final:(_Bool)arg2;
- (id)encryptCBCWithData:(id)arg1 Final:(_Bool)arg2;
- (id)cryptUpdateWithData:(id)arg1 Final:(_Bool)arg2;
- (void)makeCryptWithOP:(unsigned int)arg1 withMode:(unsigned int)arg2 withKey:(id)arg3;
- (id)initECBDecryptWithKey:(id)arg1;
- (id)initECBEncryptWithKey:(id)arg1;
- (id)initCBCDecryptWithKey:(id)arg1;
- (id)initCBCEncryptWithKey:(id)arg1;
- (void)dealloc;

@end

