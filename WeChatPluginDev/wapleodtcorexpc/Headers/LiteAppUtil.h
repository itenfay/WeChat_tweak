//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface LiteAppUtil : NSObject
{
}

+ (_Bool)deleteFile:(id)arg1;
+ (_Bool)fileExist:(id)arg1;
+ (_Bool)getIsSystemBoldText;
+ (id)getSystemFontSize;
+ (id)getiOSVersion;
+ (id)getNetStr:(long long)arg1;
+ (unsigned long long)genCurrentTimeInMs;
+ (_Bool)versionGreater:(id)arg1 second:(id)arg2;
+ (id)splitEntry:(id)arg1 urlDecode:(_Bool)arg2;

@end

