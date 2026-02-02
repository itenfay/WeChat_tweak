//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <AVFoundation/AVAsset.h>

@interface AVAsset (AudioData)
+ (id)audioDataForClassify:(id)arg1;
+ (_Bool)addVideoAsset:(id)arg1 samplateCount:(unsigned long long)arg2 classifier:(id)arg3 error:(id *)arg4;
- (id)audioData:(CDStruct_e83c9415)arg1 setting:(id)arg2;
- (void)saveCachedResultData:(id)arg1;
- (id)getCachedResultData;
- (void)_calculateClassifyLabelsWithScene:(unsigned long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_asyncCalculateClassifyLabelsWithScene:(unsigned long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)asyncCalculateClassifyLabelsForFinderWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)asyncCalculateClassifyLabelsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)previewImageAtTime:(double)arg1 imageSize:(struct CGSize)arg2;
- (id)previewImageAtTime:(double)arg1;
- (id)previewImages;
- (void)setVideoFirstFramePTS:(CDStruct_1b6d18a9)arg1;
- (CDStruct_1b6d18a9)videoFirstFramePTS;
- (struct CGSize)visualSize;
- (unsigned int)time;
- (float)syncGetDurationWithTimeout:(float)arg1;
- (float)syncGetDuration;
- (_Bool)tav_hasVideo;
- (_Bool)tav_hasAudio;
- (id)syncLoadTracksWithMediaType:(id)arg1;
@end

