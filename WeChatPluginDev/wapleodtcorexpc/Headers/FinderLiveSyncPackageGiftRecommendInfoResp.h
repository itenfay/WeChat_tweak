//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSData, PackageGiftRecommendInfo;

@interface FinderLiveSyncPackageGiftRecommendInfoResp : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSData *ctx; // @dynamic ctx;
@property(retain, nonatomic) PackageGiftRecommendInfo *expireGiftRecommend; // @dynamic expireGiftRecommend;
@property(retain, nonatomic) PackageGiftRecommendInfo *newFreeGiftRecommend; // @dynamic newFreeGiftRecommend;
@property(retain, nonatomic) PackageGiftRecommendInfo *newGiftRecommend; // @dynamic newGiftRecommend;

@end

