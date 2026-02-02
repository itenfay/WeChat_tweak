//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUILabel, NSString, UIView;

@interface MMLiveLotteryGiftDistributeTypeCell
{
    unsigned int _optionValue;
    UIView *_bgView;
    MMUILabel *_optionNameLabel;
    MMUILabel *_descLabel;
    NSString *_optionName;
    NSString *_desc;
}

+ (id)identifier;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *desc; // @synthesize desc=_desc;
@property(retain, nonatomic) NSString *optionName; // @synthesize optionName=_optionName;
@property(nonatomic) unsigned int optionValue; // @synthesize optionValue=_optionValue;
@property(retain, nonatomic) MMUILabel *descLabel; // @synthesize descLabel=_descLabel;
@property(retain, nonatomic) MMUILabel *optionNameLabel; // @synthesize optionNameLabel=_optionNameLabel;
@property(retain, nonatomic) UIView *bgView; // @synthesize bgView=_bgView;
- (void)layoutUI;
- (void)layoutSubviews;
- (void)updateWithOptionValue:(unsigned int)arg1 optionName:(id)arg2 desc:(id)arg3 isSelected:(_Bool)arg4;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

