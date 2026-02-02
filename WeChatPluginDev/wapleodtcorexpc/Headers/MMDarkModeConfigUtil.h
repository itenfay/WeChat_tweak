//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface MMDarkModeConfigUtil : NSObject
{
}

+ (_Bool)isDarkMode;
+ (long long)currentDarkModeConfigType;
+ (_Bool)changeDarkModeConfigType:(long long)arg1;

@end

