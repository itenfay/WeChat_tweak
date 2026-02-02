//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class MMListenUserInfo, NSString;

@interface MMListenRecommendInfo_ReviewInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *categoryId; // @dynamic categoryId;
@property(retain, nonatomic) NSString *desc; // @dynamic desc;
@property(nonatomic) _Bool enableAddReview; // @dynamic enableAddReview;
@property(nonatomic) _Bool isMine; // @dynamic isMine;
@property(nonatomic) _Bool isThumbUp; // @dynamic isThumbUp;
@property(nonatomic) unsigned long long thumbUpCount; // @dynamic thumbUpCount;
@property(nonatomic) int type; // @dynamic type;
@property(retain, nonatomic) MMListenUserInfo *userInfo; // @dynamic userInfo;
@property(nonatomic) unsigned long long voiceDuration; // @dynamic voiceDuration;
@property(nonatomic) unsigned int voiceRecordVolume; // @dynamic voiceRecordVolume;
@property(retain, nonatomic) NSString *voiceUrl; // @dynamic voiceUrl;

@end

