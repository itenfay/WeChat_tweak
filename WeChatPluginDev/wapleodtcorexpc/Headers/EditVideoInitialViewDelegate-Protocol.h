//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class EditVideoAttr, EditVideoBGMSelectedMusicInfo, NSString, UIImage, UIViewController, UIWindow;

@protocol EditVideoInitialViewDelegate <NSObject>
- (void)willMoveToWindow:(UIWindow *)arg1;
- (_Bool)isExceedTimelineTimeLimit;
- (float)getOutputTime;
- (NSString *)getAssetId;
- (NSString *)getAssetUrl;
- (UIImage *)getThumbImage;
- (struct CGSize)getImageRatioSize;
- (EditVideoAttr *)getVideoAttr;
- (CDStruct_e83c9415)getEditedVideoTimeRange;
- (void)onClickSaveEditVideoToAlbumActionSheet:(void (^)(_Bool))arg1;
- (void)onClickEditVideoDoneButton;
- (void (^)(void (^)(void)))onWillClickEditVideoDoneButton;
- (void)onClickEditVideoCancelButton;
- (void)onOriginSoundChange:(_Bool)arg1;
- (void)onChooseVideoBGMDone:(EditVideoBGMSelectedMusicInfo *)arg1;
- (void)onCropTimeChange:(CDStruct_e83c9415)arg1;
- (void)onSeekTime:(double)arg1;
- (void)onCropCancel;
- (void)onCropDone:(CDStruct_e83c9415)arg1;
- (UIViewController *)currentViewController;
@end

