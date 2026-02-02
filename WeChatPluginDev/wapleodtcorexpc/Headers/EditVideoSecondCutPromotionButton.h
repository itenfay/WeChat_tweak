//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUIImageView, MMUILabel, UIStackView;

@interface EditVideoSecondCutPromotionButton
{
    long long currentEntryType;
    UIStackView *stackView;
    MMUIImageView *secondCutLogo;
    MMUILabel *textLabel;
    MMUIImageView *arrowImageView;
    unsigned long long _editVideoEntrance;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long editVideoEntrance; // @synthesize editVideoEntrance=_editVideoEntrance;
@property(retain, nonatomic) MMUIImageView *arrowImageView; // @synthesize arrowImageView;
@property(retain, nonatomic) MMUILabel *textLabel; // @synthesize textLabel;
@property(retain, nonatomic) MMUIImageView *secondCutLogo; // @synthesize secondCutLogo;
@property(retain, nonatomic) UIStackView *stackView; // @synthesize stackView;
@property(nonatomic) long long currentEntryType; // @synthesize currentEntryType;
- (void)sizeToFit;
- (void)updateEntryType:(long long)arg1;
- (long long)getCurrentEntryType;
- (void)_initArrowImageView;
- (void)_initTextLabel;
- (void)_initSecondCutLogo;
- (void)_initStackView;
- (id)initWithFrame:(struct CGRect)arg1;

@end

