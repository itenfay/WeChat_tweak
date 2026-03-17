//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString, TextStateBaseCardContentView;
@protocol TextState3rdPartyHandler;

@protocol TextStateBaseCardContentViewDelegate <NSObject>

@optional
- (void)onLongPress:(TextStateBaseCardContentView *)arg1 isDown:(_Bool)arg2;
- (void)onTapPositionButton:(TextStateBaseCardContentView *)arg1;
- (void)onTapRedEnvelopeButton:(TextStateBaseCardContentView *)arg1;
- (void)onTapResendButton:(TextStateBaseCardContentView *)arg1;
- (void)onTapMoreButton:(TextStateBaseCardContentView *)arg1;
- (void)onTapBackground:(TextStateBaseCardContentView *)arg1;
- (void)onTapIconButton:(TextStateBaseCardContentView *)arg1;
- (void)onTapTopic:(NSString *)arg1 cardContentView:(TextStateBaseCardContentView *)arg2;
- (void)doHeadImageAction:(id <TextState3rdPartyHandler>)arg1;
- (void)doSourceAction:(id <TextState3rdPartyHandler>)arg1;
- (void)onTapCommentButton:(TextStateBaseCardContentView *)arg1;
- (void)onTapSelfFavoriteButton:(TextStateBaseCardContentView *)arg1;
- (void)onTapFavoriteButton:(TextStateBaseCardContentView *)arg1 isSelected:(_Bool)arg2;
@end

