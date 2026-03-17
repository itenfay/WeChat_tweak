//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class BraceletRankNewLikeButton, NSArray, NSMutableArray, NSString, SportRecord, WAContact;

@protocol BraceletSportRecordDelegate <NSObject>

@optional
- (void)onClickLikeButtonWithLikeList:(NSMutableArray *)arg1;
- (void)onClickSportRecord:(SportRecord *)arg1;
- (void)onClickLikeButton:(BraceletRankNewLikeButton *)arg1;
- (void)onClickAppWithFinderUsername:(NSString *)arg1 records:(NSArray *)arg2;
- (void)onClickAppWithWAContact:(WAContact *)arg1;
- (void)onClickHistoryButton;
@end

