//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"
#import "WCFinderFeedBaseViewControllerProtocol-Protocol.h"

@class MiniRecTransitionController, UIView, WCFinderMegaVideo;

@protocol WCFinderInPictureProtocol <NSObject, WCFinderFeedBaseViewControllerProtocol>
@property(readonly, nonatomic) MiniRecTransitionController *minimizationTransitionController;
- (struct CGRect)fullRectForMedia;
- (_Bool)setVideoMute:(_Bool)arg1;
- (void)willInPicture;
- (void)unstashPlayer;
- (void)stashPlayer;
- (void)closeInPicture;
- (void)maxmizeFromInPicture;
- (UIView *)viewForCapture;
- (_Bool)isPlaying;
- (WCFinderMegaVideo *)playingVideo;
@end

