//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface TranslateToolUtils : NSObject
{
}

+ (void)notifyUserUseTranslate:(id)arg1;
+ (void)notifyUserOpenTranslateTool:(id)arg1;
+ (void)notifyExposeUseBtn:(id)arg1;
+ (void)notifyEnterNewSession;
+ (_Bool)isEnWord:(id)arg1;
+ (_Bool)isEnSentence:(id)arg1;
+ (_Bool)canShowTranslateTipView:(id)arg1;
+ (void)setTranslateTool:(id)arg1 dispalying:(_Bool)arg2;
+ (_Bool)isDispalyingTranslateTool:(id)arg1;
+ (void)setShowPlaceHolder;
+ (_Bool)hadShowPlaceHolder;
+ (void)setLastUseLanguageType:(id)arg1 chatName:(id)arg2;
+ (id)getLastUseLanguageType:(id)arg1;
+ (id)getLanguageDesWithType:(id)arg1;
+ (_Bool)isSupportLanguage:(id)arg1;
+ (id)getSupportLanguage;
+ (id)getDefaultLanguage;
+ (_Bool)IsOpenInputTranslating;

@end

