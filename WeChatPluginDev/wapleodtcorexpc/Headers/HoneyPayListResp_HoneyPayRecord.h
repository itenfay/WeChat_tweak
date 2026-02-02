//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSString;

@interface HoneyPayListResp_HoneyPayRecord : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *cardNo; // @dynamic cardNo;
@property(nonatomic) unsigned int cardType; // @dynamic cardType;
@property(retain, nonatomic) NSString *cardTypeName; // @dynamic cardTypeName;
@property(nonatomic) unsigned long long creditLine; // @dynamic creditLine;
@property(nonatomic) unsigned long long detailEntrance; // @dynamic detailEntrance;
@property(retain, nonatomic) NSString *icon; // @dynamic icon;
@property(nonatomic) unsigned int rcvd; // @dynamic rcvd;
@property(nonatomic) unsigned long long remainCreditLine; // @dynamic remainCreditLine;
@property(retain, nonatomic) NSString *userUsername; // @dynamic userUsername;

@end

