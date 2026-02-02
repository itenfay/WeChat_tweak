//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUIButton, WCAdLookbookBrandNewItem;
@protocol WCTimeLineAdLookbookCardBrandNewMediaViewDelegate;

@interface WCTimeLineAdLookbookCardBrandNewMediaView
{
    id <WCTimeLineAdLookbookCardBrandNewMediaViewDelegate> _brandNewMediaDelegate;
    WCAdLookbookBrandNewItem *_brandNewItemInfo;
    MMUIButton *_coverButton;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMUIButton *coverButton; // @synthesize coverButton=_coverButton;
@property(retain, nonatomic) WCAdLookbookBrandNewItem *brandNewItemInfo; // @synthesize brandNewItemInfo=_brandNewItemInfo;
@property(nonatomic) __weak id <WCTimeLineAdLookbookCardBrandNewMediaViewDelegate> brandNewMediaDelegate; // @synthesize brandNewMediaDelegate=_brandNewMediaDelegate;
- (void)onPlaybackTimeUpdate:(double)arg1;
- (void)onPlayEnd:(_Bool)arg1;
- (void)setBrandNewMediaHighlighted:(_Bool)arg1;
- (void)onCoverButtonClicked:(id)arg1;
- (id)generateSightViewWithMediaData:(id)arg1 withFrame:(struct CGRect)arg2 dataItem:(id)arg3 bTimelineScene:(_Bool)arg4;
- (void)layoutSubviews;
- (void)generateInitialSubviews;

@end

