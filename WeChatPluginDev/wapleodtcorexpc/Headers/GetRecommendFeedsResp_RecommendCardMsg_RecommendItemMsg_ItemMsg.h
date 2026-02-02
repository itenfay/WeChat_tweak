//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class GetRecommendFeedsResp_RecommendCardMsg_RecommendItemMsg_ItemMsg_PictureMsg, GetRecommendFeedsResp_RecommendCardMsg_RecommendItemMsg_ItemMsg_VideoMsg, GetRecommendFeedsResp_RecommendCardMsg_RecommendItemMsg_ItemMsg_VoiceMsg, NSString;

@interface GetRecommendFeedsResp_RecommendCardMsg_RecommendItemMsg_ItemMsg : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *contentUrl; // @dynamic contentUrl;
@property(retain, nonatomic) NSString *coverImgUrl; // @dynamic coverImgUrl;
@property(retain, nonatomic) NSString *coverImgUrl11; // @dynamic coverImgUrl11;
@property(retain, nonatomic) NSString *coverImgUrl2351; // @dynamic coverImgUrl2351;
@property(nonatomic) unsigned int createTime; // @dynamic createTime;
@property(retain, nonatomic) NSString *digest; // @dynamic digest;
@property(nonatomic) unsigned int itemShowType; // @dynamic itemShowType;
@property(retain, nonatomic) GetRecommendFeedsResp_RecommendCardMsg_RecommendItemMsg_ItemMsg_PictureMsg *pictureInfo; // @dynamic pictureInfo;
@property(retain, nonatomic) NSString *title; // @dynamic title;
@property(retain, nonatomic) GetRecommendFeedsResp_RecommendCardMsg_RecommendItemMsg_ItemMsg_VideoMsg *videoInfo; // @dynamic videoInfo;
@property(retain, nonatomic) GetRecommendFeedsResp_RecommendCardMsg_RecommendItemMsg_ItemMsg_VoiceMsg *voiceInfo; // @dynamic voiceInfo;

@end

