//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, UIImage;

@interface MMListCellConfig : NSObject
{
    _Bool _accessoryModeOn;
    _Bool _hidden;
    NSString *_title;
    NSString *_subtitle;
    long long _accessoryType;
    long long _cellType;
    UIImage *_image;
    id _accessoryTarget;
    SEL _accessoryAction;
    double _textMaxWidth;
    double _imageToTextPadding;
    NSString *_pathKey;
    struct UIEdgeInsets _cellEdgeInsets;
}

+ (id)cellWithTitle:(id)arg1 subtitle:(id)arg2 image:(id)arg3;
+ (id)cellWithDescription:(id)arg1;
+ (id)cellWithTitle:(id)arg1 rightSubtitle:(id)arg2 accessoryType:(long long)arg3 accessoryTarget:(id)arg4 accessoryAction:(SEL)arg5;
+ (id)cellWithTitle:(id)arg1 subtitle:(id)arg2 accessoryType:(long long)arg3 accessoryTarget:(id)arg4 accessoryAction:(SEL)arg5 pathKey:(id)arg6;
+ (id)cellWithTitle:(id)arg1 subtitle:(id)arg2 accessoryType:(long long)arg3 accessoryTarget:(id)arg4 accessoryAction:(SEL)arg5;
+ (id)cellWithText:(id)arg1 accessoryType:(long long)arg2 accessoryTarget:(id)arg3 accessoryAction:(SEL)arg4;
+ (id)cellWithText:(id)arg1 accessoryType:(long long)arg2;
+ (id)cellWithTitle:(id)arg1 subtitle:(id)arg2;
+ (id)cellWithImage:(id)arg1;
+ (id)cellWithText:(id)arg1;
+ (id)cellWithType:(long long)arg1 title:(id)arg2 image:(id)arg3 subtitle:(id)arg4 accessoryType:(long long)arg5 accessoryTarget:(id)arg6 accessoryAction:(SEL)arg7 pathKey:(id)arg8;
+ (id)cellWithType:(long long)arg1 title:(id)arg2 image:(id)arg3 subtitle:(id)arg4 accessoryType:(long long)arg5 accessoryTarget:(id)arg6 accessoryAction:(SEL)arg7;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *pathKey; // @synthesize pathKey=_pathKey;
@property(nonatomic) double imageToTextPadding; // @synthesize imageToTextPadding=_imageToTextPadding;
@property(nonatomic) struct UIEdgeInsets cellEdgeInsets; // @synthesize cellEdgeInsets=_cellEdgeInsets;
@property(nonatomic) _Bool hidden; // @synthesize hidden=_hidden;
@property(nonatomic) double textMaxWidth; // @synthesize textMaxWidth=_textMaxWidth;
@property(nonatomic) _Bool accessoryModeOn; // @synthesize accessoryModeOn=_accessoryModeOn;
@property(nonatomic) SEL accessoryAction; // @synthesize accessoryAction=_accessoryAction;
@property(nonatomic) __weak id accessoryTarget; // @synthesize accessoryTarget=_accessoryTarget;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
@property(nonatomic) long long cellType; // @synthesize cellType=_cellType;
@property(nonatomic) long long accessoryType; // @synthesize accessoryType=_accessoryType;
@property(copy, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;

@end

