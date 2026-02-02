//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMEasterEggNewYearActivityPageInfo, NSString, UIImage;

@interface MMEasterEggNewYearActivityMaterialInfo : NSObject
{
    unsigned long long _materialType;
    UIImage *_defaultBrandLogo;
    NSString *_defaultBrandName;
    NSString *_title;
    NSString *_subtitle;
    NSString *_buttonTitle;
    NSString *_defaultButtonTitle;
    unsigned long long _buttonPageType;
    MMEasterEggNewYearActivityPageInfo *_buttonPageInfo;
    NSString *_bottomLinkTitle;
    unsigned long long _bottomLinkPageType;
    MMEasterEggNewYearActivityPageInfo *_bottomLinkPageInfo;
    unsigned long long _materialId;
    NSString *_moneyAmount;
    unsigned long long _creativeType;
    NSString *_creativeURL;
    NSString *_thumbURL;
    UIImage *_defaultCover;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIImage *defaultCover; // @synthesize defaultCover=_defaultCover;
@property(retain, nonatomic) NSString *thumbURL; // @synthesize thumbURL=_thumbURL;
@property(retain, nonatomic) NSString *creativeURL; // @synthesize creativeURL=_creativeURL;
@property(nonatomic) unsigned long long creativeType; // @synthesize creativeType=_creativeType;
@property(retain, nonatomic) NSString *moneyAmount; // @synthesize moneyAmount=_moneyAmount;
@property(nonatomic) unsigned long long materialId; // @synthesize materialId=_materialId;
@property(retain, nonatomic) MMEasterEggNewYearActivityPageInfo *bottomLinkPageInfo; // @synthesize bottomLinkPageInfo=_bottomLinkPageInfo;
@property(nonatomic) unsigned long long bottomLinkPageType; // @synthesize bottomLinkPageType=_bottomLinkPageType;
@property(retain, nonatomic) NSString *bottomLinkTitle; // @synthesize bottomLinkTitle=_bottomLinkTitle;
@property(retain, nonatomic) MMEasterEggNewYearActivityPageInfo *buttonPageInfo; // @synthesize buttonPageInfo=_buttonPageInfo;
@property(nonatomic) unsigned long long buttonPageType; // @synthesize buttonPageType=_buttonPageType;
@property(retain, nonatomic) NSString *defaultButtonTitle; // @synthesize defaultButtonTitle=_defaultButtonTitle;
@property(retain, nonatomic) NSString *buttonTitle; // @synthesize buttonTitle=_buttonTitle;
@property(retain, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSString *defaultBrandName; // @synthesize defaultBrandName=_defaultBrandName;
@property(retain, nonatomic) UIImage *defaultBrandLogo; // @synthesize defaultBrandLogo=_defaultBrandLogo;
@property(nonatomic) unsigned long long materialType; // @synthesize materialType=_materialType;
- (_Bool)isValid;
- (id)initWithMaterial:(id)arg1;

@end

