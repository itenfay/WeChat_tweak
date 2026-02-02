//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableArray, NSString;

@interface WCTimelineMissReadBreakLayerExposureRecord
{
    _Bool _isGenNewBreakLayer;
    unsigned int _exposureCount;
    unsigned int _clickCount;
    unsigned int _jumpBtnClickType;
    unsigned int _missReadJumpBtnFirstExposureTime;
    unsigned int _preCreateBreakLayerFeedCnt;
    unsigned int _preCreateBreakLayerWsFeedCnt;
    NSString *_sessionId;
    NSMutableArray *_newerFeedIds;
    NSMutableArray *_exposureFeedIds;
    unsigned long long _missReadRecordCount;
    unsigned long long _jumpableMissReadRecordCount;
    unsigned long long _jumpBtnRefItemID;
    unsigned long long _jumpBtnId;
    unsigned long long _jumpBreakLayerFeedCount;
    unsigned long long _jumpBreakLayerWeishangFeedCount;
    NSMutableArray *_jumpBreakLayerFeedIds;
    unsigned long long _jumpBreakLayerdId;
    unsigned long long _newBreakLayerID;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int preCreateBreakLayerWsFeedCnt; // @synthesize preCreateBreakLayerWsFeedCnt=_preCreateBreakLayerWsFeedCnt;
@property(nonatomic) unsigned int preCreateBreakLayerFeedCnt; // @synthesize preCreateBreakLayerFeedCnt=_preCreateBreakLayerFeedCnt;
@property(nonatomic) unsigned long long newBreakLayerID; // @synthesize newBreakLayerID=_newBreakLayerID;
@property(nonatomic) _Bool isGenNewBreakLayer; // @synthesize isGenNewBreakLayer=_isGenNewBreakLayer;
@property(nonatomic) unsigned long long jumpBreakLayerdId; // @synthesize jumpBreakLayerdId=_jumpBreakLayerdId;
@property(retain, nonatomic) NSMutableArray *jumpBreakLayerFeedIds; // @synthesize jumpBreakLayerFeedIds=_jumpBreakLayerFeedIds;
@property(nonatomic) unsigned long long jumpBreakLayerWeishangFeedCount; // @synthesize jumpBreakLayerWeishangFeedCount=_jumpBreakLayerWeishangFeedCount;
@property(nonatomic) unsigned long long jumpBreakLayerFeedCount; // @synthesize jumpBreakLayerFeedCount=_jumpBreakLayerFeedCount;
@property(nonatomic) unsigned int missReadJumpBtnFirstExposureTime; // @synthesize missReadJumpBtnFirstExposureTime=_missReadJumpBtnFirstExposureTime;
@property(nonatomic) unsigned int jumpBtnClickType; // @synthesize jumpBtnClickType=_jumpBtnClickType;
@property(nonatomic) unsigned long long jumpBtnId; // @synthesize jumpBtnId=_jumpBtnId;
@property(nonatomic) unsigned long long jumpBtnRefItemID; // @synthesize jumpBtnRefItemID=_jumpBtnRefItemID;
@property(nonatomic) unsigned int clickCount; // @synthesize clickCount=_clickCount;
@property(nonatomic) unsigned int exposureCount; // @synthesize exposureCount=_exposureCount;
@property(nonatomic) unsigned long long jumpableMissReadRecordCount; // @synthesize jumpableMissReadRecordCount=_jumpableMissReadRecordCount;
@property(nonatomic) unsigned long long missReadRecordCount; // @synthesize missReadRecordCount=_missReadRecordCount;
@property(retain, nonatomic) NSMutableArray *exposureFeedIds; // @synthesize exposureFeedIds=_exposureFeedIds;
@property(retain, nonatomic) NSMutableArray *newerFeedIds; // @synthesize newerFeedIds=_newerFeedIds;
@property(retain, nonatomic) NSString *sessionId; // @synthesize sessionId=_sessionId;

@end

