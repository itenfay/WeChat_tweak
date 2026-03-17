//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MMUIViewController;

@protocol TLProfileDragAnimateHelperDelegate <NSObject>

@optional
- (MMUIViewController *)onGetTLProfileViewController;
- (void)onTapAtTLProfileLikeButton:(_Bool)arg1;
- (void)onTapAtTLProfileChangeCoverButton;
- (void)onTapAtTLProfileHeadButton;
- (void)onTapAtTLProfileDetailButton;
- (void)onExitHoverStateByUser;
- (void)onEnterHoverStateByUser;
- (void)onTapAtTLProfileBackground;
- (void)onLongPressAtTLProfileBackground;
- (void)onTLProfileVideoPlayFinished;
@end

