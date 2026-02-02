//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, UIImageView, UILabel, UIView, WCFinderFeedContentVM, WCFinderFeedImageCDNView, WCFinderLiveNowView;

@interface WAMainFrameTaskBarSectionLiveViewCell
{
    WCFinderFeedImageCDNView *_finderCoverView;
    UIView *_liveNowView;
    WCFinderFeedContentVM *_contentVM;
    WCFinderLiveNowView *_liveEndView;
    UIImageView *_liveImageView;
    UILabel *_liveLabel;
}

- (void).cxx_destruct;
- (void)onFeedLiveCoverInfoUpdate:(id)arg1;
- (void)onFinderLiveCloseWithTid:(id)arg1;
- (void)updateCoverSpamEffect;
- (void)changeToLiveClosed;
- (void)updateWithListInfo:(id)arg1;
- (id)defaultImage;
- (_Bool)supportAddToMinimize;
- (void)layoutSubviews;
- (void)initView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

