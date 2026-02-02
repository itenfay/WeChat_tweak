//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, UIColor, UIFont, UIImage;

@interface MMTerminatorViewParams : NSObject
{
    _Bool _isIconImageUserInteractionEnabled;
    _Bool _isTitleUserInteractionEnabled;
    _Bool _isSubtitleUserInteractionEnabled;
    UIImage *_iconImage;
    UIColor *_lineColor;
    NSString *_title;
    UIFont *_titleFont;
    UIColor *_titleColor;
    NSString *_subtitle;
    UIFont *_subtitleFont;
    UIColor *_subtitleColor;
}

+ (id)defaultParams;
- (void).cxx_destruct;
@property(nonatomic) _Bool isSubtitleUserInteractionEnabled; // @synthesize isSubtitleUserInteractionEnabled=_isSubtitleUserInteractionEnabled;
@property(retain, nonatomic) UIColor *subtitleColor; // @synthesize subtitleColor=_subtitleColor;
@property(retain, nonatomic) UIFont *subtitleFont; // @synthesize subtitleFont=_subtitleFont;
@property(retain, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(nonatomic) _Bool isTitleUserInteractionEnabled; // @synthesize isTitleUserInteractionEnabled=_isTitleUserInteractionEnabled;
@property(retain, nonatomic) UIColor *titleColor; // @synthesize titleColor=_titleColor;
@property(retain, nonatomic) UIFont *titleFont; // @synthesize titleFont=_titleFont;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) _Bool isIconImageUserInteractionEnabled; // @synthesize isIconImageUserInteractionEnabled=_isIconImageUserInteractionEnabled;
@property(retain, nonatomic) UIColor *lineColor; // @synthesize lineColor=_lineColor;
@property(retain, nonatomic) UIImage *iconImage; // @synthesize iconImage=_iconImage;

@end

