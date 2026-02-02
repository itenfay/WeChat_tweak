//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class UILabel;

@interface WCFinderPanMaskView
{
    UILabel *_currTimeLabel;
    UILabel *_speLabel;
    UILabel *_totalTimeLabel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UILabel *totalTimeLabel; // @synthesize totalTimeLabel=_totalTimeLabel;
@property(retain, nonatomic) UILabel *speLabel; // @synthesize speLabel=_speLabel;
@property(retain, nonatomic) UILabel *currTimeLabel; // @synthesize currTimeLabel=_currTimeLabel;
- (void)layoutSubviews;
- (void)updateWithCurStr:(id)arg1 totalStr:(id)arg2;
- (id)createLabel;
- (void)setupLayout;
- (void)setup;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;

@end

