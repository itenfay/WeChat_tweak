//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, UIColor, UIImage, WCActionSheetItemRedDotInfo;

@interface WCActionSheetItem : NSObject
{
    _Bool _bEnable;
    _Bool _bCustom;
    _Bool _bDestructiveButton;
    _Bool _bForbidAdjustFont;
    NSString *_title;
    UIColor *_titleColor;
    double _titleSize;
    NSString *_desc;
    UIColor *_descColor;
    double _descSize;
    UIImage *_iconImage;
    double _itemHeight;
    id _extraInfo;
    WCActionSheetItemRedDotInfo *_redDotInfo;
    CDUnknownBlockType _itemViewConfigAction;
    CDUnknownBlockType _eventAction;
    NSString *_accessibilityLabel;
    struct UIEdgeInsets _titleEdgeInsets;
    struct UIEdgeInsets _imageEdgeInsets;
    struct UIEdgeInsets _contentEdgeInsets;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *accessibilityLabel; // @synthesize accessibilityLabel=_accessibilityLabel;
@property(copy, nonatomic) CDUnknownBlockType eventAction; // @synthesize eventAction=_eventAction;
@property(copy, nonatomic) CDUnknownBlockType itemViewConfigAction; // @synthesize itemViewConfigAction=_itemViewConfigAction;
@property(retain, nonatomic) WCActionSheetItemRedDotInfo *redDotInfo; // @synthesize redDotInfo=_redDotInfo;
@property(retain, nonatomic) id extraInfo; // @synthesize extraInfo=_extraInfo;
@property(nonatomic) double itemHeight; // @synthesize itemHeight=_itemHeight;
@property(nonatomic) _Bool bForbidAdjustFont; // @synthesize bForbidAdjustFont=_bForbidAdjustFont;
@property(nonatomic) _Bool bDestructiveButton; // @synthesize bDestructiveButton=_bDestructiveButton;
@property(retain, nonatomic) UIImage *iconImage; // @synthesize iconImage=_iconImage;
@property(nonatomic) _Bool bCustom; // @synthesize bCustom=_bCustom;
@property(nonatomic) _Bool bEnable; // @synthesize bEnable=_bEnable;
@property(nonatomic) double descSize; // @synthesize descSize=_descSize;
@property(copy, nonatomic) UIColor *descColor; // @synthesize descColor=_descColor;
@property(copy, nonatomic) NSString *desc; // @synthesize desc=_desc;
@property(nonatomic) struct UIEdgeInsets contentEdgeInsets; // @synthesize contentEdgeInsets=_contentEdgeInsets;
@property(nonatomic) struct UIEdgeInsets imageEdgeInsets; // @synthesize imageEdgeInsets=_imageEdgeInsets;
@property(nonatomic) struct UIEdgeInsets titleEdgeInsets; // @synthesize titleEdgeInsets=_titleEdgeInsets;
@property(nonatomic) double titleSize; // @synthesize titleSize=_titleSize;
@property(copy, nonatomic) UIColor *titleColor; // @synthesize titleColor=_titleColor;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (double)getItemHeight;
- (id)initWithTitle:(id)arg1 fontSize:(double)arg2 fontColor:(id)arg3 WithDesc:(id)arg4 descFontSize:(double)arg5 descFontColor:(id)arg6 enable:(_Bool)arg7;
- (id)initWithTitle:(id)arg1;

@end

