//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, UIColor, UIImage;

@interface MMMultiMenuItem : NSObject
{
    _Bool _bIsLoading;
    _Bool _bothShowIconAndTitle;
    _Bool _configCustomMenuButton;
    long long _editingStyle;
    UIColor *_backgroundColor;
    NSString *_nsTitle;
    UIImage *_icon;
    UIImage *_highlightedIcon;
    double _menuItemWidth;
    MMMultiMenuItem *_confirmMenuItem;
    UIColor *_titleColor;
    double _titleFontSize;
    double _menuContentLeftMargin;
    CDUnknownBlockType _getMenuButtonCallback;
    CDUnknownBlockType _clickAction;
    CDUnknownBlockType _buttonExtraConfigBlock;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType buttonExtraConfigBlock; // @synthesize buttonExtraConfigBlock=_buttonExtraConfigBlock;
@property(copy, nonatomic) CDUnknownBlockType clickAction; // @synthesize clickAction=_clickAction;
@property(copy, nonatomic) CDUnknownBlockType getMenuButtonCallback; // @synthesize getMenuButtonCallback=_getMenuButtonCallback;
@property(nonatomic) _Bool configCustomMenuButton; // @synthesize configCustomMenuButton=_configCustomMenuButton;
@property(nonatomic) double menuContentLeftMargin; // @synthesize menuContentLeftMargin=_menuContentLeftMargin;
@property(nonatomic) double titleFontSize; // @synthesize titleFontSize=_titleFontSize;
@property(retain, nonatomic) UIColor *titleColor; // @synthesize titleColor=_titleColor;
@property(retain, nonatomic) MMMultiMenuItem *confirmMenuItem; // @synthesize confirmMenuItem=_confirmMenuItem;
@property(nonatomic) _Bool bothShowIconAndTitle; // @synthesize bothShowIconAndTitle=_bothShowIconAndTitle;
@property(nonatomic) _Bool bIsLoading; // @synthesize bIsLoading=_bIsLoading;
@property(nonatomic) double menuItemWidth; // @synthesize menuItemWidth=_menuItemWidth;
@property(retain, nonatomic) UIImage *highlightedIcon; // @synthesize highlightedIcon=_highlightedIcon;
@property(retain, nonatomic) UIImage *icon; // @synthesize icon=_icon;
@property(retain, nonatomic) NSString *nsTitle; // @synthesize nsTitle=_nsTitle;
@property(retain, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(nonatomic) long long editingStyle; // @synthesize editingStyle=_editingStyle;

@end

