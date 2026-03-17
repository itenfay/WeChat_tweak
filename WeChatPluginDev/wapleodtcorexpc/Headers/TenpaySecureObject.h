//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface TenpaySecureObject : NSObject
{
}

+ (id)EncryptWithRSA1024:(id)arg1 Exponent:(id)arg2 Modulus:(id)arg3 error:(id *)arg4;
+ (id)EncryptWithRSA2048:(id)arg1 Exponent:(id)arg2 Modulus:(id)arg3 error:(id *)arg4;
+ (id)ErrorWithCode:(int)arg1 Description:(id)arg2;
+ (id)getSHA256Hex:(id)arg1;
+ (id)DecryptWithAESCBC:(id)arg1 key:(id)arg2 iv:(id)arg3;
+ (id)EncryptWithAESCBC:(id)arg1 key:(id)arg2 iv:(id)arg3;
+ (id)EncryptWith3Des:(id)arg1;
+ (id)SignWith3Des:(id)arg1;

@end

