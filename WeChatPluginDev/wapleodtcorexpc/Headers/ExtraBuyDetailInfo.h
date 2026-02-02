//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSString;

@interface ExtraBuyDetailInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;
+ (id)modelCustomPropertyMapperForConfigTag:(id)arg1;

// Remaining properties
@property(retain, nonatomic) NSString *extraBuyGoodName; // @dynamic extraBuyGoodName;
@property(retain, nonatomic) NSString *extraBuyGoodPic; // @dynamic extraBuyGoodPic;
@property(nonatomic) unsigned long long extraBuyId; // @dynamic extraBuyId;
@property(retain, nonatomic) NSString *extraBuyName; // @dynamic extraBuyName;
@property(nonatomic) unsigned long long goodAddPrice; // @dynamic goodAddPrice;
@property(nonatomic) unsigned long long goodOriginalPrice; // @dynamic goodOriginalPrice;
@property(nonatomic) _Bool selected; // @dynamic selected;
@property(nonatomic) unsigned int unavailable; // @dynamic unavailable;
@property(retain, nonatomic) NSString *unavailableReason; // @dynamic unavailableReason;

@end

