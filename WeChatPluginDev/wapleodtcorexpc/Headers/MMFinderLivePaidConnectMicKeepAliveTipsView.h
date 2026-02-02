//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMFinderLiveConnectMicUser, MMUIButton, UILabel;

@interface MMFinderLivePaidConnectMicKeepAliveTipsView
{
    CDUnknownBlockType _onTapKeepAlive;
    MMFinderLiveConnectMicUser *_micUser;
    UILabel *_tipsLabel;
    MMUIButton *_keepAliveButton;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMUIButton *keepAliveButton; // @synthesize keepAliveButton=_keepAliveButton;
@property(retain, nonatomic) UILabel *tipsLabel; // @synthesize tipsLabel=_tipsLabel;
@property(retain, nonatomic) MMFinderLiveConnectMicUser *micUser; // @synthesize micUser=_micUser;
@property(copy, nonatomic) CDUnknownBlockType onTapKeepAlive; // @synthesize onTapKeepAlive=_onTapKeepAlive;
- (void)onClickKeepAliveButton;
- (void)layoutSubviews;
- (void)sizeToFitWidth:(double)arg1;
- (double)triangeArrowHeight;
- (double)triangeArrowWidth;
- (void)initUI;
- (id)initWithFrame:(struct CGRect)arg1 orientation:(long long)arg2;

@end

