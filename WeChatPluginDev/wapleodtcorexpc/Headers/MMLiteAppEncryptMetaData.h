//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSData;

@interface MMLiteAppEncryptMetaData : NSObject
{
    unsigned int _algorithm;
    NSData *_key;
    NSData *_tag;
    NSData *_iv;
    NSData *_aad;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSData *aad; // @synthesize aad=_aad;
@property(retain, nonatomic) NSData *iv; // @synthesize iv=_iv;
@property(retain, nonatomic) NSData *tag; // @synthesize tag=_tag;
@property(retain, nonatomic) NSData *key; // @synthesize key=_key;
@property(nonatomic) unsigned int algorithm; // @synthesize algorithm=_algorithm;
- (id)init;

@end

