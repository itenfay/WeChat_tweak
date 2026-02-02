//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class UILabel;

@interface WCFinderNotInterestedShortPanelView
{
    _Bool _highLight;
    UILabel *_tipsLabel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UILabel *tipsLabel; // @synthesize tipsLabel=_tipsLabel;
@property(nonatomic, getter=isHighLight) _Bool highLight; // @synthesize highLight=_highLight;
- (id)getTipsLabelText;
- (void)updateView;
- (void)setupSubViewsAndLayout;
- (void)setup;
- (id)initWithFrame:(struct CGRect)arg1;

@end

