//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class WCFinderLiveBaseLogReporter;

@interface MMLiveMoreFunctionManager
{
    _Bool _isConnectMicEnabled;
    WCFinderLiveBaseLogReporter *_reporter;
}

+ (_Bool)isHiddenAudienceNameEnable:(id)arg1;
+ (_Bool)isLikeAnchorOrAssistantEntrenceEnable:(id)arg1;
+ (unsigned int)anchorSwitchFlag:(id)arg1;
+ (_Bool)isRewardAnchorOrAssistantEntrenceEnable:(id)arg1;
+ (_Bool)shouldShowAnchorTaskGuide:(id)arg1 liveTaskId:(id)arg2;
+ (void)setSubPath:(id)arg1 liveTaskId:(id)arg2;
+ (id)getMoreFunctionItemsWithTaskId:(id)arg1 viewType:(unsigned long long)arg2 isGameLive:(_Bool)arg3;
- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderLiveBaseLogReporter *reporter; // @synthesize reporter=_reporter;
@property(readonly, nonatomic) _Bool isConnectMicEnabled; // @synthesize isConnectMicEnabled=_isConnectMicEnabled;
- (void)onReportOperationViewDidSelect:(unsigned long long)arg1 item:(id)arg2;
- (void)reportAnchorActionSheetItems:(id)arg1;
- (_Bool)isCommentAssistantEnable;
- (id)liveTask;
- (id)createData:(unsigned long long)arg1;

@end

