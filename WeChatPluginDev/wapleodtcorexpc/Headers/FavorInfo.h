//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSString;

@interface FavorInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;
+ (id)GenFromDictionary:(id)arg1;

// Remaining properties
@property(retain, nonatomic) NSString *businessReceiptNo; // @dynamic businessReceiptNo;
@property(retain, nonatomic) NSString *extendStr; // @dynamic extendStr;
@property(retain, nonatomic) NSString *favDesc; // @dynamic favDesc;
@property(nonatomic) unsigned long long favId; // @dynamic favId;
@property(retain, nonatomic) NSString *favName; // @dynamic favName;
@property(retain, nonatomic) NSString *favPrice; // @dynamic favPrice;
@property(nonatomic) unsigned long long favProperty; // @dynamic favProperty;
@property(nonatomic) unsigned int favScopeType; // @dynamic favScopeType;
@property(nonatomic) unsigned long long favSubType; // @dynamic favSubType;
@property(nonatomic) unsigned long long favType; // @dynamic favType;
@property(retain, nonatomic) NSString *favorRemarks; // @dynamic favorRemarks;
@property(retain, nonatomic) NSString *favorTypeDesc; // @dynamic favorTypeDesc;
@property(retain, nonatomic) NSString *favorUseManual; // @dynamic favorUseManual;
@property(retain, nonatomic) NSString *realFavFee; // @dynamic realFavFee;
@property(nonatomic) unsigned int unavailable; // @dynamic unavailable;

@end

