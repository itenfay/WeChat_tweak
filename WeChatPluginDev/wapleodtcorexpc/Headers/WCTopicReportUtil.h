//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, WCTopicReportSessionInputItem;

@interface WCTopicReportUtil
{
    WCTopicReportSessionInputItem *_reportSessionInputItem;
    NSString *_timelineTopicActionSessionId;
}

+ (void)reportWCFeedTopicInputAction:(long long)arg1 reportItem:(id)arg2;
+ (id)topicReportFeedItemWithDataItem:(id)arg1;
+ (void)reportTopicTipClick:(id)arg1;
+ (void)reportTopicTagClick:(id)arg1 reportItem:(id)arg2;
+ (void)reportTopicSearchShareAction:(long long)arg1 resultType:(long long)arg2 query:(id)arg3 reportItem:(id)arg4;
+ (void)reportTopicSearchVCAction:(long long)arg1 actionSourceType:(long long)arg2 dismissReason:(long long)arg3 reportItem:(id)arg4;
+ (void)reportTopicSearchVCAction:(long long)arg1 actionSourceType:(long long)arg2 reportItem:(id)arg3;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *timelineTopicActionSessionId; // @synthesize timelineTopicActionSessionId=_timelineTopicActionSessionId;
@property(readonly, nonatomic) WCTopicReportSessionInputItem *reportSessionInputItem; // @synthesize reportSessionInputItem=_reportSessionInputItem;
- (void)reportWCFeedCommentSendFinish:(id)arg1 comment:(id)arg2;
- (void)onAdvertiseCommentReturn:(id)arg1 comment:(id)arg2;
- (void)onCommentReturn:(id)arg1 comment:(id)arg2;
- (void)onSnsNewCommitFinished:(id)arg1 task:(id)arg2;
- (id)requestWCTopicActionSessionId;
- (void)genNewWCTopicActionSessionIdWithPrefix:(id)arg1;
- (void)genNewWCTopicActionSessionId;
- (id)genKvReportItem21174;
- (void)reportCurrentSessionInputItem;
- (void)resetData;
- (void)onServiceClearData;
- (void)onServiceInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

