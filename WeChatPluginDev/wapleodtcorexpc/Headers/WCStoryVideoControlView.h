//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, UIImage, UIImageView, UIView, WCStoryMediaItem;
@protocol WCStoryVideoControlViewDelegate;

@interface WCStoryVideoControlView
{
    UIView *_toolPanView;
    UIImageView *_thumbImageView;
    id <WCStoryVideoControlViewDelegate> _delegate;
    WCStoryMediaItem *_mediaItem;
    UIImage *_thumbImage;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIImage *thumbImage; // @synthesize thumbImage=_thumbImage;
@property(retain, nonatomic) WCStoryMediaItem *mediaItem; // @synthesize mediaItem=_mediaItem;
@property(nonatomic) __weak id <WCStoryVideoControlViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UIImageView *thumbImageView; // @synthesize thumbImageView=_thumbImageView;
@property(retain, nonatomic) UIView *toolPanView; // @synthesize toolPanView=_toolPanView;
- (void)onStoryThumbDownloadFail:(id)arg1;
- (void)onStoryThumbDownloadSuccess:(id)arg1;
- (void)onReceiveAllVideoData;
- (void)onVideoPlayFail:(unsigned long long)arg1 errorCode:(int)arg2 LocalizedErrorDes:(id)arg3;
- (void)onVideoPlay;
- (void)hiddenThumbImageView;
- (void)tryLoadThumbImage;
- (void)initSubview;
- (id)initWithFrame:(struct CGRect)arg1 MediaItem:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

