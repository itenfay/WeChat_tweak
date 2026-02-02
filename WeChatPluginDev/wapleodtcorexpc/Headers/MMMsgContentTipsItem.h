//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray, NSString, UIColor, UIImage, UIView;

@interface MMMsgContentTipsItem : NSObject
{
    _Bool _showRightArrow;
    _Bool _allowLineBreak;
    _Bool _showCloseBtn;
    _Bool _disableClickState;
    _Bool _showBorder;
    unsigned int _voiceMsgClientId;
    long long _bizType;
    long long _style;
    NSString *_title;
    UIColor *_titleColor;
    UIImage *_iconImage;
    NSArray *_animationImages;
    double _animationDuration;
    id _userData;
    NSString *_topLineTitle;
    UIColor *_backgroundColor;
    NSString *_rightBtnText;
    NSString *_rightBtnConfirmText;
    NSString *_rightDescText;
    double _duration;
    UIColor *_rightArrowColor;
    UIColor *_borderColor;
    double _borderWidth;
    UIView *_expandView;
    NSString *_customMenuItemTitle;
    struct CGSize _iconSize;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *customMenuItemTitle; // @synthesize customMenuItemTitle=_customMenuItemTitle;
@property(nonatomic) unsigned int voiceMsgClientId; // @synthesize voiceMsgClientId=_voiceMsgClientId;
@property(retain, nonatomic) UIView *expandView; // @synthesize expandView=_expandView;
@property(nonatomic) double borderWidth; // @synthesize borderWidth=_borderWidth;
@property(retain, nonatomic) UIColor *borderColor; // @synthesize borderColor=_borderColor;
@property(nonatomic) _Bool showBorder; // @synthesize showBorder=_showBorder;
@property(retain, nonatomic) UIColor *rightArrowColor; // @synthesize rightArrowColor=_rightArrowColor;
@property(nonatomic) _Bool disableClickState; // @synthesize disableClickState=_disableClickState;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(retain, nonatomic) NSString *rightDescText; // @synthesize rightDescText=_rightDescText;
@property(retain, nonatomic) NSString *rightBtnConfirmText; // @synthesize rightBtnConfirmText=_rightBtnConfirmText;
@property(retain, nonatomic) NSString *rightBtnText; // @synthesize rightBtnText=_rightBtnText;
@property(nonatomic) _Bool showCloseBtn; // @synthesize showCloseBtn=_showCloseBtn;
@property(retain, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(nonatomic) _Bool allowLineBreak; // @synthesize allowLineBreak=_allowLineBreak;
@property(retain, nonatomic) NSString *topLineTitle; // @synthesize topLineTitle=_topLineTitle;
@property(retain, nonatomic) id userData; // @synthesize userData=_userData;
@property(nonatomic) _Bool showRightArrow; // @synthesize showRightArrow=_showRightArrow;
@property(nonatomic) double animationDuration; // @synthesize animationDuration=_animationDuration;
@property(retain, nonatomic) NSArray *animationImages; // @synthesize animationImages=_animationImages;
@property(nonatomic) struct CGSize iconSize; // @synthesize iconSize=_iconSize;
@property(retain, nonatomic) UIImage *iconImage; // @synthesize iconImage=_iconImage;
@property(retain, nonatomic) UIColor *titleColor; // @synthesize titleColor=_titleColor;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) long long style; // @synthesize style=_style;
@property(nonatomic) long long bizType; // @synthesize bizType=_bizType;
- (_Bool)isConsideredEqualForReport:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)init;

@end

