//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MMMusicMVSingleVideoItemView, MMMusicMVTrackItem, MVVideoPixelBuffer, NSString, TPVideoFrameBuffer, WCFinderDataItem;

@protocol MMMusicMVSingleVideoItemViewDelegate <NSObject>
- (_Bool)isMusicMVSingleVideoItemViewInUse:(MMMusicMVSingleVideoItemView *)arg1;
- (void)onVideoToggleJumpFinderProfileOperation:(NSString *)arg1;
- (void)onVideoTogglePostOperation;

@optional
- (WCFinderDataItem *)singleVideoItemView:(MMMusicMVSingleVideoItemView *)arg1 finderDataItemForTrack:(MMMusicMVTrackItem *)arg2;
- (void)singleVideoItemView:(MMMusicMVSingleVideoItemView *)arg1 onImageFrameOut:(MVVideoPixelBuffer *)arg2;
- (void)singleVideoItemView:(MMMusicMVSingleVideoItemView *)arg1 onPlayerVideoFrameOut:(TPVideoFrameBuffer *)arg2;
- (void)mvSingleVideoItemView:(MMMusicMVSingleVideoItemView *)arg1 didUpdateVideoCurrentTime:(double)arg2 bufferPosition:(double)arg3;
- (void)onLiveVideoPlayerViewHideBufferingView;
- (void)onLiveVideoPlayerViewShowBufferingView;
@end

