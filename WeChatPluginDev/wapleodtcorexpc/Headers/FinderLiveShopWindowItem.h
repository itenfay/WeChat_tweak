//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class FinderShopCouponInfo, FinderWindowProductInfo, NSData;

@interface FinderLiveShopWindowItem : WXPBGeneratedMessage
{
}

+ (void)initialize;
@property(readonly, nonatomic) FinderShopCouponInfo *couponInfo;
@property(readonly, nonatomic) FinderWindowProductInfo *productInfo;

// Remaining properties
@property(retain, nonatomic) NSData *extInfo; // @dynamic extInfo;
@property(nonatomic) unsigned int itemType; // @dynamic itemType;

@end

