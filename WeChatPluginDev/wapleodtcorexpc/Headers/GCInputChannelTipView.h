//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class UIButton;

@interface GCInputChannelTipView : UIView
{
    UIButton *_titleBtn;
    UIButton *_deSelectBtn;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIButton *deSelectBtn; // @synthesize deSelectBtn=_deSelectBtn;
@property(retain, nonatomic) UIButton *titleBtn; // @synthesize titleBtn=_titleBtn;
- (void)layoutSubviews;
- (void)configureText:(id)arg1 showBtn:(_Bool)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end

