//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class FinderJumpInfo, FinderLiveGetShopShelfResponse_ShopWindowProfileInfo_ImgInfo, NSString;

@interface FinderLiveGetShopShelfResponse_ShopWindowProfileInfo_ShopWindowRankInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) FinderJumpInfo *clickOpenPage; // @dynamic clickOpenPage;
@property(retain, nonatomic) FinderLiveGetShopShelfResponse_ShopWindowProfileInfo_ImgInfo *headRankImg; // @dynamic headRankImg;
@property(retain, nonatomic) NSString *rankHintWording; // @dynamic rankHintWording;
@property(nonatomic) unsigned int showRankFlag; // @dynamic showRankFlag;

@end

