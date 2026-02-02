//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MMMusicMVEpisodeItemCellView, MMMusicMVPlayerBgView, NSString, UIGestureRecognizer;

@protocol MMMusicMVPlayerBgViewDelegate <NSObject>

@optional
- (_Bool)mvPlayerBgViewCanPerformDoubletap:(MMMusicMVPlayerBgView *)arg1;
- (_Bool)mvPlayerBgView:(MMMusicMVPlayerBgView *)arg1 shouldTransitToEpisodeIndex:(long long)arg2 fromIndex:(long long)arg3;
- (void)musicMVPlayerOnHideBufferingView;
- (void)musicMVPlayerOnShowBufferingView;
- (void)musicMVPlayerOnLongPress;
- (void)musicMVPlayerOnLikeWithGestureRecognizer:(UIGestureRecognizer *)arg1 inView:(MMMusicMVPlayerBgView *)arg2;
- (void)musicMVPlayerOnVideoAuthorChangedToUsrName:(NSString *)arg1 nickName:(NSString *)arg2;
- (void)musicMVPlayerOnVideoToggleJumpFinderProfileOperation:(NSString *)arg1;
- (void)musicMVPlayerOnVideoTogglePostOperation;
- (void)musicMVPlayerOnTappedVideo;
- (void)muiscMVPlayerOnTryPostVideo;
- (void)musicMVPlayerDidEndDisplayEpisodeView:(MMMusicMVEpisodeItemCellView *)arg1;
- (void)musicMVPlayerWillDisplayEpisodeView:(MMMusicMVEpisodeItemCellView *)arg1 ofIndex:(unsigned long long)arg2;
- (void)musicMVPlayerDidEndDragging;
- (void)musicMVPlayerDidDragWithTranslation:(double)arg1;
- (void)musicMVPlayerWillBeginDragging;
- (double)currentMusicTimeOffsetInMs;
@end

