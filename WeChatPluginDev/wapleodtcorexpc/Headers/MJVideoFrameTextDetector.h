//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MJOCRProcessor, MJVideoFrameExtractor;

@interface MJVideoFrameTextDetector : NSObject
{
    _Bool _textFound;
    _Bool _isCanceled;
    MJOCRProcessor *_ocrProcessor;
    MJVideoFrameExtractor *_videoFrameExtractor;
}

+ (id)calcTimestampsFromTimeRange:(CDStruct_e83c9415)arg1 videoFrameSampleRate:(double)arg2;
+ (id)getClipSegmentPHLocalIdentifier:(id)arg1;
- (void).cxx_destruct;
@property _Bool isCanceled; // @synthesize isCanceled=_isCanceled;
@property(nonatomic) _Bool textFound; // @synthesize textFound=_textFound;
@property(readonly, nonatomic) MJVideoFrameExtractor *videoFrameExtractor; // @synthesize videoFrameExtractor=_videoFrameExtractor;
@property(readonly, nonatomic) MJOCRProcessor *ocrProcessor; // @synthesize ocrProcessor=_ocrProcessor;
- (void)cancel;
- (void)detectTextWithPHLocalIdentifier:(id)arg1 timestamps:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)detectTextWithClipSegment:(id)arg1 timeRange:(CDStruct_e83c9415)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)dealloc;
- (id)init;

@end

