//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface TSMCryptoSM3 : NSObject
{
    void *_ctx;
    int _type;
}

+ (id)kdf:(id)arg1 keylen:(unsigned int)arg2 error:(id *)arg3;
+ (id)hmac:(id)arg1 key:(id)arg2 error:(id *)arg3;
+ (id)hash:(id)arg1 error:(id *)arg2;
- (id)hmacFinal:(id *)arg1;
- (void)hmacUpdate:(id)arg1 error:(id *)arg2;
- (id)initForHmac:(id)arg1 error:(id *)arg2;
- (id)hashFinal:(id *)arg1;
- (void)hashUpdate:(id)arg1 error:(id *)arg2;
- (id)initForHash:(id *)arg1;
- (id)init;

@end

