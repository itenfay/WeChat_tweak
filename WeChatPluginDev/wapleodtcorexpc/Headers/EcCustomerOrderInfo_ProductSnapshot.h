//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class Media, NSString;

@interface EcCustomerOrderInfo_ProductSnapshot : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) Media *primaryMedia; // @dynamic primaryMedia;
@property(nonatomic) unsigned int productCnt; // @dynamic productCnt;
@property(retain, nonatomic) NSString *skuId; // @dynamic skuId;
@property(retain, nonatomic) NSString *skuName; // @dynamic skuName;
@property(retain, nonatomic) NSString *spuId; // @dynamic spuId;
@property(retain, nonatomic) NSString *spuName; // @dynamic spuName;

@end

