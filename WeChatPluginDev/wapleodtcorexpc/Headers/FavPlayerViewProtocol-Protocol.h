//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@protocol FavSightViewDelegate;

@protocol FavPlayerViewProtocol <NSObject>
@property(nonatomic) __weak id <FavSightViewDelegate> delegate;
@property(nonatomic) _Bool hideIcon;
@property(nonatomic) _Bool autoPlay;
- (void)onSingleTap;
- (void)onFullScreenDragCancel;
- (void)onFullScreenDragBegin;
- (void)setIconViewHidden:(_Bool)arg1;
- (void)setToolViewHidden:(_Bool)arg1;
- (void)didFullScreenAnimationCompleted;
- (void)onDidAnimateShow;
- (void)onWilAnimateClose;
- (void)setAnimateFrame:(struct CGRect)arg1;
- (void)onWillAnimateShow;
- (void)setLoadingState:(_Bool)arg1;
- (_Bool)isNeedDownload;
- (void)stopPlayer;
- (void)pauseVideo;
- (void)playVideo;
@end

