//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class UIImageView, UILabel, UIView;

@interface MMLiveHeatAndIconButton
{
    UIImageView *_iconView;
    UILabel *_heatLabel;
    UIView *_lineView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *lineView; // @synthesize lineView=_lineView;
@property(retain, nonatomic) UILabel *heatLabel; // @synthesize heatLabel=_heatLabel;
@property(retain, nonatomic) UIImageView *iconView; // @synthesize iconView=_iconView;
- (void)updateWithHeatText:(id)arg1 icon:(id)arg2;

@end

