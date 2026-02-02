//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class WCAdDynamicFeedElementRollTextInfo;

@interface WCAdDynamicLiveDisplayView
{
    WCAdDynamicFeedElementRollTextInfo *_styleInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCAdDynamicFeedElementRollTextInfo *styleInfo; // @synthesize styleInfo=_styleInfo;
- (void)layoutSubviews;
- (void)updateDynamicRollView;
- (id)initWithFrame:(struct CGRect)arg1 dataItem:(id)arg2 isFullCard:(_Bool)arg3 styleInfo:(id)arg4;

@end

