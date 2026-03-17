//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class SightView;

@protocol SightViewDelegate <NSObject>

@optional
- (_Bool)shouldCheckPlayerHasInitWhenSetThumbImageContentMode;
- (_Bool)shouldVideoLayerRasterize;
- (void)onSightProgressBarHidden;
- (void)onVideoStreamDownloadFail:(_Bool)arg1;
- (void)onStartToPlayVideo;
- (void)onSightDurationUpdate:(CDStruct_1b6d18a9)arg1;
- (void)onVideoSizeUpdate:(struct CGSize)arg1;
- (void)onResumeSightView:(SightView *)arg1;
- (void)onStackSightView:(SightView *)arg1;
- (void)onSightViewPlayItemCleared:(SightView *)arg1;
- (_Bool)sightView:(SightView *)arg1 playbackDidReadEnd:(_Bool)arg2;
- (void)sightViewProgressDidReachEnd:(SightView *)arg1;
- (void)onClickIconViewOfSightView:(SightView *)arg1;
@end

