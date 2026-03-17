//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class TextStateBaseCardContentView, TextStateModel, UIViewController;
@protocol TextState3rdPartyHandler;

@protocol TextStateProfileDragAnimateHelperDelegate <NSObject>
- (UIViewController *)associateViewController;

@optional
- (void)onTapMoreButtonForTextState:(TextStateModel *)arg1;
- (void)onTapMoreButton:(TextStateBaseCardContentView *)arg1;
- (void)onTapBackground:(TextStateBaseCardContentView *)arg1;
- (void)onTapAtRedEnvelopeButton;
- (void)onTapCommentListButtonForCardView:(TextStateBaseCardContentView *)arg1;
- (void)onTapLikeListButtonForTextState:(TextStateModel *)arg1;
- (void)onTapAtIconButton;
- (void)onTapAtTextStateHeadButton;
- (void)onTapAtTextStateDetailButtonWithHandler:(id <TextState3rdPartyHandler>)arg1;
- (void)onTapAtTextStateDetailButton;
- (void)onTextStateVideoPlayFinished;
@end

