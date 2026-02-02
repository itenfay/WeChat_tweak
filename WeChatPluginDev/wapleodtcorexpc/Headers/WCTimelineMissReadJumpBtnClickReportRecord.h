//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSArray, NSMutableArray, NSString;

@interface WCTimelineMissReadJumpBtnClickReportRecord
{
    unsigned int _jumpBtnId;
    unsigned int _jumpSkipCount;
    unsigned int _jumpItemCreatTimeToNowInterval;
    NSString *_sessionId;
    unsigned long long _missReadRecordId;
    long long _isJumpToFirstMissReadRecord;
    NSArray *_missReadFeedIds;
    NSMutableArray *_exposureFeedIds;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int jumpItemCreatTimeToNowInterval; // @synthesize jumpItemCreatTimeToNowInterval=_jumpItemCreatTimeToNowInterval;
@property(retain, nonatomic) NSMutableArray *exposureFeedIds; // @synthesize exposureFeedIds=_exposureFeedIds;
@property(retain, nonatomic) NSArray *missReadFeedIds; // @synthesize missReadFeedIds=_missReadFeedIds;
@property(nonatomic) unsigned int jumpSkipCount; // @synthesize jumpSkipCount=_jumpSkipCount;
@property(nonatomic) long long isJumpToFirstMissReadRecord; // @synthesize isJumpToFirstMissReadRecord=_isJumpToFirstMissReadRecord;
@property(nonatomic) unsigned long long missReadRecordId; // @synthesize missReadRecordId=_missReadRecordId;
@property(nonatomic) unsigned int jumpBtnId; // @synthesize jumpBtnId=_jumpBtnId;
@property(retain, nonatomic) NSString *sessionId; // @synthesize sessionId=_sessionId;

@end

