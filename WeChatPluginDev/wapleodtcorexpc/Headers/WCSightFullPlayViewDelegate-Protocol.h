//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString, WCMediaItem, WCSightFullPlayView;

@protocol WCSightFullPlayViewDelegate <NSObject>

@optional
- (void)onFullScreenItemDragEnd;
- (void)onFullScreenItemDragBegin;
- (void)onFullScreenItemDragToClose;
- (void)onFullScreenItemChangeAlpha:(double)arg1;
- (NSString *)getDetailButtonTitle;
- (_Bool)shouldShowDetailButton;
- (void)onClickDetailButton;
- (void)onClickFullPlayViewForViewAttachVideo;
- (void)onFullSightDownloadFinished:(WCMediaItem *)arg1 downloadType:(long long)arg2;
- (void)onFullSightPlayEnd:(_Bool)arg1;
- (void)onLongPressedFullSightView:(WCSightFullPlayView *)arg1;
- (void)onClickFullSightView:(WCSightFullPlayView *)arg1;
@end

