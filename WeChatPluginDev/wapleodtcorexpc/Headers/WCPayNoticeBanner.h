//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUILabel, NSString;
@protocol WCPayNoticeBannerDelegate;

@interface WCPayNoticeBanner
{
    id <WCPayNoticeBannerDelegate> _delegate;
    MMUILabel *_titleLabel;
    NSString *_title;
    NSString *_url;
}

+ (double)bannerHeightWithFrame:(struct CGRect)arg1 title:(id)arg2 oneline:(_Bool)arg3;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *url; // @synthesize url=_url;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) MMUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) __weak id <WCPayNoticeBannerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onTap:(id)arg1;
- (void)setBackgroundColor:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 title:(id)arg2 url:(id)arg3 readonly:(_Bool)arg4 oneline:(_Bool)arg5;

@end

