//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class FinderWxAppInfo, NSString;

@interface FinderLiveGetShopShelfResponse_ShopVipInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned int alreadyVipFlag; // @dynamic alreadyVipFlag;
@property(retain, nonatomic) NSString *descWording; // @dynamic descWording;
@property(retain, nonatomic) NSString *headWording; // @dynamic headWording;
@property(retain, nonatomic) NSString *iconUrl; // @dynamic iconUrl;
@property(retain, nonatomic) FinderWxAppInfo *jumpWxaInfo; // @dynamic jumpWxaInfo;

@end

