//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, OMJRecordingResultTraits, UIImage;

@interface OMJRecordingFinishInfo : NSObject
{
    NSString *_outputFilePath;
    NSString *_outputFileChecksum;
    NSString *_originalImageSeqDirPath;
    UIImage *_coverImage;
    UIImage *_croppedCoverImage;
    OMJRecordingResultTraits *_recordingResultTraits;
    CDStruct_1b6d18a9 _recordingDuration;
    CDStruct_1b6d18a9 _redPacketStartTime;
}

- (void).cxx_destruct;
@property(nonatomic) CDStruct_1b6d18a9 redPacketStartTime; // @synthesize redPacketStartTime=_redPacketStartTime;
@property(retain, nonatomic) OMJRecordingResultTraits *recordingResultTraits; // @synthesize recordingResultTraits=_recordingResultTraits;
@property(retain, nonatomic) UIImage *croppedCoverImage; // @synthesize croppedCoverImage=_croppedCoverImage;
@property(retain, nonatomic) UIImage *coverImage; // @synthesize coverImage=_coverImage;
@property(readonly, nonatomic) NSString *originalImageSeqDirPath; // @synthesize originalImageSeqDirPath=_originalImageSeqDirPath;
@property(readonly, nonatomic) CDStruct_1b6d18a9 recordingDuration; // @synthesize recordingDuration=_recordingDuration;
@property(readonly, nonatomic) NSString *outputFileChecksum; // @synthesize outputFileChecksum=_outputFileChecksum;
@property(readonly, nonatomic) NSString *outputFilePath; // @synthesize outputFilePath=_outputFilePath;
- (id)initWithOutputFilePath:(id)arg1 outputFileChecksum:(id)arg2 recordingDuration:(CDStruct_1b6d18a9)arg3 originalImageSeqDirPath:(id)arg4;

@end

