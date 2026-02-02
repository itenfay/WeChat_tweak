//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class MMListenAudioAlignment, MMListenFinderScaleInfo, NSData, NSString;

@interface MMListenFinderInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *albumCategoryId; // @dynamic albumCategoryId;
@property(retain, nonatomic) MMListenAudioAlignment *audioAlign; // @dynamic audioAlign;
@property(nonatomic) int audioStatus; // @dynamic audioStatus;
@property(retain, nonatomic) NSString *author; // @dynamic author;
@property(retain, nonatomic) NSString *authorUsername; // @dynamic authorUsername;
@property(retain, nonatomic) NSString *cover; // @dynamic cover;
@property(nonatomic) unsigned long long createTime; // @dynamic createTime;
@property(retain, nonatomic) NSString *descDetail; // @dynamic descDetail;
@property(retain, nonatomic) NSString *descTitle; // @dynamic descTitle;
@property(nonatomic) int duration; // @dynamic duration;
@property(retain, nonatomic) NSString *exportId; // @dynamic exportId;
@property(nonatomic) unsigned long long finderUin; // @dynamic finderUin;
@property(retain, nonatomic) NSData *fromSessionIdInfo; // @dynamic fromSessionIdInfo;
@property(retain, nonatomic) NSString *fullCoverUrl; // @dynamic fullCoverUrl;
@property(retain, nonatomic) NSString *headImg; // @dynamic headImg;
@property(nonatomic) float height; // @dynamic height;
@property(nonatomic) unsigned int importFlag; // @dynamic importFlag;
@property(nonatomic) _Bool isPlayable; // @dynamic isPlayable;
@property(nonatomic) int mediaType; // @dynamic mediaType;
@property(retain, nonatomic) NSString *nonceId; // @dynamic nonceId;
@property(retain, nonatomic) MMListenFinderScaleInfo *scaleInfo; // @dynamic scaleInfo;
@property(retain, nonatomic) NSString *tid; // @dynamic tid;
@property(retain, nonatomic) NSString *title; // @dynamic title;
@property(nonatomic) float width; // @dynamic width;

@end

