//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString, WCFinderNotifyCenterCellViewModel;

@protocol WCFinderNotifyCenterCellViewModelDelegate <NSObject>
- (int)viewModelCommentScene:(WCFinderNotifyCenterCellViewModel *)arg1;

@optional
- (void)onMentionSilentStateChanged;
- (void)onMentionCommentReplyErrorWithMsg:(NSString *)arg1;
- (void)onMentionCommentReplySuccess;
- (void)onMentionCommentInvalidStateChanged;
- (void)onMentionCommentLikeStateChanged;
- (void)viewModelCellHeightChanged:(WCFinderNotifyCenterCellViewModel *)arg1;
- (void)onMentionThankStateChanged;
- (void)onPrivateAccountFollowStateChanged;
@end

