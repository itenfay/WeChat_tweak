//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, UIImageView, UITapGestureRecognizer, UIView, WCFinderFeedImageCDNView;
@protocol WCFinderLandScapePlayCompleteCoverInfoViewDelegate;

@interface WCFinderLandScapePlayCompleteCoverInfoView
{
    id <WCFinderLandScapePlayCompleteCoverInfoViewDelegate> _delegate;
    WCFinderFeedImageCDNView *_coverView;
    UIView *_maskView;
    UIImageView *_playView;
    UITapGestureRecognizer *_tapGes;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UITapGestureRecognizer *tapGes; // @synthesize tapGes=_tapGes;
@property(retain, nonatomic) UIImageView *playView; // @synthesize playView=_playView;
@property(retain, nonatomic) UIView *maskView; // @synthesize maskView=_maskView;
@property(retain, nonatomic) WCFinderFeedImageCDNView *coverView; // @synthesize coverView=_coverView;
@property(nonatomic) __weak id <WCFinderLandScapePlayCompleteCoverInfoViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onTap:(id)arg1;
- (void)layoutSubviews;
- (struct CGSize)playViewSize;
- (void)updateWithDataItem:(id)arg1;
- (void)setupSubViews;
- (void)setup;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

