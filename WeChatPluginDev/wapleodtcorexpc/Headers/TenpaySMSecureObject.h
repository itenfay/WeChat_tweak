//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface TenpaySMSecureObject : NSObject
{
}

- (id)md5:(id)arg1;
- (id)sha1:(id)arg1;
- (id)sha256:(id)arg1;
- (id)sm4DecryptCBC:(id)arg1 key:(id)arg2 iv:(id)arg3 noPadding:(_Bool)arg4;
- (id)sm4EncryptCBC:(id)arg1 key:(id)arg2 iv:(id)arg3 noPadding:(_Bool)arg4;
- (id)generateSM4Key;
- (id)sm3:(id)arg1;
- (id)sm2Encrypt:(id)arg1 publicKey:(id)arg2;
- (id)getRandomBytes:(unsigned long long)arg1;
- (int)getError;
- (id)init;

@end

