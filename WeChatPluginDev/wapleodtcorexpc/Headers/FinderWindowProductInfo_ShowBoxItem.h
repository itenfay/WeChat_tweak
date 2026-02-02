//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class FinderWindowProductInfo_CouponInfo, FinderWindowProductInfo_DescWordInfo, FinderWindowProductInfo_FriendBuyInfo, FinderWindowProductInfo_GuaranteeInfo, FinderWindowProductInfo_JumpDescWordInfo, FinderWindowProductInfo_LimitDiscountInfo, FinderWindowProductInfo_RecommandWordInfo, FinderWindowProductInfo_ShowBoxPictureInfo, NSData, NSString;

@interface FinderWindowProductInfo_ShowBoxItem : WXPBGeneratedMessage
{
}

+ (void)initialize;
@property(readonly, nonatomic) FinderWindowProductInfo_JumpDescWordInfo *jumpDescWordInfo;
@property(readonly, nonatomic) FinderWindowProductInfo_ShowBoxPictureInfo *pictureInfo;
@property(readonly, nonatomic) FinderWindowProductInfo_GuaranteeInfo *guaranteeInfo;
@property(readonly, nonatomic) FinderWindowProductInfo_DescWordInfo *descWordInfo;
@property(readonly, nonatomic) FinderWindowProductInfo_LimitDiscountInfo *limitDiscountInfo;
@property(readonly, nonatomic) FinderWindowProductInfo_CouponInfo *couponInfo;
@property(readonly, nonatomic) FinderWindowProductInfo_FriendBuyInfo *friendBuyInfo;
@property(readonly, nonatomic) FinderWindowProductInfo_RecommandWordInfo *recommandWordInfo;

// Remaining properties
@property(retain, nonatomic) NSData *content; // @dynamic content;
@property(retain, nonatomic) NSString *extraReportData; // @dynamic extraReportData;
@property(nonatomic) unsigned int type; // @dynamic type;

@end

