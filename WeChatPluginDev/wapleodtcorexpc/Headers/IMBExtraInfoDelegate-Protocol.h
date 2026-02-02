//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString;

@protocol IMBExtraInfoDelegate <NSObject>

@optional
- (void)onLanguageChanged:(NSString *)arg1;
- (void)onThemeChanged:(NSString *)arg1;
@end

