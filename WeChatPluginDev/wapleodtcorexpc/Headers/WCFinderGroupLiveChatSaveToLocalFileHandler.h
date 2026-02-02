//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface WCFinderGroupLiveChatSaveToLocalFileHandler
{
    unsigned int _lastCRC32;
    NSString *_filePath;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *filePath; // @synthesize filePath=_filePath;
@property(nonatomic) unsigned int lastCRC32; // @synthesize lastCRC32=_lastCRC32;
- (void)setupFilePath:(id)arg1;
- (_Bool)finishSaveAndUpdateTag:(id)arg1 tag:(unsigned long long)arg2;
- (_Bool)finishSaveAndUpdateTag:(id)arg1;
- (void)clear;
- (id)loadWithFilePath:(id)arg1;
- (_Bool)checkFreeTmpSpaceWriteSize:(unsigned long long)arg1;
- (_Bool)save:(id)arg1 filePath:(id)arg2;

@end

