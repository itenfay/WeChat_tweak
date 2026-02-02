//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class FinderClientStatus, FinderNextObjectInfo, NSData, NSString, WCFinderSectionInfo, WCFinderTopicInfo;

@interface WCFinderTopicListParamsModel : NSObject
{
    int _topicType;
    int _tabType;
    int _innerTabType;
    int _fromType;
    int _commentScene;
    int _rollDirection;
    int _mediaTabType;
    int _prefetchType;
    NSString *_topicStr;
    NSData *_lastBuffer;
    NSString *_latitude;
    NSString *_longitude;
    NSString *_refObjectid;
    WCFinderTopicInfo *_poiTopicRecommend;
    WCFinderSectionInfo *_sectionInfo;
    FinderClientStatus *_clientStatus;
    unsigned long long _topicId;
    NSData *_topicBuffer;
    NSString *_encryptedTopicID;
    NSData *_byPassInfo;
    NSString *_finderUsername;
    FinderNextObjectInfo *_nextObjectInfo;
}

+ (id)genFetchTabDataArrayByTopicType:(int)arg1 refObjectid:(id)arg2 innerTabType:(int)arg3 topicId:(unsigned long long)arg4 commentScene:(int)arg5 encryptedTopicID:(id)arg6 byPassInfo:(id)arg7 rollDirection:(int)arg8 lastBuffer:(id)arg9;
- (void).cxx_destruct;
@property(retain, nonatomic) FinderNextObjectInfo *nextObjectInfo; // @synthesize nextObjectInfo=_nextObjectInfo;
@property(nonatomic) int prefetchType; // @synthesize prefetchType=_prefetchType;
@property(nonatomic) int mediaTabType; // @synthesize mediaTabType=_mediaTabType;
@property(copy, nonatomic) NSString *finderUsername; // @synthesize finderUsername=_finderUsername;
@property(nonatomic) int rollDirection; // @synthesize rollDirection=_rollDirection;
@property(retain, nonatomic) NSData *byPassInfo; // @synthesize byPassInfo=_byPassInfo;
@property(nonatomic) int commentScene; // @synthesize commentScene=_commentScene;
@property(copy, nonatomic) NSString *encryptedTopicID; // @synthesize encryptedTopicID=_encryptedTopicID;
@property(retain, nonatomic) NSData *topicBuffer; // @synthesize topicBuffer=_topicBuffer;
@property(nonatomic) unsigned long long topicId; // @synthesize topicId=_topicId;
@property(retain, nonatomic) FinderClientStatus *clientStatus; // @synthesize clientStatus=_clientStatus;
@property(retain, nonatomic) WCFinderSectionInfo *sectionInfo; // @synthesize sectionInfo=_sectionInfo;
@property(retain, nonatomic) WCFinderTopicInfo *poiTopicRecommend; // @synthesize poiTopicRecommend=_poiTopicRecommend;
@property(nonatomic) int fromType; // @synthesize fromType=_fromType;
@property(nonatomic) int innerTabType; // @synthesize innerTabType=_innerTabType;
@property(nonatomic) int tabType; // @synthesize tabType=_tabType;
@property(copy, nonatomic) NSString *refObjectid; // @synthesize refObjectid=_refObjectid;
@property(copy, nonatomic) NSString *longitude; // @synthesize longitude=_longitude;
@property(copy, nonatomic) NSString *latitude; // @synthesize latitude=_latitude;
@property(retain, nonatomic) NSData *lastBuffer; // @synthesize lastBuffer=_lastBuffer;
@property(copy, nonatomic) NSString *topicStr; // @synthesize topicStr=_topicStr;
@property(nonatomic) int topicType; // @synthesize topicType=_topicType;
- (id)printErrMsg;

@end

