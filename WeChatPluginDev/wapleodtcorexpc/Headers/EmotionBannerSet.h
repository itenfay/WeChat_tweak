//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class EmotionBannerImg, EmotionBannerSetJumpInfo, NSString;

@interface EmotionBannerSet : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) EmotionBannerImg *bannerImg; // @dynamic bannerImg;
@property(retain, nonatomic) NSString *desc; // @dynamic desc;
@property(retain, nonatomic) EmotionBannerSetJumpInfo *emotionBannerSetJumpInfo; // @dynamic emotionBannerSetJumpInfo;
@property(retain, nonatomic) NSString *iconUrl; // @dynamic iconUrl;
@property(nonatomic) unsigned int id; // @dynamic id;
@property(retain, nonatomic) NSString *locateUrl; // @dynamic locateUrl;
@property(retain, nonatomic) NSString *productId; // @dynamic productId;
@property(retain, nonatomic) NSString *secondUrl; // @dynamic secondUrl;
@property(retain, nonatomic) NSString *setKey; // @dynamic setKey;
@property(nonatomic) unsigned int setType; // @dynamic setType;
@property(retain, nonatomic) NSString *tagUrl; // @dynamic tagUrl;
@property(retain, nonatomic) NSString *title; // @dynamic title;

@end

