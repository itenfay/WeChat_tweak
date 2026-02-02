//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@interface MMLiveAudienceMoreFunctionManager
{
}

+ (id)getMoreFunctionItemsOutsideLiveRoomWithRewardSwitchInfo:(id)arg1;
+ (id)getMoreFunctionItemsWithTaskId:(id)arg1 viewType:(unsigned long long)arg2 isGameLive:(_Bool)arg3;
- (void)onReportOperationViewDidSelect:(unsigned long long)arg1 item:(id)arg2;
- (void)reportAudienceActionSheetItems:(id)arg1;
- (id)liveTask;
- (id)createData:(unsigned long long)arg1;

@end

