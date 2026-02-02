//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMFinderLiveFansGroupInvisibleTipView, MMUIButton, MMUILabel, MMWebImageView, NSString;

@interface MMFinderLiveFansGroupAnchorCardInfoCell
{
    MMUILabel *_titleLabel;
    MMUILabel *_nickLabel;
    MMUILabel *_wxidLabel;
    MMWebImageView *_webImageView;
    MMFinderLiveFansGroupInvisibleTipView *_invisibleTipView;
    NSString *_wxid;
    MMUIButton *_cpButton;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMUIButton *cpButton; // @synthesize cpButton=_cpButton;
@property(retain, nonatomic) NSString *wxid; // @synthesize wxid=_wxid;
@property(retain, nonatomic) MMFinderLiveFansGroupInvisibleTipView *invisibleTipView; // @synthesize invisibleTipView=_invisibleTipView;
@property(retain, nonatomic) MMWebImageView *webImageView; // @synthesize webImageView=_webImageView;
@property(retain, nonatomic) MMUILabel *wxidLabel; // @synthesize wxidLabel=_wxidLabel;
@property(retain, nonatomic) MMUILabel *nickLabel; // @synthesize nickLabel=_nickLabel;
@property(retain, nonatomic) MMUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void)layoutSubviews;
- (void)setInvisible:(_Bool)arg1 invisibleTips:(id)arg2;
- (void)onCpButtonClick;
- (void)configWithNick:(id)arg1 wxid:(id)arg2 imageUrlString:(id)arg3;
- (void)initUI;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

