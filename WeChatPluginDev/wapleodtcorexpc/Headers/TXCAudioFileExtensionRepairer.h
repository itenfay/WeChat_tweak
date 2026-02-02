//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSFileManager, NSString;

@interface TXCAudioFileExtensionRepairer : NSObject
{
    NSString *_rawFilePath;
    NSFileManager *_fileManager;
    NSString *_hardLinkFilePath;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *hardLinkFilePath; // @synthesize hardLinkFilePath=_hardLinkFilePath;
@property(retain, nonatomic) NSFileManager *fileManager; // @synthesize fileManager=_fileManager;
@property(copy, nonatomic) NSString *rawFilePath; // @synthesize rawFilePath=_rawFilePath;
- (id)createHardLinkFileWithExtension:(id)arg1;
- (id)convertToRegularFile:(id)arg1;
- (id)removeSymbolicLink:(id)arg1;
- (id)getFileType:(id)arg1;
- (id)repairFilePathInternal;
- (_Bool)needUpdateRawFilePath:(id)arg1;
- (_Bool)canDelete:(id)arg1;
- (_Bool)needRepair:(id)arg1;
- (_Bool)isValidFilePath:(id)arg1;
- (void)deleteFile:(id)arg1;
- (void)deleteHardLinkFile;
- (id)repairRawFilePath;
@property(readonly, copy, nonatomic) NSString *repairedFilePath;
- (void)dealloc;
- (id)initWithFilePath:(id)arg1;

@end

