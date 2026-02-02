//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, UIColor;

@interface MMFinderLivePickerViewConfig : NSObject
{
    _Bool _blurContentBackground;
    NSString *_title;
    UIColor *_titleColor;
    NSString *_cancelTitle;
    UIColor *_cancelTitleColor;
    NSString *_confirmTitle;
    UIColor *_confirmTitleColor;
    UIColor *_contentBackgroundColor;
    UIColor *_backgroundColor;
    UIColor *_rowHighlightedColor;
    double _rowHeight;
}

- (void).cxx_destruct;
@property(nonatomic) double rowHeight; // @synthesize rowHeight=_rowHeight;
@property(retain, nonatomic) UIColor *rowHighlightedColor; // @synthesize rowHighlightedColor=_rowHighlightedColor;
@property(nonatomic) _Bool blurContentBackground; // @synthesize blurContentBackground=_blurContentBackground;
@property(retain, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(retain, nonatomic) UIColor *contentBackgroundColor; // @synthesize contentBackgroundColor=_contentBackgroundColor;
@property(retain, nonatomic) UIColor *confirmTitleColor; // @synthesize confirmTitleColor=_confirmTitleColor;
@property(retain, nonatomic) NSString *confirmTitle; // @synthesize confirmTitle=_confirmTitle;
@property(retain, nonatomic) UIColor *cancelTitleColor; // @synthesize cancelTitleColor=_cancelTitleColor;
@property(retain, nonatomic) NSString *cancelTitle; // @synthesize cancelTitle=_cancelTitle;
@property(retain, nonatomic) UIColor *titleColor; // @synthesize titleColor=_titleColor;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
- (id)init;

@end

