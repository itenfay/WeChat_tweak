//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUILabel, NSString, UIView;

@interface MMFinderLiveFansGroupSettingTableCell
{
    _Bool _isSwitchOn;
    _Bool _isReserved;
    NSString *_leftTitle;
    unsigned long long _settingType;
    CDUnknownBlockType _valueChangeCallback;
    MMUILabel *_leftTitleLabel;
    UIView *_rightView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *rightView; // @synthesize rightView=_rightView;
@property(retain, nonatomic) MMUILabel *leftTitleLabel; // @synthesize leftTitleLabel=_leftTitleLabel;
@property(copy, nonatomic) CDUnknownBlockType valueChangeCallback; // @synthesize valueChangeCallback=_valueChangeCallback;
@property(nonatomic) _Bool isReserved; // @synthesize isReserved=_isReserved;
@property(nonatomic) _Bool isSwitchOn; // @synthesize isSwitchOn=_isSwitchOn;
@property(nonatomic) unsigned long long settingType; // @synthesize settingType=_settingType;
@property(retain, nonatomic) NSString *leftTitle; // @synthesize leftTitle=_leftTitle;
- (void)onReserveButtonClicked:(id)arg1;
- (void)switchDidChanged:(id)arg1;
- (void)updateReserveButtonTitleAndImage;
- (void)reportAudienceReserveLiveNotificationInfo:(long long)arg1;
- (void)layoutRightView;
- (void)layoutLeftTitleLabel;
- (void)layoutUI;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

