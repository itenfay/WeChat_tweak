//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface WPUtility : NSObject
{
}

+ (long long)getDecodeeTypeWith:(long long)arg1;
+ (id)stringWithPlayerDecoderType:(long long)arg1;
+ (id)getLibraryCachePath;
+ (id)getLogDirPath;
+ (id)getWritingLogDirPath;
+ (_Bool)isiOS13plus;
+ (unsigned long long)genCurrentTimeInMsFrom1970;
+ (unsigned long long)genCurrentTimeInMs;
+ (unsigned int)genCurrentTime;

@end

