//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@interface WCPaySecureEnclaveHelper
{
}

+ (id)keyToData:(id)arg1;
+ (id)signatureData:(id)arg1 srcData:(id)arg2 context:(id)arg3 error:(id *)arg4;
+ (long long)deleteSEKey:(id)arg1;
+ (long long)createSEKey:(id)arg1;
+ (_Bool)querySEKey:(id)arg1 context:(id)arg2 privateKey:(struct __SecKey **)arg3;
+ (id)exportECPublicKeyToPEM:(id)arg1;
+ (_Bool)getPrivateAndPublicKey:(id)arg1 privateKey:(struct __SecKey **)arg2 publicKey:(struct __SecKey **)arg3;
+ (id)createQueryDict:(id)arg1 context:(id)arg2;
+ (id)createQueryDict:(id)arg1;

@end

