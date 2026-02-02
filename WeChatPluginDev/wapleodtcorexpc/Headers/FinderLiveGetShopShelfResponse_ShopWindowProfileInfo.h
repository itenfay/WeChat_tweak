//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class FinderLiveGetShopShelfResponse_ShopWindowProfileInfo_LiteAppJumpInfo, FinderLiveGetShopShelfResponse_ShopWindowProfileInfo_ShopWindowRankInfo, FinderLiveGetShopShelfResponse_ShopWindowProfileInfo_ShopWindowSalesInfo, FinderLiveGetShopShelfResponse_ShopWindowProfileInfo_ShopWindowScoreInfo, FinderWxAppInfo, NSMutableArray, NSString;

@interface FinderLiveGetShopShelfResponse_ShopWindowProfileInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *guaranteeIconUrl; // @dynamic guaranteeIconUrl;
@property(retain, nonatomic) NSString *guaranteeWording; // @dynamic guaranteeWording;
@property(nonatomic) unsigned int hasGuaranteeInfo; // @dynamic hasGuaranteeInfo;
@property(nonatomic) unsigned int hasReputationInfo; // @dynamic hasReputationInfo;
@property(retain, nonatomic) FinderLiveGetShopShelfResponse_ShopWindowProfileInfo_LiteAppJumpInfo *jumpLiteappInfo; // @dynamic jumpLiteappInfo;
@property(retain, nonatomic) FinderWxAppInfo *jumpWxaInfo; // @dynamic jumpWxaInfo;
@property(retain, nonatomic) NSString *profileJumpDescriptionWording; // @dynamic profileJumpDescriptionWording;
@property(nonatomic) unsigned int profileJumpType; // @dynamic profileJumpType;
@property(retain, nonatomic) NSMutableArray *profilePropertyImgs; // @dynamic profilePropertyImgs;
@property(retain, nonatomic) FinderLiveGetShopShelfResponse_ShopWindowProfileInfo_ShopWindowRankInfo *rankInfo; // @dynamic rankInfo;
@property(retain, nonatomic) NSString *reputationBackgroundColor; // @dynamic reputationBackgroundColor;
@property(retain, nonatomic) NSString *reputationLevelWording; // @dynamic reputationLevelWording;
@property(nonatomic) unsigned int reputationScore; // @dynamic reputationScore;
@property(retain, nonatomic) NSString *reputationTextColor; // @dynamic reputationTextColor;
@property(retain, nonatomic) NSString *reputationWording; // @dynamic reputationWording;
@property(retain, nonatomic) FinderLiveGetShopShelfResponse_ShopWindowProfileInfo_ShopWindowSalesInfo *salesInfo; // @dynamic salesInfo;
@property(retain, nonatomic) FinderLiveGetShopShelfResponse_ShopWindowProfileInfo_ShopWindowScoreInfo *scoreInfo; // @dynamic scoreInfo;
@property(retain, nonatomic) NSString *shopWindowJumpTargetNickname; // @dynamic shopWindowJumpTargetNickname;
@property(retain, nonatomic) NSString *shopWindowProfileHeadimgUrl; // @dynamic shopWindowProfileHeadimgUrl;
@property(retain, nonatomic) NSString *shopWindowProfileName; // @dynamic shopWindowProfileName;
@property(nonatomic) unsigned int shopWindowStyleType; // @dynamic shopWindowStyleType;
@property(nonatomic) unsigned int shopWindowType; // @dynamic shopWindowType;

@end

