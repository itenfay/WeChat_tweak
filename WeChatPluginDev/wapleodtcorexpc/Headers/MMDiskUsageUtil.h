//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface MMDiskUsageUtil : NSObject
{
}

+ (_Bool)RemoveUnneedDiskScanTrash;
+ (id)GetCurUserNameMD5;
+ (_Bool)SaveDataToFile:(id)arg1 withObject:(id)arg2 isPrintDescription:(_Bool)arg3;
+ (id)LoadDataFromFile:(id)arg1 forClass:(Class)arg2;
+ (unsigned long long)secondsSince1970;
+ (id)stringWithSecondsSince1970:(unsigned long long)arg1;
+ (id)decimalStringWithNumber:(id)arg1;
+ (_Bool)movePath:(id)arg1 to:(id)arg2;
+ (_Bool)removePath:(id)arg1;
+ (_Bool)pathExist:(id)arg1;
+ (_Bool)createDir:(id)arg1;
+ (void)recreatePathOfTrash;
+ (id)pathOfTrash;
+ (id)pathOfTrashFolder;
+ (id)pathOfTrashFile;
+ (int)randomInt;
+ (id)moveFolderToTmpTrash:(id)arg1 description:(id)arg2;
+ (id)moveFileToTmpTrash:(id)arg1 description:(id)arg2;
+ (id)DeleteBizUnknowDir:(id)arg1;
+ (id)DeleteBizDir:(id)arg1;
+ (id)DeleteBizUnknowFile:(id)arg1;
+ (id)DeleteBizFile:(id)arg1;
+ (_Bool)GetFileStat:(id)arg1 fileSize:(unsigned long long *)arg2 logicFileSize:(unsigned long long *)arg3 accessTime:(long long *)arg4 motifyTime:(long long *)arg5 changeTime:(long long *)arg6 birthTime:(long long *)arg7 inode:(unsigned long long *)arg8 nlink_t:(unsigned short *)arg9;
+ (_Bool)GetFolderName:(id)arg1 andFileName:(id)arg2 withPath:(const char *)arg3;

@end

