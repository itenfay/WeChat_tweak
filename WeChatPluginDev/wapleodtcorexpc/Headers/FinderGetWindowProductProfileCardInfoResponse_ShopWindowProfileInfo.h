//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class FinderGetWindowProductProfileCardInfoResponse_ReputationInfo, FinderJumpInfo_LiteApp, FinderWxAppInfo, NSString;

@interface FinderGetWindowProductProfileCardInfoResponse_ShopWindowProfileInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *backgroundUrl; // @dynamic backgroundUrl;
@property(retain, nonatomic) NSString *brandIconUrl; // @dynamic brandIconUrl;
@property(retain, nonatomic) NSString *description; // @dynamic description;
@property(retain, nonatomic) NSString *finderSaleWording; // @dynamic finderSaleWording;
@property(retain, nonatomic) NSString *finderSaleWordingExt; // @dynamic finderSaleWordingExt;
@property(retain, nonatomic) NSString *headImg; // @dynamic headImg;
@property(retain, nonatomic) NSString *iconUrl; // @dynamic iconUrl;
@property(nonatomic) _Bool isWxShop; // @dynamic isWxShop;
@property(retain, nonatomic) FinderJumpInfo_LiteApp *jumpLiteappInfo; // @dynamic jumpLiteappInfo;
@property(retain, nonatomic) FinderWxAppInfo *jumpWxaInfo; // @dynamic jumpWxaInfo;
@property(retain, nonatomic) NSString *platformIconUrl; // @dynamic platformIconUrl;
@property(retain, nonatomic) NSString *platformIconUrlDarkmode; // @dynamic platformIconUrlDarkmode;
@property(nonatomic) unsigned int profileJumpType; // @dynamic profileJumpType;
@property(retain, nonatomic) NSString *profileTypeWording; // @dynamic profileTypeWording;
@property(retain, nonatomic) FinderGetWindowProductProfileCardInfoResponse_ReputationInfo *reputationInfo; // @dynamic reputationInfo;
@property(retain, nonatomic) NSString *shopWindowProfileName; // @dynamic shopWindowProfileName;

@end

