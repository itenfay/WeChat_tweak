//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class WCImageView, WCMediaItem;

@interface WCAdConventionalHalfScreenImageMediaView
{
    WCMediaItem *_mediaItem;
    WCImageView *_imageView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) WCMediaItem *mediaItem; // @synthesize mediaItem=_mediaItem;
- (id)fetchMediaImage;
- (struct CGSize)fetchMediaSize;
- (void)updateMediaContentWithWidth:(double)arg1 height:(double)arg2;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1 dataItem:(id)arg2 mediaItem:(id)arg3 delegate:(id)arg4;
- (id)initWithFrame:(struct CGRect)arg1 dataItem:(id)arg2 delegate:(id)arg3;

@end

