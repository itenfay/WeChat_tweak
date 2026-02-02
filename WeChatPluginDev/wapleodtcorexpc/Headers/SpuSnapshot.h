//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class EcWxaInfo, Media, NSString, SpuCategory;

@interface SpuSnapshot : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned long long paymentAmount; // @dynamic paymentAmount;
@property(retain, nonatomic) Media *primaryMedia; // @dynamic primaryMedia;
@property(nonatomic) unsigned long long productAmount; // @dynamic productAmount;
@property(nonatomic) unsigned int productCnt; // @dynamic productCnt;
@property(nonatomic) unsigned long long skuId; // @dynamic skuId;
@property(retain, nonatomic) NSString *skuName; // @dynamic skuName;
@property(retain, nonatomic) SpuCategory *spuCategory; // @dynamic spuCategory;
@property(nonatomic) unsigned long long spuId; // @dynamic spuId;
@property(retain, nonatomic) NSString *spuName; // @dynamic spuName;
@property(retain, nonatomic) EcWxaInfo *wxaInfo; // @dynamic wxaInfo;

@end

