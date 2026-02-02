//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIButton.h>

@class NSString, UILabel;

@interface WCDragBarButtonView : UIButton
{
    long long _option;
    UIButton *_iconView;
    UILabel *_textLabel;
    NSString *_title;
    NSString *_selectedTitle;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *selectedTitle; // @synthesize selectedTitle=_selectedTitle;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) UILabel *textLabel; // @synthesize textLabel=_textLabel;
@property(retain, nonatomic) UIButton *iconView; // @synthesize iconView=_iconView;
@property(nonatomic) long long option; // @synthesize option=_option;
- (void)setSelected:(_Bool)arg1;
- (double)dynamicFontSize;
- (void)layoutSubviews;
- (id)initWithImage:(id)arg1 selectedImage:(id)arg2 title:(id)arg3 selectedTitle:(id)arg4 bgColor:(id)arg5 selectedBGColor:(id)arg6;

@end

