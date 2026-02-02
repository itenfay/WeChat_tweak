//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class BraceletRankNewLikeButton, SportRecord;

@protocol BraceletStepScoreDelegate <NSObject>

@optional
- (void)onClickSportRecord:(SportRecord *)arg1;
- (void)onClickLikeButton:(BraceletRankNewLikeButton *)arg1;
@end

