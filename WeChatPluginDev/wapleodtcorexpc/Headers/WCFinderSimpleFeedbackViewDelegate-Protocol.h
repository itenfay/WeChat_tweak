//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class WCFinderJumpInfo;

@protocol WCFinderSimpleFeedbackViewDelegate <NSObject>
- (void)onFinderSimpleFeedbackViewComplainButtonDidClick;
- (void)onFinderSimpleFeedbackViewDislikeButtonDidClick;
- (void)onFinderSimpleFeedbackViewLikeButtonDidClick;

@optional
- (void)onFinderSimpleFeedbackViewDescriptionJumpInfoDidClick:(WCFinderJumpInfo *)arg1;
@end

