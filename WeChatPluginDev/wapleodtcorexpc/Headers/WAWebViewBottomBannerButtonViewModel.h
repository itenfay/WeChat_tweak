//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, UIColor, UIFont, UIImage;

@interface WAWebViewBottomBannerButtonViewModel
{
    NSString *_title;
    double _cornerRadius;
    UIFont *_titleFont;
    UIColor *_backgroundColor;
    UIColor *_titleColor;
    UIImage *_highlightImage;
    double _maxWitdh;
    unsigned long long _index;
    double _buttonTitleSpacing;
    double _buttonHeight;
}

- (void).cxx_destruct;
@property(nonatomic) double buttonHeight; // @synthesize buttonHeight=_buttonHeight;
@property(nonatomic) double buttonTitleSpacing; // @synthesize buttonTitleSpacing=_buttonTitleSpacing;
@property(nonatomic) unsigned long long index; // @synthesize index=_index;
@property(nonatomic) double maxWitdh; // @synthesize maxWitdh=_maxWitdh;
@property(retain, nonatomic) UIImage *highlightImage; // @synthesize highlightImage=_highlightImage;
@property(retain, nonatomic) UIColor *titleColor; // @synthesize titleColor=_titleColor;
@property(retain, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(retain, nonatomic) UIFont *titleFont; // @synthesize titleFont=_titleFont;
@property(nonatomic) double cornerRadius; // @synthesize cornerRadius=_cornerRadius;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
- (double)calculateButtonWidth;
- (id)init;

@end

