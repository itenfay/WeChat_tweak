//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray, NSMutableDictionary, NSString;

@interface WCTogetherHistoryReportSession : NSObject
{
    _Bool _didShowBadge;
    _Bool _didClickFriendsInfo;
    unsigned int _sourceScene;
    NSMutableDictionary *_operationDictionary;
    NSString *_username;
    double _historyBrowsingAccumulatedTime;
    double _previewBrowsingAccumulatedTime;
    double _detailBrowsingAccumulatedTime;
    double _historyBrowsingBeginTime;
    double _previewBrowsingBeginTime;
    double _detailBrowsingBeginTime;
}

- (void).cxx_destruct;
@property(nonatomic) double detailBrowsingBeginTime; // @synthesize detailBrowsingBeginTime=_detailBrowsingBeginTime;
@property(nonatomic) double previewBrowsingBeginTime; // @synthesize previewBrowsingBeginTime=_previewBrowsingBeginTime;
@property(nonatomic) double historyBrowsingBeginTime; // @synthesize historyBrowsingBeginTime=_historyBrowsingBeginTime;
@property(nonatomic) _Bool didClickFriendsInfo; // @synthesize didClickFriendsInfo=_didClickFriendsInfo;
@property(nonatomic) double detailBrowsingAccumulatedTime; // @synthesize detailBrowsingAccumulatedTime=_detailBrowsingAccumulatedTime;
@property(nonatomic) double previewBrowsingAccumulatedTime; // @synthesize previewBrowsingAccumulatedTime=_previewBrowsingAccumulatedTime;
@property(nonatomic) double historyBrowsingAccumulatedTime; // @synthesize historyBrowsingAccumulatedTime=_historyBrowsingAccumulatedTime;
@property(nonatomic) _Bool didShowBadge; // @synthesize didShowBadge=_didShowBadge;
@property(nonatomic) unsigned int sourceScene; // @synthesize sourceScene=_sourceScene;
@property(readonly, copy, nonatomic) NSString *username; // @synthesize username=_username;
- (id)fixedLogValue:(id)arg1;
- (id)generateActionStringFromOperation:(id)arg1;
- (id)generateVisibleRangeString;
- (id)generateLogString;
- (void)endSessionAndReport;
- (void)didChangeTogetherWithDataItem:(id)arg1;
- (void)didCommentDataItem:(id)arg1;
- (void)didLikeDataItem:(id)arg1;
- (void)detailWillDisplayDataItem:(id)arg1;
- (void)detailWillDisappearWithDataItem:(id)arg1;
- (void)detailWillAppearWithDataItem:(id)arg1;
- (void)previewWillDisplayDataItem:(id)arg1;
- (void)previewWillDisappearWithDataItem:(id)arg1;
- (void)previewWillAppearWithDataItem:(id)arg1;
- (void)historyDidEndDisplayingDataItem:(id)arg1;
- (void)historyWillDisplayDataItem:(id)arg1;
- (void)historyWillDisappear;
- (void)historyWillAppear;
@property(readonly, copy, nonatomic) NSArray *displayedDataItemIDs;
@property(readonly, copy, nonatomic) NSArray *displayedDataItems;
- (id)getOrCreateOperationWithDataItem:(id)arg1;
@property(readonly, nonatomic) NSMutableDictionary *operationDictionary; // @synthesize operationDictionary=_operationDictionary;
- (id)initWithUsername:(id)arg1;

@end

