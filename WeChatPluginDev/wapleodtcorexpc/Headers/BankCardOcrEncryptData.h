//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSData, NSNumber;

@interface BankCardOcrEncryptData : NSObject
{
    NSData *_cipher_text;
    NSData *_tag;
    NSData *_iv;
    NSData *_aad;
    NSNumber *_key_seq;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSNumber *key_seq; // @synthesize key_seq=_key_seq;
@property(copy, nonatomic) NSData *aad; // @synthesize aad=_aad;
@property(copy, nonatomic) NSData *iv; // @synthesize iv=_iv;
@property(copy, nonatomic) NSData *tag; // @synthesize tag=_tag;
@property(copy, nonatomic) NSData *cipher_text; // @synthesize cipher_text=_cipher_text;

@end

