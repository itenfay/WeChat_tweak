//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMImageView, WCFinderFeedImageCDNView;

@interface WAMainFrameTaskBarSectionVideoViewCell : NSObject
{
    MMImageView *_playIcon;
    WCFinderFeedImageCDNView *_finderCoverView;
}

- (_Bool)supportAddToMinimize;
- (void)updateWithListInfo:(id)arg1;
- (id)defaultImage;
- (void)layoutSubviews;
- (void)initView;

@end

