//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MMLiveView;

@protocol MMLiveViewExt <NSObject>

@optional
- (void)onLiveView:(MMLiveView *)arg1 enableShowLiveRoomCoverImageViewChanged:(_Bool)arg2;
- (void)onLiveViewAdvertisementVideoPlayFinished:(MMLiveView *)arg1;
- (void)onLiveView:(MMLiveView *)arg1 cdnPlayerViewAppearanceChanged:(_Bool)arg2;
- (void)onLiveView:(MMLiveView *)arg1 videoViewAppearanceChanged:(_Bool)arg2;
- (void)onLiveViewConnectMicViewFrameChanged:(MMLiveView *)arg1 newConnectMicViewFrame:(struct CGRect)arg2;
- (void)onLiveViewCdnPlayerViewFrameChanged:(MMLiveView *)arg1 newCdnPlayerViewFrame:(struct CGRect)arg2;
- (void)onLiveViewMainVideoViewFrameChanged:(MMLiveView *)arg1 newVideoViewFrame:(struct CGRect)arg2;
@end

