//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class UIImageView, UILabel;

@interface LVMinimizeHintView : UIView
{
    _Bool _loading;
    unsigned long long _type;
    UIImageView *_iconView;
    UILabel *_textLabel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UILabel *textLabel; // @synthesize textLabel=_textLabel;
@property(retain, nonatomic) UIImageView *iconView; // @synthesize iconView=_iconView;
@property(nonatomic) _Bool loading; // @synthesize loading=_loading;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
- (void)updateDisplay:(unsigned long long)arg1 isLandscape:(_Bool)arg2;
- (void)layoutSubviews;
- (void)_setupUI;
- (id)initWithFrame:(struct CGRect)arg1;

@end

