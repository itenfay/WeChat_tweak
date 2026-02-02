//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class FinderGetRelatedEntranceInfo, NSData, NSNumber, NSString, StreamTabTipsInfo, WCFinderCategoryInfo, WCFinderLocationInfo, WCFinderSectionInfo, WCFinderShareListReportModel;

@interface WCFinderGetRelatedListParams : NSObject
{
    int _prefetchType;
    int _scene;
    int _viewScene;
    NSData *_lastBuff;
    NSString *_tid;
    NSString *_nonceId;
    NSString *_recommendReason;
    WCFinderLocationInfo *_location;
    unsigned long long _tabType;
    WCFinderSectionInfo *_sectionInfo;
    WCFinderCategoryInfo *_categoryRecommend;
    NSData *_streamLastBuffer;
    WCFinderShareListReportModel *_cgiParams;
    FinderGetRelatedEntranceInfo *_relatedEntranceInfo;
    NSString *_fromSessionId;
    NSString *_encrytedObjectidTid;
    NSNumber *_pullType;
    StreamTabTipsInfo *_tabTipsInfo;
    NSData *_collectionBypassData;
    unsigned long long _relatedFlag;
    NSData *_relatedlistLastBuffer;
    NSString *_shareMsgSource;
    NSString *_shareMsgSvrID;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *shareMsgSvrID; // @synthesize shareMsgSvrID=_shareMsgSvrID;
@property(copy, nonatomic) NSString *shareMsgSource; // @synthesize shareMsgSource=_shareMsgSource;
@property(retain, nonatomic) NSData *relatedlistLastBuffer; // @synthesize relatedlistLastBuffer=_relatedlistLastBuffer;
@property(nonatomic) unsigned long long relatedFlag; // @synthesize relatedFlag=_relatedFlag;
@property(retain, nonatomic) NSData *collectionBypassData; // @synthesize collectionBypassData=_collectionBypassData;
@property(retain, nonatomic) StreamTabTipsInfo *tabTipsInfo; // @synthesize tabTipsInfo=_tabTipsInfo;
@property(retain, nonatomic) NSNumber *pullType; // @synthesize pullType=_pullType;
@property(retain, nonatomic) NSString *encrytedObjectidTid; // @synthesize encrytedObjectidTid=_encrytedObjectidTid;
@property(retain, nonatomic) NSString *fromSessionId; // @synthesize fromSessionId=_fromSessionId;
@property(retain, nonatomic) FinderGetRelatedEntranceInfo *relatedEntranceInfo; // @synthesize relatedEntranceInfo=_relatedEntranceInfo;
@property(retain, nonatomic) WCFinderShareListReportModel *cgiParams; // @synthesize cgiParams=_cgiParams;
@property(nonatomic) int viewScene; // @synthesize viewScene=_viewScene;
@property(retain, nonatomic) NSData *streamLastBuffer; // @synthesize streamLastBuffer=_streamLastBuffer;
@property(retain, nonatomic) WCFinderCategoryInfo *categoryRecommend; // @synthesize categoryRecommend=_categoryRecommend;
@property(retain, nonatomic) WCFinderSectionInfo *sectionInfo; // @synthesize sectionInfo=_sectionInfo;
@property(nonatomic) int scene; // @synthesize scene=_scene;
@property(nonatomic) unsigned long long tabType; // @synthesize tabType=_tabType;
@property(retain, nonatomic) WCFinderLocationInfo *location; // @synthesize location=_location;
@property(retain, nonatomic) NSString *recommendReason; // @synthesize recommendReason=_recommendReason;
@property(retain, nonatomic) NSString *nonceId; // @synthesize nonceId=_nonceId;
@property(retain, nonatomic) NSString *tid; // @synthesize tid=_tid;
@property(nonatomic) int prefetchType; // @synthesize prefetchType=_prefetchType;
@property(retain, nonatomic) NSData *lastBuff; // @synthesize lastBuff=_lastBuff;
- (void)fromRequest:(id)arg1;
- (id)getRoomStateWithAvgSpeed:(unsigned int)arg1;
- (id)intoRequest;
- (id)yymodelCopy;

@end

