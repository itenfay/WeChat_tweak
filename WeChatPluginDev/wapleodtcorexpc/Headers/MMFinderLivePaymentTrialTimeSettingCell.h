//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUILabel, UIImageView;

@interface MMFinderLivePaymentTrialTimeSettingCell
{
    unsigned int _curTrialTimeHour;
    unsigned int _curTrialTimeMinute;
    long long _purchaseLivePreviewType;
    MMUILabel *_titleLabel;
    MMUILabel *_durationLabel;
    UIImageView *_arrowIconView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIImageView *arrowIconView; // @synthesize arrowIconView=_arrowIconView;
@property(retain, nonatomic) MMUILabel *durationLabel; // @synthesize durationLabel=_durationLabel;
@property(retain, nonatomic) MMUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) unsigned int curTrialTimeMinute; // @synthesize curTrialTimeMinute=_curTrialTimeMinute;
@property(nonatomic) unsigned int curTrialTimeHour; // @synthesize curTrialTimeHour=_curTrialTimeHour;
@property(nonatomic) long long purchaseLivePreviewType; // @synthesize purchaseLivePreviewType=_purchaseLivePreviewType;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (id)getFormatTrialTimeString;
- (void)updateTrialTimeHour:(unsigned int)arg1 trialTimeMinute:(unsigned int)arg2;
- (void)layoutUI;
- (void)layoutSubviews;
- (void)initViews;
- (id)initWithFrame:(struct CGRect)arg1 purchaseLivePreviewType:(long long)arg2 curTrialTimeHour:(unsigned int)arg3 curTrialTimeMinute:(unsigned int)arg4;

@end

