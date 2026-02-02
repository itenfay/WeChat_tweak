//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface ZipArchive : NSObject
{
    void *_zipFile;
    void *_unzFile;
    NSString *_unzipFilePath;
    NSString *_password;
    id _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) id delegate; // @synthesize delegate=_delegate;
- (id)Date1980;
- (_Bool)OverWrite:(id)arg1;
- (void)OutputErrorMessage:(id)arg1;
- (_Bool)UnzipCloseFile;
- (_Bool)UnzipCurrentFileWithPosition:(unsigned int)arg1 length:(unsigned int)arg2 retData:(id *)arg3;
- (_Bool)UnzipGetCurrentFileName:(id *)arg1 retIsDirectory:(_Bool *)arg2 retFileLength:(unsigned long long *)arg3;
- (_Bool)UnzipGoToFirstFile;
- (_Bool)UnzipGoToNextFile;
- (_Bool)UnzipLocateFile:(id)arg1;
- (_Bool)UnzipHasRelativeDir:(_Bool *)arg1;
- (_Bool)UnzipFileTo:(id)arg1 overWrite:(_Bool)arg2;
- (_Bool)UnzipOpenFile:(id)arg1 Password:(id)arg2;
- (_Bool)UnzipOpenFile:(id)arg1;
- (_Bool)CloseZipFile2;
- (_Bool)addFileToZip:(id)arg1 newname:(id)arg2;
- (_Bool)addSingleFileToZip:(id)arg1 fileNameInZip:(id)arg2;
- (_Bool)CreateZipFile2:(id)arg1 Password:(id)arg2;
- (_Bool)CreateZipFile2:(id)arg1;
- (void)dealloc;
- (id)init;

@end

