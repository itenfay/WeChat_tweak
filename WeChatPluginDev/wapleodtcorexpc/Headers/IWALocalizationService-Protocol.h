//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString, UIViewController;

@protocol IWALocalizationService <NSObject>
+ (id)getChangeTranslateUserData;
+ (void)changeTranslateLanguageWithUserData:(id)arg1 viewController:(UIViewController *)arg2;
+ (void)updateLanguage:(NSString *)arg1 forRefresh:(_Bool)arg2 withViewScene:(unsigned int)arg3 shouldChangeMainFrame:(_Bool)arg4;
+ (NSString *)localizedStringForKey:(NSString *)arg1;
@end

