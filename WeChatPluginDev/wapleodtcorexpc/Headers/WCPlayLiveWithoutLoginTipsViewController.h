//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUIButton, MMUILabel, UIImageView;

@interface WCPlayLiveWithoutLoginTipsViewController
{
    UIImageView *_tipsImageView;
    MMUILabel *_tipsLabel;
    MMUIButton *_confirmButton;
    MMUIButton *_closeButton;
    UIImageView *_indicateImageView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIImageView *indicateImageView; // @synthesize indicateImageView=_indicateImageView;
@property(retain, nonatomic) MMUIButton *closeButton; // @synthesize closeButton=_closeButton;
@property(retain, nonatomic) MMUIButton *confirmButton; // @synthesize confirmButton=_confirmButton;
@property(retain, nonatomic) MMUILabel *tipsLabel; // @synthesize tipsLabel=_tipsLabel;
@property(retain, nonatomic) UIImageView *tipsImageView; // @synthesize tipsImageView=_tipsImageView;
- (double)heightForLabel;
- (_Bool)useTransparentNavibar;
- (void)onClickConfirmButton:(id)arg1;
- (void)layoutUI;
- (void)viewDidLayoutSubviews;
- (void)setup;
- (void)viewDidLoad;

@end

