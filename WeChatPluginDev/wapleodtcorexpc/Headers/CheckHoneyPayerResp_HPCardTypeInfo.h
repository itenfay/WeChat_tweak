//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class HPCardOperItem, NSString;

@interface CheckHoneyPayerResp_HPCardTypeInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned int cardType; // @dynamic cardType;
@property(retain, nonatomic) NSString *cardTypeName; // @dynamic cardTypeName;
@property(retain, nonatomic) NSString *icon; // @dynamic icon;
@property(nonatomic) _Bool isGray; // @dynamic isGray;
@property(retain, nonatomic) HPCardOperItem *operItem; // @dynamic operItem;
@property(retain, nonatomic) NSString *tips; // @dynamic tips;

@end

