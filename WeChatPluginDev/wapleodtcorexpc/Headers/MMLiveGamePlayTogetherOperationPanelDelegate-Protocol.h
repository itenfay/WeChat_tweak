//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class FinderJumpInfo, MMFinderLiveGameTeamInfo, MMLiveGamePlayTogetherOperationPanel, NSString;

@protocol MMLiveGamePlayTogetherOperationPanelDelegate <NSObject>
- (void)reportStarterPlayTogetherAction:(unsigned long long)arg1;
- (void)onMMLiveGamePlayTogetherTeamCornerJump:(FinderJumpInfo *)arg1;
- (void)onMMLiveGamePlayTogetherTeamUpBookButtonClicked:(NSString *)arg1;
- (void)onMMLiveGamePlayOpeationPanelTeamUpStartButtonClicked:(MMFinderLiveGameTeamInfo *)arg1 joinTeamMode:(unsigned int)arg2 joinTeamCondIsOK:(_Bool)arg3 paidForNextRound:(_Bool)arg4;
- (void)onClickJoinTeamEntry:(MMLiveGamePlayTogetherOperationPanel *)arg1;
- (void)onClickJoinTeamSettingEntry:(MMLiveGamePlayTogetherOperationPanel *)arg1;
- (void)onMMLiveGamePlayTogetherOperationPanelDismiss;
- (void)onMMLiveGamePlayTogetherOperationPanelShow:(MMLiveGamePlayTogetherOperationPanel *)arg1;
@end

