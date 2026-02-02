//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface MMExtensionFileUtil : NSObject
{
}

+ (void)clearAllExtIdKeyReportFiles;
+ (id)getAllExtIdKeyReportFiles;
+ (void)clearAllExtFavFileTaskFiles;
+ (void)clearAllExtFavVideoTaskFiles;
+ (void)clearAllExtFavUrlTaskFiles;
+ (void)clearAllExtFavImgTaskFiles;
+ (id)getAllExtFavFileTaskFiles;
+ (id)getAllExtFavVideoTaskFiles;
+ (id)getAllExtFavUrlTaskFiles;
+ (id)getAllExtFavImgTaskFiles;
+ (_Bool)addMessageFailPostSessionDataToFile:(id)arg1 WithSessionID:(id)arg2 withTaskID:(unsigned long long)arg3;
+ (_Bool)removeMessagePostTaskIdDataWithSessionID:(id)arg1 withTaskID:(unsigned long long)arg2;
+ (id)getMessagePostTaskIdDataFailePathWithSessionID:(id)arg1 andTaskID:(id)arg2;
+ (id)getAllMessageFailSessionFile;
+ (_Bool)removeMessagePostMetaDataFilePathWithClientID:(id)arg1;
+ (id)getMessagePostMetaDataFilePathWithClientID:(id)arg1;
+ (_Bool)removeTimelineUploadTaskFileWithSessionID:(id)arg1 withTaskID:(unsigned long long)arg2;
+ (id)getWCUploadTaskWithTaskFilePath:(id)arg1;
+ (id)getAllExtWCUploadFailTaskFiles;
+ (id)getExtWCUploadTaskWithSessionID:(id)arg1 andTaskID:(unsigned long long)arg2;
+ (_Bool)clearPostCacheWithSessionID:(id)arg1;

@end

