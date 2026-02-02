//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMTextStateMediaItem, NSString, UIImage, UIImageView, UIView;
@protocol MMTextStateVideoControlViewDelegate;

@interface MMTextStateVideoControlView
{
    UIView *_toolPanView;
    UIImageView *_thumbImageView;
    id <MMTextStateVideoControlViewDelegate> _delegate;
    MMTextStateMediaItem *_mediaItem;
    UIImage *_thumbImage;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIImage *thumbImage; // @synthesize thumbImage=_thumbImage;
@property(retain, nonatomic) MMTextStateMediaItem *mediaItem; // @synthesize mediaItem=_mediaItem;
@property(nonatomic) __weak id <MMTextStateVideoControlViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UIImageView *thumbImageView; // @synthesize thumbImageView=_thumbImageView;
@property(retain, nonatomic) UIView *toolPanView; // @synthesize toolPanView=_toolPanView;
- (void)onTextStateMediaThumbDownloadFail:(id)arg1;
- (void)onTextStateMediaThumbDownloadSuccess:(id)arg1;
- (void)hiddenThumbImageView;
- (void)tryLoadThumbImage;
- (void)updateVideoCurrentTime:(double)arg1;
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

