//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMWebImageView, NSString, UILabel;
@protocol MMLocationAttributeBannerDelegate;

@interface MMLocationAttributeBanner
{
    NSString *_title;
    NSString *_logoUrl;
    NSString *_link;
    id <MMLocationAttributeBannerDelegate> _delegate;
    UILabel *_titleLable;
    MMWebImageView *_logoImgView;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <MMLocationAttributeBannerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) NSString *logoUrl; // @synthesize logoUrl=_logoUrl;
@property(readonly, nonatomic) NSString *title; // @synthesize title=_title;
- (void)onLoadImageOK:(id)arg1;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)updateBanner:(id)arg1 LogoUrl:(id)arg2;
- (void)onTapBanner:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

