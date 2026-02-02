//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class WCFinderAnimationLoadingView;

@interface WCFinderProfileNormalTopRefreshView
{
    WCFinderAnimationLoadingView *_loadingView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderAnimationLoadingView *loadingView; // @synthesize loadingView=_loadingView;
- (void)setState:(long long)arg1 animated:(_Bool)arg2;
- (void)willBeginRefresh;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

