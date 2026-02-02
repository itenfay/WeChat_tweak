//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUIButton, MMUILabel, UIImageView;
@protocol MMLimitedModeGuardianEntryViewDelegate;

@interface MMLimitedModeGuardianEntryView
{
    MMUIButton *m_button;
    MMUILabel *m_titleLabel;
    UIImageView *m_arrowView;
    MMUILabel *m_descLabel;
    id <MMLimitedModeGuardianEntryViewDelegate> _m_delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <MMLimitedModeGuardianEntryViewDelegate> m_delegate; // @synthesize m_delegate=_m_delegate;
@property(retain, nonatomic) MMUILabel *m_descLabel; // @synthesize m_descLabel;
- (void)clickSetLimitedModeGuardian;
- (void)updateWihtDisplayName:(id)arg1;
- (void)initView;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

