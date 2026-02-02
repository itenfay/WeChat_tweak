//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BusinessDetailInfo, BusinessServiceInfo, NSString, SearchOrRecommendItemNew;

@interface BusinessContactItem : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) SearchOrRecommendItemNew *contactItem; // @dynamic contactItem;
@property(retain, nonatomic) BusinessDetailInfo *detailInfo; // @dynamic detailInfo;
@property(retain, nonatomic) NSString *jumpUrl; // @dynamic jumpUrl;
@property(retain, nonatomic) NSString *nickName; // @dynamic nickName;
@property(retain, nonatomic) BusinessServiceInfo *serviceInfo; // @dynamic serviceInfo;

@end

