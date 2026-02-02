//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WALocalizationProxy : NSObject
{
}

+ (id)getChangeTranslateUserData;
+ (void)changeTranslateLanguageWithUserData:(id)arg1 viewController:(id)arg2;
+ (id)getTranslateLanguageVCInstance;
+ (void)setTranslateLanguageVCInstance:(id)arg1;
+ (void)updateLanguage:(id)arg1 forRefresh:(_Bool)arg2 withViewScene:(unsigned int)arg3 shouldChangeMainFrame:(_Bool)arg4;
+ (id)localizedStringForKey:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

