//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSData, NSMutableArray, NSString, StatusEmoji, StatusLocation, StatusTopicInfo;

@interface StatusExtInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;
+ (id)modelPropertyBlacklistForConfigTag:(id)arg1;

// Remaining properties
@property(retain, nonatomic) NSString *activityToken; // @dynamic activityToken;
@property(retain, nonatomic) NSString *backgroundId; // @dynamic backgroundId;
@property(retain, nonatomic) NSMutableArray *blackContactLabelIds; // @dynamic blackContactLabelIds;
@property(retain, nonatomic) NSMutableArray *blackContactUsernames; // @dynamic blackContactUsernames;
@property(retain, nonatomic) NSString *city; // @dynamic city;
@property(retain, nonatomic) NSString *clientMsgId; // @dynamic clientMsgId;
@property(nonatomic) unsigned int createTime; // @dynamic createTime;
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(retain, nonatomic) NSData *deprecatedBuffer; // @dynamic deprecatedBuffer;
@property(retain, nonatomic) NSString *description; // @dynamic description;
@property(retain, nonatomic) NSString *duplicateTextStatusId; // @dynamic duplicateTextStatusId;
@property(retain, nonatomic) NSString *duplicateUsername; // @dynamic duplicateUsername;
@property(retain, nonatomic) StatusEmoji *emoji; // @dynamic emoji;
@property(retain, nonatomic) StatusEmoji *emojiInfo; // @dynamic emojiInfo;
@property(nonatomic) unsigned long long enterScene; // @dynamic enterScene;
@property(nonatomic) unsigned int expireTime; // @dynamic expireTime;
@property(nonatomic) unsigned long long extOption; // @dynamic extOption;
@property(nonatomic) _Bool hasHb; // @dynamic hasHb;
@property(readonly) unsigned long long hash;
@property(nonatomic) double latitude; // @dynamic latitude;
@property(retain, nonatomic) StatusLocation *location; // @dynamic location;
@property(nonatomic) double longitude; // @dynamic longitude;
@property(retain, nonatomic) NSString *mediaAesKey; // @dynamic mediaAesKey;
@property(nonatomic) unsigned long long mediaDurationMs; // @dynamic mediaDurationMs;
@property(nonatomic) int mediaHeight; // @dynamic mediaHeight;
@property(retain, nonatomic) NSString *mediaThumbAesKey; // @dynamic mediaThumbAesKey;
@property(retain, nonatomic) NSString *mediaThumbUrl; // @dynamic mediaThumbUrl;
@property(nonatomic) unsigned int mediaType; // @dynamic mediaType;
@property(retain, nonatomic) NSString *mediaUrl; // @dynamic mediaUrl;
@property(nonatomic) int mediaWidth; // @dynamic mediaWidth;
@property(retain, nonatomic) NSMutableArray *medias; // @dynamic medias;
@property(nonatomic) unsigned int modifyCount; // @dynamic modifyCount;
@property(nonatomic) unsigned int modifyTime; // @dynamic modifyTime;
@property(retain, nonatomic) NSString *poiId; // @dynamic poiId;
@property(retain, nonatomic) NSString *poiName; // @dynamic poiName;
@property(nonatomic) unsigned int profileSeq; // @dynamic profileSeq;
@property(retain, nonatomic) NSString *referenceTextStatusId; // @dynamic referenceTextStatusId;
@property(retain, nonatomic) NSString *referenceUsername; // @dynamic referenceUsername;
@property(nonatomic) unsigned int sceneType; // @dynamic sceneType;
@property(nonatomic) unsigned int serverCreateTime; // @dynamic serverCreateTime;
@property(readonly) Class superclass;
@property(retain, nonatomic) NSString *text; // @dynamic text;
@property(retain, nonatomic) StatusTopicInfo *topicInfo; // @dynamic topicInfo;
@property(nonatomic) unsigned int visibility; // @dynamic visibility;

@end

