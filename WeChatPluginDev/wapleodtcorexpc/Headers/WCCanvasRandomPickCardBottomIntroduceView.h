//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class UILabel, WCAdURLImageView, WCCanvasRandomLayoutEncorePickInfo;

@interface WCCanvasRandomPickCardBottomIntroduceView
{
    WCCanvasRandomLayoutEncorePickInfo *_encoreInfo;
    unsigned long long _cardsRemainCount;
    WCAdURLImageView *_iconView;
    UILabel *_prefixLabel;
    UILabel *_countLabel;
    UILabel *_suffixLabel;
}

+ (struct CGSize)calcLabelSizeWithFont:(id)arg1 text:(id)arg2;
+ (struct CGSize)calcIntroduceViewSizeWithEncoreInfo:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) UILabel *suffixLabel; // @synthesize suffixLabel=_suffixLabel;
@property(retain, nonatomic) UILabel *countLabel; // @synthesize countLabel=_countLabel;
@property(retain, nonatomic) UILabel *prefixLabel; // @synthesize prefixLabel=_prefixLabel;
@property(retain, nonatomic) WCAdURLImageView *iconView; // @synthesize iconView=_iconView;
@property(nonatomic) unsigned long long cardsRemainCount; // @synthesize cardsRemainCount=_cardsRemainCount;
@property(retain, nonatomic) WCCanvasRandomLayoutEncorePickInfo *encoreInfo; // @synthesize encoreInfo=_encoreInfo;
- (void)layoutSubviews;
- (void)generateSubviews;
- (id)initWithFrame:(struct CGRect)arg1 encoreInfo:(id)arg2;

@end

