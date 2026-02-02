//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSString;

@interface MMListenUpdateAlbumRequest_Task : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *albumListenId; // @dynamic albumListenId;
@property(retain, nonatomic) NSString *author; // @dynamic author;
@property(retain, nonatomic) NSString *categoryId; // @dynamic categoryId;
@property(nonatomic) unsigned int collabId; // @dynamic collabId;
@property(retain, nonatomic) NSString *cover; // @dynamic cover;
@property(retain, nonatomic) NSString *desc; // @dynamic desc;
@property(retain, nonatomic) NSString *finderUsername; // @dynamic finderUsername;
@property(retain, nonatomic) NSString *headImg; // @dynamic headImg;
@property(nonatomic) _Bool isAutoReplaceMv; // @dynamic isAutoReplaceMv;
@property(nonatomic) _Bool isFinderUpload; // @dynamic isFinderUpload;
@property(nonatomic) _Bool isPublic; // @dynamic isPublic;
@property(retain, nonatomic) NSString *listenId; // @dynamic listenId;
@property(retain, nonatomic) NSString *name; // @dynamic name;
@property(nonatomic) int offset; // @dynamic offset;
@property(retain, nonatomic) NSString *recommendCover; // @dynamic recommendCover;
@property(retain, nonatomic) NSString *reviewCategoryId; // @dynamic reviewCategoryId;
@property(nonatomic) unsigned int reviewCreatorType; // @dynamic reviewCreatorType;
@property(retain, nonatomic) NSString *reviewFinderUsername; // @dynamic reviewFinderUsername;
@property(nonatomic) unsigned int reviewType; // @dynamic reviewType;
@property(nonatomic) unsigned long long singerFinderUin; // @dynamic singerFinderUin;
@property(nonatomic) unsigned long long singerId; // @dynamic singerId;
@property(retain, nonatomic) NSString *songDesc; // @dynamic songDesc;
@property(nonatomic) int sourceType; // @dynamic sourceType;
@property(retain, nonatomic) NSString *subCategoryId; // @dynamic subCategoryId;
@property(nonatomic) int type; // @dynamic type;
@property(nonatomic) int verifyStatus; // @dynamic verifyStatus;
@property(nonatomic) unsigned int voiceReviewDuration; // @dynamic voiceReviewDuration;
@property(nonatomic) unsigned int voiceReviewRecordVolume; // @dynamic voiceReviewRecordVolume;
@property(retain, nonatomic) NSString *voiceReviewUrl; // @dynamic voiceReviewUrl;

@end

