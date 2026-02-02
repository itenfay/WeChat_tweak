//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface TencentIndoorRoadFileManager : NSObject
{
    NSString *_roadRootPath;
    NSString *_destPath;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
@property(copy) NSString *destPath; // @synthesize destPath=_destPath;
@property(copy, nonatomic) NSString *roadRootPath; // @synthesize roadRootPath=_roadRootPath;
- (void)writeDataToFile:(id)arg1 filePath:(id)arg2;
- (void)deletOldVersionData:(id)arg1 curVersion:(int)arg2;
- (void)deletWithPath:(id)arg1;
- (_Bool)saveIndoorRoadData:(id)arg1 withBuildid:(id)arg2;
- (id)getUnzipFilePath;
- (id)getDataVersionWithBuildID:(id)arg1;
- (id)init;

@end

