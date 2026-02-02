//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSData, NSNumber;

@interface WCNotificationEncryptionInfo : NSObject
{
    NSNumber *_identifier;
    NSData *_publicKey;
    NSData *_privateKey;
}

+ (id)infoFromDictionary:(id)arg1;
+ (id)encryptionInfoWithInfos:(id)arg1 error:(id *)arg2;
+ (id)defaultEncryptionInfo;
- (void).cxx_destruct;
@property(retain, nonatomic) NSData *privateKey; // @synthesize privateKey=_privateKey;
@property(retain, nonatomic) NSData *publicKey; // @synthesize publicKey=_publicKey;
@property(retain, nonatomic) NSNumber *identifier; // @synthesize identifier=_identifier;
- (id)description;
- (id)dictionary;
- (id)initWithIdentifier:(id)arg1 publicKey:(id)arg2 privateKey:(id)arg3;

@end

