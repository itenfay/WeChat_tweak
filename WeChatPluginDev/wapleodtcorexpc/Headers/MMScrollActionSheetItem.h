//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class CContact, NSString, UIColor, UIImage;

@interface MMScrollActionSheetItem : NSObject
{
    _Bool _disable;
    _Bool _isIconImgInDarkModeOnly;
    _Bool _disableDismissActionOnTapped;
    UIImage *_iconImg;
    UIImage *_cornerImg;
    UIColor *_backgroundColor;
    NSString *_originIconUrl;
    NSString *_title;
    NSString *_itemId;
    id _userInfo;
    double _alpha;
    long long _row;
    NSString *_subTitle;
    long long _titleMaxLine;
    long long _subTitleMaxLine;
    NSString *_accessibilityLabelWording;
    unsigned long long _redDotType;
    CDUnknownBlockType _action;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType action; // @synthesize action=_action;
@property(nonatomic) _Bool disableDismissActionOnTapped; // @synthesize disableDismissActionOnTapped=_disableDismissActionOnTapped;
@property(nonatomic) unsigned long long redDotType; // @synthesize redDotType=_redDotType;
@property(retain, nonatomic) NSString *accessibilityLabelWording; // @synthesize accessibilityLabelWording=_accessibilityLabelWording;
@property(nonatomic) long long subTitleMaxLine; // @synthesize subTitleMaxLine=_subTitleMaxLine;
@property(nonatomic) long long titleMaxLine; // @synthesize titleMaxLine=_titleMaxLine;
@property(retain, nonatomic) NSString *subTitle; // @synthesize subTitle=_subTitle;
@property(nonatomic) long long row; // @synthesize row=_row;
@property(nonatomic) double alpha; // @synthesize alpha=_alpha;
@property(nonatomic) _Bool isIconImgInDarkModeOnly; // @synthesize isIconImgInDarkModeOnly=_isIconImgInDarkModeOnly;
@property(nonatomic) _Bool disable; // @synthesize disable=_disable;
@property(retain, nonatomic) id userInfo; // @synthesize userInfo=_userInfo;
@property(retain, nonatomic) NSString *itemId; // @synthesize itemId=_itemId;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSString *originIconUrl; // @synthesize originIconUrl=_originIconUrl;
@property(retain, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(retain, nonatomic) UIImage *cornerImg; // @synthesize cornerImg=_cornerImg;
@property(retain, nonatomic) UIImage *iconImg; // @synthesize iconImg=_iconImg;
- (id)init;
@property(retain, nonatomic) CContact *oContact;
@property(nonatomic) int itemType;

@end

