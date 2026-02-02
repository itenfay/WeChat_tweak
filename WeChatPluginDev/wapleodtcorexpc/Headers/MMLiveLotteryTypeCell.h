//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUILabel, NSString, UIImageView, UIView;

@interface MMLiveLotteryTypeCell
{
    _Bool _enable;
    unsigned int _optionValue;
    UIImageView *_selectionIndicatorView;
    MMUILabel *_optionNameLabel;
    MMUILabel *_descLabel;
    UIView *_sepelateLine;
    NSString *_optionName;
    NSString *_desc;
}

+ (id)identifier;
- (void).cxx_destruct;
@property(nonatomic) _Bool enable; // @synthesize enable=_enable;
@property(retain, nonatomic) NSString *desc; // @synthesize desc=_desc;
@property(retain, nonatomic) NSString *optionName; // @synthesize optionName=_optionName;
@property(nonatomic) unsigned int optionValue; // @synthesize optionValue=_optionValue;
@property(retain, nonatomic) UIView *sepelateLine; // @synthesize sepelateLine=_sepelateLine;
@property(retain, nonatomic) MMUILabel *descLabel; // @synthesize descLabel=_descLabel;
@property(retain, nonatomic) MMUILabel *optionNameLabel; // @synthesize optionNameLabel=_optionNameLabel;
@property(retain, nonatomic) UIImageView *selectionIndicatorView; // @synthesize selectionIndicatorView=_selectionIndicatorView;
- (void)layoutUI;
- (void)layoutSubviews;
- (void)updateWithOptionValue:(unsigned int)arg1 optionName:(id)arg2 desc:(id)arg3 isSelected:(_Bool)arg4 enable:(_Bool)arg5;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

