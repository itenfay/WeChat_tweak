//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class EditVideoAttr, MMUIViewController, NSString, UIImage, WCEditVideoViewController, WCFinderPostSessionModel;

@protocol WCEditVideoViewControllerDelegate <NSObject>

@optional
- (void)onWCEditVideoPreCancelEditor:(WCEditVideoViewController *)arg1;
- (void)onWCEditVideoPreComposeViewController:(WCEditVideoViewController *)arg1 didFinishEditingVideo:(EditVideoAttr *)arg2;
- (void)onWCEditVideoViewControllerPostFinderDidCancel;
- (void)onWCEditVideoViewControllerDraftWithPostSession:(WCFinderPostSessionModel *)arg1;
- (void)onWCEditVideoViewControllerLongVideoWithPostSession:(WCFinderPostSessionModel *)arg1;
- (void)editVideoViewController:(WCEditVideoViewController *)arg1 currentVC:(MMUIViewController *)arg2 requestToLaunchMJAppWithScene:(unsigned long long)arg3 launchType:(long long)arg4 editTab:(long long)arg5 musicId:(NSString *)arg6 exportedOpenWX:(int)arg7 launchCallback:(void (^)(_Bool))arg8;
- (void)editVideoViewController:(WCEditVideoViewController *)arg1 didFinishEditingVideo:(EditVideoAttr *)arg2 andForceChangeToScene:(unsigned int)arg3;
- (void)returnToTimelineOrAlbum;
- (void)updateVideoPath:(NSString *)arg1 andThumbnail:(UIImage *)arg2;
- (void)editVideoViewControllerDidCancel:(WCEditVideoViewController *)arg1;
- (void)editVideoViewController:(WCEditVideoViewController *)arg1 didFinishEditingVideo:(EditVideoAttr *)arg2 sliderContentOffset:(struct CGPoint)arg3;
- (void)editVideoViewController:(WCEditVideoViewController *)arg1 didFinishEditingVideo:(EditVideoAttr *)arg2;
@end

