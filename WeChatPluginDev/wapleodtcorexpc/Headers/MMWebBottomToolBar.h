//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class UIButton;

@interface MMWebBottomToolBar : UIView
{
    UIButton *_backButton;
    UIButton *_forwardButton;
    UIView *_lineView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *lineView; // @synthesize lineView=_lineView;
@property(retain, nonatomic) UIButton *forwardButton; // @synthesize forwardButton=_forwardButton;
@property(retain, nonatomic) UIButton *backButton; // @synthesize backButton=_backButton;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

