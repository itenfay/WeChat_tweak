//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSBundle, NSString;

@protocol IWCLocalization <NSObject>
+ (void)updateLanguage:(NSString *)arg1 forRefresh:(_Bool)arg2 withViewScene:(unsigned int)arg3 shouldChangeMainFrame:(_Bool)arg4;
+ (NSString *)localizedStringForKey:(NSString *)arg1;

@optional
+ (NSBundle *)getWeAppSDKBundle;
@end

