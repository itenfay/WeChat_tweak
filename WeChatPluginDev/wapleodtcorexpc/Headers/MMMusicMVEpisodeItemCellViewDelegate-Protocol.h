//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MMMusicMVEpisodeItemCellView, MMMusicMVTrackItem, MVVideoPixelBuffer, NSString, TPVideoFrameBuffer, WCFinderDataItem;

@protocol MMMusicMVEpisodeItemCellViewDelegate <NSObject>

@optional
- (WCFinderDataItem *)episodeItemCellView:(MMMusicMVEpisodeItemCellView *)arg1 finderDataItemForTrack:(MMMusicMVTrackItem *)arg2;
- (void)episodeItemCellView:(MMMusicMVEpisodeItemCellView *)arg1 onImageFrameOut:(MVVideoPixelBuffer *)arg2;
- (void)episodeItemCellView:(MMMusicMVEpisodeItemCellView *)arg1 onVideoFrameOut:(TPVideoFrameBuffer *)arg2;
- (void)episodeItemCellView:(MMMusicMVEpisodeItemCellView *)arg1 didUpdateSingleVideoCurrentTime:(double)arg2 bufferPosition:(double)arg3;
- (void)episodeItemCellViewOnHideBufferingViewFromCell:(MMMusicMVEpisodeItemCellView *)arg1;
- (void)episodeItemCellViewOnShowBufferingViewFromCell:(MMMusicMVEpisodeItemCellView *)arg1;
- (_Bool)episodeItemCellViewIsInUse:(MMMusicMVEpisodeItemCellView *)arg1;
- (void)episodeItemCellViewOnVideoToggleJumpFinderProfileOperation:(NSString *)arg1;
- (void)episodeItemCellViewOnVideoTogglePostOperation;
- (void)episodeItemCellViewDidTapVideo;
- (void)episodeItemCellViewDidTapNoVideoView;
@end

