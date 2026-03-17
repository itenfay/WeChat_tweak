//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class UIView;

@protocol TextStateFriendSquareTransitionCardList <NSObject>
- (UIView *)headImageView;
- (UIView *)cardView;
- (double)beginDismissProgress;
- (void)onFinishDismissal;
- (void)prepareForDismissal;
- (void)onFinishPresentation;
- (void)prepareForPresentation;
@end

