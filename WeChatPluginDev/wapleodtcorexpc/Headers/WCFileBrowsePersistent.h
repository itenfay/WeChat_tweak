//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface WCFileBrowsePersistent : NSObject
{
}

+ (id)getDateWithYear:(long long)arg1 month:(long long)arg2 day:(long long)arg3;
+ (id)getDateWithoutHMS:(id)arg1;
+ (int)getVersionNumberOfDB;
+ (void)setVersionNumberOfDB:(int)arg1;
+ (void)setStateOfFileBrowseBuildProgress:(unsigned long long)arg1;
+ (unsigned long long)getStateOfFileBrowseBuildProgress;
+ (void)resetStateOfFileBrowseBuildProgress;
+ (_Bool)saveFileBrowseTask:(id)arg1;
+ (id)getFileBrowseTask;
+ (_Bool)cleanFileBrowseTask;
+ (_Bool)hasFileBrowseTask;
+ (id)getRelatedMemoryKV;
+ (id)getPathOfTaskInfo;
+ (id)getPathOfBrowseInfoDB;

@end

