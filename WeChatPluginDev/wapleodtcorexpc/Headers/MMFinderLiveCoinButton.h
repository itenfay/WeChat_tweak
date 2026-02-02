//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUIButton, MMUILabel, UIImageView;

@interface MMFinderLiveCoinButton
{
    unsigned int _wecoinCount;
    CDUnknownBlockType _coinButtonClickCallback;
    UIImageView *_wecoinIconView;
    MMUILabel *_wecoinCountLabel;
    MMUILabel *_textLabel;
    MMUIButton *_containerButton;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int wecoinCount; // @synthesize wecoinCount=_wecoinCount;
@property(retain, nonatomic) MMUIButton *containerButton; // @synthesize containerButton=_containerButton;
@property(retain, nonatomic) MMUILabel *textLabel; // @synthesize textLabel=_textLabel;
@property(retain, nonatomic) MMUILabel *wecoinCountLabel; // @synthesize wecoinCountLabel=_wecoinCountLabel;
@property(retain, nonatomic) UIImageView *wecoinIconView; // @synthesize wecoinIconView=_wecoinIconView;
@property(copy, nonatomic) CDUnknownBlockType coinButtonClickCallback; // @synthesize coinButtonClickCallback=_coinButtonClickCallback;
- (void)onCoinButtonClicked:(id)arg1;
- (void)updateWecoinCount:(unsigned int)arg1 buttonText:(id)arg2;
- (void)layoutUI;
- (void)layoutSubviews;
- (void)setupViews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

