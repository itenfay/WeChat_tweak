//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, NSURL, UIColor, UIFont, UIImage, UIView;

@interface WCFinderStaticCoverInfoItem : NSObject
{
    _Bool _needRoundCorner;
    _Bool _needBlur;
    NSString *_text;
    UIImage *_icon;
    NSURL *_iconUrl;
    CDUnknownBlockType _iconGenerator;
    long long _iconPosition;
    double _flexShrink;
    UIColor *_textColor;
    UIFont *_titleFont;
    UIColor *_blurColor;
    NSString *_accessibilityLabel;
    double _iconMarginRight;
    UIView *_customView;
    double _flexGrow;
    struct WCFinderDynamicIcon _dynamicIcon;
    struct CGSize _iconSize;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(nonatomic) double flexGrow; // @synthesize flexGrow=_flexGrow;
@property(retain, nonatomic) UIView *customView; // @synthesize customView=_customView;
@property(nonatomic) double iconMarginRight; // @synthesize iconMarginRight=_iconMarginRight;
@property(nonatomic) _Bool needBlur; // @synthesize needBlur=_needBlur;
@property(nonatomic) _Bool needRoundCorner; // @synthesize needRoundCorner=_needRoundCorner;
@property(retain, nonatomic) NSString *accessibilityLabel; // @synthesize accessibilityLabel=_accessibilityLabel;
@property(retain, nonatomic) UIColor *blurColor; // @synthesize blurColor=_blurColor;
@property(retain, nonatomic) UIFont *titleFont; // @synthesize titleFont=_titleFont;
@property(retain, nonatomic) UIColor *textColor; // @synthesize textColor=_textColor;
@property(nonatomic) double flexShrink; // @synthesize flexShrink=_flexShrink;
@property(nonatomic) long long iconPosition; // @synthesize iconPosition=_iconPosition;
@property(nonatomic) struct CGSize iconSize; // @synthesize iconSize=_iconSize;
@property(copy, nonatomic) CDUnknownBlockType iconGenerator; // @synthesize iconGenerator=_iconGenerator;
@property(retain, nonatomic) NSURL *iconUrl; // @synthesize iconUrl=_iconUrl;
@property(nonatomic) struct WCFinderDynamicIcon dynamicIcon; // @synthesize dynamicIcon=_dynamicIcon;
@property(retain, nonatomic) UIImage *icon; // @synthesize icon=_icon;
@property(retain, nonatomic) NSString *text; // @synthesize text=_text;
@property(readonly, nonatomic) _Bool isValied;
- (id)init;

@end

