//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSFileHandle, NSString;

@interface TPBaseFile : NSObject
{
    _Bool _fileOpen;
    _Bool _forUpdating;
    NSFileHandle *_fileHandle;
    NSString *_filePath;
}

+ (_Bool)writeDataToPath:(id)arg1 Offset:(long long)arg2 Data:(id)arg3;
+ (_Bool)appendData:(id)arg1 toPath:(id)arg2;
+ (_Bool)removeFile:(id)arg1;
+ (void)ensureCreateParentDir:(id)arg1;
+ (_Bool)copyFile:(id)arg1 To:(id)arg2;
+ (_Bool)createFile:(id)arg1;
+ (_Bool)createPath:(id)arg1;
+ (id)loadDataFromPathEx:(id)arg1 Offset:(unsigned long long)arg2 MaxLen:(unsigned long long)arg3;
+ (long long)getFileSize:(id)arg1;
+ (_Bool)fileExist:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) _Bool forUpdating; // @synthesize forUpdating=_forUpdating;
@property(nonatomic) _Bool fileOpen; // @synthesize fileOpen=_fileOpen;
@property(retain, nonatomic) NSString *filePath; // @synthesize filePath=_filePath;
@property(retain, nonatomic) NSFileHandle *fileHandle; // @synthesize fileHandle=_fileHandle;
- (_Bool)writeLargeData:(id)arg1;
- (_Bool)writeData:(id)arg1;
- (unsigned long long)seekToEndOfFile;
- (_Bool)open;
- (_Bool)seek:(long long)arg1;
- (_Bool)isOpen;
- (_Bool)setFileInfo:(id)arg1 forUpdating:(_Bool)arg2;
- (_Bool)readData:(id)arg1 Len:(unsigned long long)arg2;
- (void)close;

@end

