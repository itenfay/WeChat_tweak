//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUILabel, UIButton, UIImageView;
@protocol WCPayOfflinePayNoCodeTipsViewDelegate;

@interface WCPayOfflinePayNoCodeTipsView
{
    id <WCPayOfflinePayNoCodeTipsViewDelegate> _delegate;
    UIImageView *_iconImgView;
    MMUILabel *_tipsLabel;
    UIButton *_refreshBtn;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIButton *refreshBtn; // @synthesize refreshBtn=_refreshBtn;
@property(retain, nonatomic) MMUILabel *tipsLabel; // @synthesize tipsLabel=_tipsLabel;
@property(retain, nonatomic) UIImageView *iconImgView; // @synthesize iconImgView=_iconImgView;
@property(nonatomic) __weak id <WCPayOfflinePayNoCodeTipsViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)enableRefreshBtn;
- (void)disableRefreshBtn;
- (void)refreshBtnPress:(id)arg1;
- (void)setupContentView:(id)arg1;
- (id)initNoCodeTipsViewWithFrame:(struct CGRect)arg1 delegate:(id)arg2 tipsWording:(id)arg3;

@end

