//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class FinderEventInfo, FinderMusicTopicInfo, FinderTopicBgmInfo, FinderTopicHashTagInfo, FinderWordsTopicExtInfo, NSString;

@interface WCFinderTopicInfo : NSObject
{
    int _topicType;
    NSString *_topic;
    NSString *_topicIdStr;
    unsigned long long _topicId;
    unsigned long long _feedCount;
    NSString *_headUrl;
    unsigned long long _onlineViewed;
    NSString *_topicNonceId;
    unsigned long long _followFlag;
    FinderTopicHashTagInfo *_hashTagInfo;
    FinderTopicBgmInfo *_bgmInfo;
    FinderEventInfo *_eventInfo;
    unsigned long long _readCount;
    FinderMusicTopicInfo *_musicTopicInfo;
    FinderWordsTopicExtInfo *_wordsTopicExt;
    unsigned long long _photoFeedCount;
    unsigned long long _videoFeedCount;
}

+ (id)topicInfoArrayFromPBInfoArray:(id)arg1;
+ (id)topicInfoWithFinderTopicInfo:(id)arg1;
+ (void)initialize;
+ (void)PBArrayAdd_videoFeedCount;
+ (void)PBArrayAdd_photoFeedCount;
+ (void)PBArrayAdd_onlineViewed;
+ (void)PBArrayAdd_headUrl;
+ (void)PBArrayAdd_readCount;
+ (void)PBArrayAdd_followFlag;
+ (void)PBArrayAdd_topicType;
+ (void)PBArrayAdd_topicNonceId;
+ (void)PBArrayAdd_feedCount;
+ (void)PBArrayAdd_topicId;
+ (void)PBArrayAdd_topicIdStr;
+ (void)PBArrayAdd_topic;
+ (void)__wcdb_column_constraint_12:(void *)arg1;
+ (id)swift_videoFeedCount;
+ (const void *)__wcdb_synthesize_11:(void *)arg1;
+ (const void *)videoFeedCount;
+ (id)swift_photoFeedCount;
+ (const void *)__wcdb_synthesize_10:(void *)arg1;
+ (const void *)photoFeedCount;
+ (id)swift_onlineViewed;
+ (const void *)__wcdb_synthesize_9:(void *)arg1;
+ (const void *)onlineViewed;
+ (id)swift_headUrl;
+ (const void *)__wcdb_synthesize_8:(void *)arg1;
+ (const void *)headUrl;
+ (id)swift_readCount;
+ (const void *)__wcdb_synthesize_7:(void *)arg1;
+ (const void *)readCount;
+ (id)swift_followFlag;
+ (const void *)__wcdb_synthesize_6:(void *)arg1;
+ (const void *)followFlag;
+ (id)swift_topicType;
+ (const void *)__wcdb_synthesize_5:(void *)arg1;
+ (const void *)topicType;
+ (id)swift_topicNonceId;
+ (const void *)__wcdb_synthesize_4:(void *)arg1;
+ (const void *)topicNonceId;
+ (id)swift_feedCount;
+ (const void *)__wcdb_synthesize_3:(void *)arg1;
+ (const void *)feedCount;
+ (id)swift_topicId;
+ (const void *)__wcdb_synthesize_2:(void *)arg1;
+ (const void *)topicId;
+ (id)swift_topicIdStr;
+ (const void *)__wcdb_synthesize_1:(void *)arg1;
+ (const void *)topicIdStr;
+ (id)swift_topic;
+ (const void *)__wcdb_synthesize_0:(void *)arg1;
+ (const void *)topic;
+ (id)__wcdbtyper;
+ (id)allBridgeProperties;
+ (const void *)allProperties;
+ (const void *)objectRelationalMapping;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long videoFeedCount; // @synthesize videoFeedCount=_videoFeedCount;
@property(nonatomic) unsigned long long photoFeedCount; // @synthesize photoFeedCount=_photoFeedCount;
@property(retain, nonatomic) FinderWordsTopicExtInfo *wordsTopicExt; // @synthesize wordsTopicExt=_wordsTopicExt;
@property(retain, nonatomic) FinderMusicTopicInfo *musicTopicInfo; // @synthesize musicTopicInfo=_musicTopicInfo;
@property(nonatomic) unsigned long long readCount; // @synthesize readCount=_readCount;
@property(readonly, nonatomic) FinderEventInfo *eventInfo; // @synthesize eventInfo=_eventInfo;
@property(retain, nonatomic) FinderTopicBgmInfo *bgmInfo; // @synthesize bgmInfo=_bgmInfo;
@property(retain, nonatomic) FinderTopicHashTagInfo *hashTagInfo; // @synthesize hashTagInfo=_hashTagInfo;
@property(nonatomic) unsigned long long followFlag; // @synthesize followFlag=_followFlag;
@property(nonatomic) int topicType; // @synthesize topicType=_topicType;
@property(copy, nonatomic) NSString *topicNonceId; // @synthesize topicNonceId=_topicNonceId;
@property(nonatomic) unsigned long long onlineViewed; // @synthesize onlineViewed=_onlineViewed;
@property(copy, nonatomic) NSString *headUrl; // @synthesize headUrl=_headUrl;
@property(nonatomic) unsigned long long feedCount; // @synthesize feedCount=_feedCount;
@property(nonatomic) unsigned long long topicId; // @synthesize topicId=_topicId;
@property(copy, nonatomic) NSString *topicIdStr; // @synthesize topicIdStr=_topicIdStr;
@property(copy, nonatomic) NSString *topic; // @synthesize topic=_topic;
- (id)getEventCreaterUsername;
- (_Bool)isFollowed;
@property(readonly, copy) NSString *description;
- (id)initWithStoreInfo:(id)arg1;
- (id)initWithParams:(id)arg1;
- (id)initWithFinderTopicInfo:(id)arg1;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(nonatomic) _Bool isAutoIncrement;
// Preceding property had unknown attributes: ?
// Original attribute string: TB,?,N

@property(nonatomic) long long lastInsertedRowID;
// Preceding property had unknown attributes: ?
// Original attribute string: Tq,?,N

@property(readonly) Class superclass;

@end

