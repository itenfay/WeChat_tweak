//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, UIColor;

@interface MMEasterEggNewYearActivityInfo
{
    _Bool _useLightStyle;
    UIColor *_backgroundColor;
    NSString *_backgroundLogoFilePath;
    NSString *_bottomMainTitle;
    UIColor *_bottomMainTitleColor;
    NSString *_bottomSubTitle;
    UIColor *_bottomSubTitleColor;
    NSString *_brandName;
    NSString *_brandLogoFilePath;
    NSString *_transitionLoadingFilePath;
    UIColor *_buttonBackgroundColor;
    UIColor *_buttonForegroundColor;
    NSString *_defaultButtonTitle;
    NSString *_defaultCoverFilePath;
}

+ (id)activityNodeName;
- (void).cxx_destruct;
@property(nonatomic) _Bool useLightStyle; // @synthesize useLightStyle=_useLightStyle;
@property(retain, nonatomic) NSString *defaultCoverFilePath; // @synthesize defaultCoverFilePath=_defaultCoverFilePath;
@property(retain, nonatomic) NSString *defaultButtonTitle; // @synthesize defaultButtonTitle=_defaultButtonTitle;
@property(retain, nonatomic) UIColor *buttonForegroundColor; // @synthesize buttonForegroundColor=_buttonForegroundColor;
@property(retain, nonatomic) UIColor *buttonBackgroundColor; // @synthesize buttonBackgroundColor=_buttonBackgroundColor;
@property(retain, nonatomic) NSString *transitionLoadingFilePath; // @synthesize transitionLoadingFilePath=_transitionLoadingFilePath;
@property(retain, nonatomic) NSString *brandLogoFilePath; // @synthesize brandLogoFilePath=_brandLogoFilePath;
@property(retain, nonatomic) NSString *brandName; // @synthesize brandName=_brandName;
@property(retain, nonatomic) UIColor *bottomSubTitleColor; // @synthesize bottomSubTitleColor=_bottomSubTitleColor;
@property(retain, nonatomic) NSString *bottomSubTitle; // @synthesize bottomSubTitle=_bottomSubTitle;
@property(retain, nonatomic) UIColor *bottomMainTitleColor; // @synthesize bottomMainTitleColor=_bottomMainTitleColor;
@property(retain, nonatomic) NSString *bottomMainTitle; // @synthesize bottomMainTitle=_bottomMainTitle;
@property(retain, nonatomic) NSString *backgroundLogoFilePath; // @synthesize backgroundLogoFilePath=_backgroundLogoFilePath;
@property(retain, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
- (id)description;
- (_Bool)isValid;
- (void)tryParseURLStringFromActivityNode:(struct XmlReaderNode_t *)arg1 directoryPath:(id)arg2;
- (id)initWithActivityNode:(struct XmlReaderNode_t *)arg1 directoryPath:(id)arg2 clientEggVersion:(unsigned long long)arg3;
- (id)accessibilityLabel;
- (Class)activityClass;

@end

