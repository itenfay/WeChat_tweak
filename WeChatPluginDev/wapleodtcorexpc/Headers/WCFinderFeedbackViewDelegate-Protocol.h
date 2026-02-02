//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSArray, WCFinderFeedbackView, WCFinderJumpInfo;

@protocol WCFinderFeedbackViewDelegate <NSObject>
- (void)onFinderFeedbackView:(WCFinderFeedbackView *)arg1 shouldCloseWithReasons:(NSArray *)arg2;
- (void)onFinderFeedbackViewDidCancel:(WCFinderFeedbackView *)arg1;
- (void)onFinderFeedbackViewComplainButtonDidClick:(WCFinderFeedbackView *)arg1;
- (void)onFinderFeedbackViewDislikeButtonDidClick:(WCFinderFeedbackView *)arg1;
- (void)onFinderFeedbackViewLikeButtonDidClick:(WCFinderFeedbackView *)arg1;

@optional
- (void)onFinderFeedbackView:(WCFinderFeedbackView *)arg1 didClickDescriptionJumpInfo:(WCFinderJumpInfo *)arg2;
@end

