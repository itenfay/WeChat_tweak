//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class WCDataItem, WCMediaItem;

@interface WCAdDynamicFeedMediaHolderView
{
    WCDataItem *_dataItem;
    WCMediaItem *_mediaItem;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCMediaItem *mediaItem; // @synthesize mediaItem=_mediaItem;
@property(retain, nonatomic) WCDataItem *dataItem; // @synthesize dataItem=_dataItem;
- (void)resetSubViews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithFrame:(struct CGRect)arg1 elementInfo:(id)arg2 dataItem:(id)arg3;

@end

