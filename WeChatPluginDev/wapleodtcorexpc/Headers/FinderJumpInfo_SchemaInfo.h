//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSString;

@interface FinderJumpInfo_SchemaInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;
+ (unsigned long long)columnTypeForWCDB;
+ (id)unarchiveWithWCTValue:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)archivedWCTValue;

// Remaining properties
@property(retain, nonatomic) NSString *androidAppPublicKey; // @dynamic androidAppPublicKey;
@property(retain, nonatomic) NSString *androidAppstoreScheme; // @dynamic androidAppstoreScheme;
@property(retain, nonatomic) NSString *androidPackage; // @dynamic androidPackage;
@property(retain, nonatomic) NSString *androidUniversalLink; // @dynamic androidUniversalLink;
@property(retain, nonatomic) NSString *appstoreLink; // @dynamic appstoreLink;
@property(retain, nonatomic) NSString *scheme; // @dynamic scheme;
@property(retain, nonatomic) NSString *universalLink; // @dynamic universalLink;

@end

