//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface WCUpdateBootsUtil : NSObject
{
}

+ (id)getUpdateDataFilePathWithVersion:(id)arg1;
+ (id)getUpdateInfoFilePathWithVersion:(id)arg1;
+ (id)getCustomVersionUpdateDir:(id)arg1;
+ (id)getWeChatUUID;
+ (id)getUpdateDataFilePath;
+ (id)getUpdateInfoFilePath;
+ (id)getCurVersionUpdateDir;
+ (id)getDirOfBootsUpdate;

@end

