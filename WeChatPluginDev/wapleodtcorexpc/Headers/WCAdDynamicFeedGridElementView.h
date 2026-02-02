//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class WCDataItem, WCImageView, WCMediaItem;

@interface WCAdDynamicFeedGridElementView
{
    WCMediaItem *_mediaItem;
    WCDataItem *_dataItem;
    unsigned long long _index;
    WCImageView *_imageView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCImageView *imageView; // @synthesize imageView=_imageView;
@property(nonatomic) unsigned long long index; // @synthesize index=_index;
@property(retain, nonatomic) WCDataItem *dataItem; // @synthesize dataItem=_dataItem;
@property(retain, nonatomic) WCMediaItem *mediaItem; // @synthesize mediaItem=_mediaItem;
- (void)onBackgroundButtonClicked:(id)arg1;
- (void)generateGridElement;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithFrame:(struct CGRect)arg1 elementInfo:(id)arg2 mediaItem:(id)arg3 dataItem:(id)arg4 index:(unsigned long long)arg5;

@end

