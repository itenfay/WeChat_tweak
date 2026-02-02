//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class OMCASRProcessor;

@interface MJMovieComposingASRProcessor : NSObject
{
    OMCASRProcessor *_backingProcessor;
}

+ (_Bool)isSegmentValidForASR:(id)arg1;
+ (void)requestOnlineASRWithAudioData:(id)arg1 audioID:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
+ (void)requestOnlineASRWithRequestItems:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
+ (_Bool)hasCachedSpeechRecognitionResultWithStoryElementSegmentVMs:(id)arg1;
+ (CDStruct_e83c9415)timeRangeForASRFromSegmentationInfos:(id)arg1;
+ (void)extractAudioDataFromClipSegment:(id)arg1 inHybridMode:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;
+ (id)fetchModelConfigFilesWithVersion:(id)arg1 destPath:(id)arg2;
+ (id)fetchModelConfigFilesPathInDirectoryAtPath:(id)arg1;
+ (id)fetchModelZipFile;
- (void).cxx_destruct;
@property(retain, nonatomic) OMCASRProcessor *backingProcessor; // @synthesize backingProcessor=_backingProcessor;
- (void)requestSpeechRecognitionWithStoryElementSegmentVMs:(id)arg1 inHybridMode:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (_Bool)initBackingProcessorIfNeeded;
- (void)dealloc;
- (id)init;

@end

