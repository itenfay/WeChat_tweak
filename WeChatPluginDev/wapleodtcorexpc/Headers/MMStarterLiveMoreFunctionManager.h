//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class WCFinderLiveStarterReporter;

@interface MMStarterLiveMoreFunctionManager
{
    WCFinderLiveStarterReporter *_starterReporter;
}

+ (_Bool)isQuickReplyEnable:(id)arg1;
+ (_Bool)isCommentAssistantEnable;
+ (_Bool)isCommentEnable:(id)arg1;
+ (_Bool)isHiddenAudienceName:(id)arg1;
+ (_Bool)isHiddenAudienceNameEnable;
+ (_Bool)isGloryShowEnable:(id)arg1;
+ (_Bool)isLikeEnable:(id)arg1;
+ (_Bool)isLikeAnchorEntrenceEnable;
+ (_Bool)isRewardAnchorEntrenceEnable;
+ (_Bool)isRewardEnable:(id)arg1;
+ (_Bool)isMicEnable:(id)arg1;
+ (_Bool)isFreeTalkEnabled:(id)arg1;
+ (id)getMoreFunctionItemsWithTaskId:(id)arg1 viewType:(unsigned long long)arg2 isGameLive:(_Bool)arg3;
- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderLiveStarterReporter *starterReporter; // @synthesize starterReporter=_starterReporter;
- (void)onReportOperationViewDidSelect:(unsigned long long)arg1 item:(id)arg2;
- (void)reportAnchorActionSheetItems:(id)arg1;
- (id)liveTask;
- (void)reportQuickReplyExpose;
- (id)createData:(unsigned long long)arg1;
- (id)init;

@end

