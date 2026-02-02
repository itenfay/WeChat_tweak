//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class EditVideoAttr, EditVideoBGMSelectedMusicInfo, NSString, UIImage, UIViewController, UIWindow, WCEditVideoLayoutView;

@protocol WCEditVideoLayoutViewDelegate <NSObject>
- (void)postVideoByFinderFromEntrance:(long long)arg1;
- (void)editVideoLayoutViewDidPlayReachEnd:(WCEditVideoLayoutView *)arg1;
- (void)listenPlayProgressWithCMTime:(CDStruct_1b6d18a9)arg1;
- (void)returnToTimelineOrAlbum;
- (void)willMoveToWindow:(UIWindow *)arg1;
- (_Bool)isExceedTimelineTimeLimit;
- (double)getMinDuration;
- (float)getOutputTime;
- (NSString *)getAssetId;
- (NSString *)getAssetUrl;
- (UIImage *)getThumbImage;
- (struct CGSize)getImageRatioSize;
- (struct CGSize)getOriginalAssetSize;
- (EditVideoAttr *)getVideoAttr;
- (CDStruct_e83c9415)getEditedVideoTimeRange;
- (CDStruct_1b6d18a9)videoLayoutViewGetVideoDuration:(WCEditVideoLayoutView *)arg1;
- (void)onClickSecondCutPromotionButton:(long long)arg1 musicId:(NSString *)arg2;
- (void)onClickJumpMoreButton:(NSString *)arg1;
- (void)onClickLaunchMiaoJianButton;
- (void)onClickEditVideoDoneButton;
- (void)onClickEditVideoCancelButton;
- (void)onOriginSoundChange:(_Bool)arg1;
- (void)onChooseVideoBGMDone:(EditVideoBGMSelectedMusicInfo *)arg1;
- (void)onCropTimeChange:(CDStruct_e83c9415)arg1;
- (void)onSeekTime:(double)arg1;
- (void)onCropCancel;
- (void)onCropDone:(CDStruct_e83c9415)arg1;
- (UIViewController *)currentViewController;

@optional
- (double)getMaxDuration;
- (struct CGSize)getFallbackVideoSize;
@end

