//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class FinderEventInfo, FinderMusicInfo, FinderMusicMVTopicInfo, FinderMusicTopicInfo, FinderNewLifeTopicInfo, FinderTemplateInfo, FinderTopicBgmInfo, FinderTopicHashTagInfo, FinderVideoTemplateTopicInfo, FinderWordsTopicExtInfo, NSString;

@interface FinderTopicInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned int canFollow; // @dynamic canFollow;
@property(retain, nonatomic) NSString *coverUrl; // @dynamic coverUrl;
@property(nonatomic) unsigned int disabledFlag; // @dynamic disabledFlag;
@property(nonatomic) unsigned int displayId; // @dynamic displayId;
@property(retain, nonatomic) FinderEventInfo *event; // @dynamic event;
@property(nonatomic) unsigned int feedCount; // @dynamic feedCount;
@property(nonatomic) unsigned int feedFollowPermissionFlag; // @dynamic feedFollowPermissionFlag;
@property(retain, nonatomic) FinderTopicBgmInfo *followFeedInfo; // @dynamic followFeedInfo;
@property(nonatomic) unsigned int followFlag; // @dynamic followFlag;
@property(nonatomic) unsigned int friendFollowCount; // @dynamic friendFollowCount;
@property(retain, nonatomic) FinderTopicHashTagInfo *hashTagInfo; // @dynamic hashTagInfo;
@property(retain, nonatomic) NSString *headUrl; // @dynamic headUrl;
@property(retain, nonatomic) FinderMusicInfo *musicInfo; // @dynamic musicInfo;
@property(retain, nonatomic) FinderMusicMVTopicInfo *musicMvTopic; // @dynamic musicMvTopic;
@property(retain, nonatomic) FinderMusicTopicInfo *musicTopic; // @dynamic musicTopic;
@property(retain, nonatomic) FinderNewLifeTopicInfo *newlifeTopic; // @dynamic newlifeTopic;
@property(nonatomic) unsigned int onlineViewed; // @dynamic onlineViewed;
@property(nonatomic) unsigned int readCount; // @dynamic readCount;
@property(retain, nonatomic) FinderTemplateInfo *tmplInfo; // @dynamic tmplInfo;
@property(retain, nonatomic) NSString *topic; // @dynamic topic;
@property(nonatomic) unsigned long long topicId; // @dynamic topicId;
@property(retain, nonatomic) NSString *topicNonceId; // @dynamic topicNonceId;
@property(nonatomic) unsigned int topicType; // @dynamic topicType;
@property(nonatomic) unsigned int videoFeedCount; // @dynamic videoFeedCount;
@property(retain, nonatomic) FinderVideoTemplateTopicInfo *videoTemplate; // @dynamic videoTemplate;
@property(retain, nonatomic) FinderWordsTopicExtInfo *wordsTopicExt; // @dynamic wordsTopicExt;

@end

