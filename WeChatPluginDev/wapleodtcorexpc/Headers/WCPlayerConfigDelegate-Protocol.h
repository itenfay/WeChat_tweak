//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString, UIButton, WCDownloadArgsWrap;

@protocol WCPlayerConfigDelegate <NSObject>

@optional
- (void)onDataSourceChangeSuccessWithDownloadArgsWrap:(WCDownloadArgsWrap *)arg1;
- (void)onHiddenBufferingView;
- (void)onShowBufferingView;
- (_Bool)isCanShowBufferingView;
- (void)onSeekToTime:(double)arg1;
- (void)onGetVideoSize:(struct CGSize)arg1;
- (void)onLoopPlayToEnd;
- (void)onPlayToEnd;
- (void)onVideoPause;
- (void)onToolViewAutoClose;
- (void)onVideoPlay;
- (void)onPlayerCreated;
- (void)onClickToolView;
- (void)onClickShareButton:(NSString *)arg1;
- (void)onTapAttachButton:(UIButton *)arg1;
- (void)onTapCloseButton:(UIButton *)arg1;
- (void)onTapSightIconView;
- (void)onSightIconProgressEnd;
@end

