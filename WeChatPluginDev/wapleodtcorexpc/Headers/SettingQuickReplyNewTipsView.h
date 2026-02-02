//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMUICellSwitch, MMUILabel, UIImageView;

@interface SettingQuickReplyNewTipsView : UIView
{
    MMUILabel *_titleLabel;
    MMUICellSwitch *_switcher;
    UIImageView *_bubbleBgView;
    UIView *_redDotView;
    MMUILabel *_tipsLabel;
    UIView *_bottomLine;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *bottomLine; // @synthesize bottomLine=_bottomLine;
@property(retain, nonatomic) MMUILabel *tipsLabel; // @synthesize tipsLabel=_tipsLabel;
@property(retain, nonatomic) UIView *redDotView; // @synthesize redDotView=_redDotView;
@property(retain, nonatomic) UIImageView *bubbleBgView; // @synthesize bubbleBgView=_bubbleBgView;
@property(retain, nonatomic) MMUICellSwitch *switcher; // @synthesize switcher=_switcher;
@property(retain, nonatomic) MMUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (struct CGSize)sizeToFitWidth:(double)arg1;
- (void)setSwitcherOn:(_Bool)arg1;
- (void)setSwitchTarget:(id)arg1 action:(SEL)arg2;
- (void)setTitle:(id)arg1 tips:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end

