//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class UIImageView, UILabel;

@interface MMLiveGameJoinTeamSettingCoinViewCell
{
    unsigned int _value;
    UIImageView *_coin;
    UILabel *_valueLabel;
}

+ (double)height;
+ (id)identifier;
- (void).cxx_destruct;
@property(nonatomic) unsigned int value; // @synthesize value=_value;
@property(retain, nonatomic) UILabel *valueLabel; // @synthesize valueLabel=_valueLabel;
@property(retain, nonatomic) UIImageView *coin; // @synthesize coin=_coin;
- (void)setValue:(unsigned int)arg1 isOther:(_Bool)arg2;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

