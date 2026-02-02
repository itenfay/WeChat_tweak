//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, WCAdCardBtnInfo;

@interface WCAdTagButtonInfo : NSObject
{
    int _basicRemWidth;
    int _basicRootFontSize;
    NSString *_bgImageUrl;
    NSString *_bgImageUrlDark;
    double _layoutWidth;
    double _layoutHeight;
    double _cornerRadius;
    NSString *_iconUrl;
    NSString *_iconUrlDark;
    NSString *_title;
    NSString *_titleColor;
    double _titleColorAlpha;
    NSString *_titleColorDark;
    double _titleColorAlphaDark;
    WCAdCardBtnInfo *_clickActionInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCAdCardBtnInfo *clickActionInfo; // @synthesize clickActionInfo=_clickActionInfo;
@property(nonatomic) double titleColorAlphaDark; // @synthesize titleColorAlphaDark=_titleColorAlphaDark;
@property(retain, nonatomic) NSString *titleColorDark; // @synthesize titleColorDark=_titleColorDark;
@property(nonatomic) double titleColorAlpha; // @synthesize titleColorAlpha=_titleColorAlpha;
@property(retain, nonatomic) NSString *titleColor; // @synthesize titleColor=_titleColor;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSString *iconUrlDark; // @synthesize iconUrlDark=_iconUrlDark;
@property(retain, nonatomic) NSString *iconUrl; // @synthesize iconUrl=_iconUrl;
@property(nonatomic) int basicRootFontSize; // @synthesize basicRootFontSize=_basicRootFontSize;
@property(nonatomic) int basicRemWidth; // @synthesize basicRemWidth=_basicRemWidth;
@property(nonatomic) double cornerRadius; // @synthesize cornerRadius=_cornerRadius;
@property(nonatomic) double layoutHeight; // @synthesize layoutHeight=_layoutHeight;
@property(nonatomic) double layoutWidth; // @synthesize layoutWidth=_layoutWidth;
@property(retain, nonatomic) NSString *bgImageUrlDark; // @synthesize bgImageUrlDark=_bgImageUrlDark;
@property(retain, nonatomic) NSString *bgImageUrl; // @synthesize bgImageUrl=_bgImageUrl;
- (_Bool)isValid;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

