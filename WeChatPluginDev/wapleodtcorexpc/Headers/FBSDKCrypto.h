//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSData;

@interface FBSDKCrypto : NSObject
{
    NSData *_encryptionKeyData;
    NSData *_macKeyData;
}

+ (id)randomString:(unsigned long long)arg1;
+ (id)randomBytes:(unsigned long long)arg1;
+ (id)makeMasterKey;
- (void).cxx_destruct;
- (id)_macForIV:(id)arg1 cipherData:(id)arg2 additionalDataToSign:(id)arg3;
- (id)decrypt:(id)arg1 additionalSignedData:(id)arg2;
- (id)encrypt:(id)arg1 additionalDataToSign:(id)arg2;
- (void)dealloc;
- (id)initWithEncryptionKey:(id)arg1 macKey:(id)arg2;
- (id)initWithMasterKey:(id)arg1;

@end

