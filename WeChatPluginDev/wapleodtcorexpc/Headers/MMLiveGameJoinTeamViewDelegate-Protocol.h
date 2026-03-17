//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MMFinderLiveGameTeamInfo, NSString;

@protocol MMLiveGameJoinTeamViewDelegate <NSObject>

@optional
- (void)onMMLiveGameJoinTeamViewBottomDescClick:(NSString *)arg1;
- (void)onMMLiveGameJoinTeamViewTeamUpBookButtonClicked:(NSString *)arg1;
- (void)onMMLiveGameJoinTeamViewTeamUpStartButtonClicked:(MMFinderLiveGameTeamInfo *)arg1 joinTeamMode:(unsigned int)arg2 joinTeamCondIsOK:(_Bool)arg3 paidForNextRound:(_Bool)arg4;
- (void)onMMLiveGameJoinTeamViewShow;
@end

