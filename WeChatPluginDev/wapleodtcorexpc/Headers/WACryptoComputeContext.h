//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSData, NSMutableData, NSString;

@interface WACryptoComputeContext : NSObject
{
    NSString *_keyTag;
    NSString *_algorithm;
    NSData *_publicKeyData;
    NSData *_signature;
    unsigned int _identifier;
    NSString *_keyAlias;
    unsigned long long _type;
    NSMutableData *_data;
    NSData *_cachedComputeResult;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSData *cachedComputeResult; // @synthesize cachedComputeResult=_cachedComputeResult;
@property(retain, nonatomic) NSMutableData *data; // @synthesize data=_data;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
@property(copy, nonatomic) NSString *keyAlias; // @synthesize keyAlias=_keyAlias;
@property(nonatomic) unsigned int identifier; // @synthesize identifier=_identifier;
- (struct __CFString *)secKeyAlgorithmWithAlgorithmStr:(id)arg1;
- (_Bool)verifyWithData:(id)arg1 error:(id *)arg2;
- (id)signWithData:(id)arg1 error:(id *)arg2;
- (id)decryptWithData:(id)arg1 error:(id *)arg2;
- (id)encryptWithData:(id)arg1 error:(id *)arg2;
- (void)updateWithData:(id)arg1;
- (id)initWithId:(unsigned int)arg1 type:(id)arg2 algorithm:(id)arg3 keyAlias:(id)arg4 publicKey:(id)arg5 signature:(id)arg6 appId:(id)arg7;

@end

