//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class UIColor, UIImageView, UILabel;

@interface MMLiveSlottedTextFieldSlotView : UIView
{
    _Bool _selected;
    _Bool _invalid;
    UILabel *_label;
    UIImageView *_imageView;
    UIColor *_borderColor;
    UIColor *_selectedBorderColor;
    UIColor *_invalidSelectedBorderColor;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool invalid; // @synthesize invalid=_invalid;
@property(nonatomic) _Bool selected; // @synthesize selected=_selected;
@property(retain, nonatomic) UIColor *invalidSelectedBorderColor; // @synthesize invalidSelectedBorderColor=_invalidSelectedBorderColor;
@property(retain, nonatomic) UIColor *selectedBorderColor; // @synthesize selectedBorderColor=_selectedBorderColor;
@property(retain, nonatomic) UIColor *borderColor; // @synthesize borderColor=_borderColor;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) UILabel *label; // @synthesize label=_label;
- (void)updateBorder;
- (void)layoutSubviews;
@property(nonatomic) _Bool useImage;
- (id)initWithFrame:(struct CGRect)arg1;

@end

