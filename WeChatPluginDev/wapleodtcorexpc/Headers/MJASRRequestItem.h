//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MJSpeechAudioData, NSString, OMCClipSegment;

@interface MJASRRequestItem : NSObject
{
    OMCClipSegment *_clipSegment;
    MJSpeechAudioData *_silkAudioData;
    NSString *_mediaFileURL;
    CDStruct_e83c9415 _timeRange;
    CDStruct_e83c9415 _timeRangeForASR;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) CDStruct_e83c9415 timeRangeForASR; // @synthesize timeRangeForASR=_timeRangeForASR;
@property(readonly, nonatomic) CDStruct_e83c9415 timeRange; // @synthesize timeRange=_timeRange;
@property(readonly, nonatomic) NSString *mediaFileURL; // @synthesize mediaFileURL=_mediaFileURL;
@property(readonly, nonatomic) MJSpeechAudioData *silkAudioData; // @synthesize silkAudioData=_silkAudioData;
@property(readonly, nonatomic) OMCClipSegment *clipSegment; // @synthesize clipSegment=_clipSegment;
- (id)description;
- (id)initWithClipSegment:(id)arg1 silkAudioData:(id)arg2 mediaFileURL:(id)arg3 timeRange:(CDStruct_e83c9415)arg4 timeRangeForASR:(CDStruct_e83c9415)arg5;

@end

