//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface MJAudioFileManager : NSObject
{
    NSString *_basePath;
}

+ (id)readAudioDataFromWAVFileAtPath:(id)arg1;
+ (id)readPCMDataFromWAVFileAtPath:(id)arg1;
+ (_Bool)createWAVFileFromPCMData:(id)arg1 sampleRate:(long long)arg2 outputPath:(id)arg3;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *basePath; // @synthesize basePath=_basePath;
- (_Bool)createWAVFileFromPCMData:(id)arg1 forIdentifier:(id)arg2 roleID:(id)arg3 textHash:(unsigned long long)arg4 sampleRate:(long long)arg5;
- (_Bool)createWAVFileFromPCMData:(id)arg1 forText:(id)arg2 roleID:(id)arg3 sampleRate:(long long)arg4;
- (_Bool)createWAVFileFromPCMData:(id)arg1 forIdentifier:(id)arg2 roleID:(id)arg3 sampleRate:(long long)arg4;
- (id)silkDataForAudioFileWithIdentifier:(id)arg1;
- (id)pcmDataForAudioFileWithIdentifier:(id)arg1;
- (id)speechFilePathForText:(id)arg1 roleID:(id)arg2;
- (id)speechFilePathForAudioFileWithIdentifier:(id)arg1 roleID:(id)arg2 textHash:(unsigned long long)arg3;
- (id)speechFilePathForAudioFileWithIdentifier:(id)arg1 roleID:(id)arg2;
- (id)silkFilePathForAudioFileWithIdentifier:(id)arg1;
- (id)wavFilePathForAudioFileWithIdentifier:(id)arg1;
- (id)pcmFilePathForAudioFileWithIdentifier:(id)arg1;
- (id)dirctoryPathForAudioFileWithIdentifier:(id)arg1;
- (id)initWithBasePath:(id)arg1;

@end

