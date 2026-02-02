//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCEditVideoPostReportInfo : NSObject
{
    _Bool _isStoryPortraitVideo;
    NSString *_storyHorizenVideoMd5;
    NSString *_originVideoPath;
    double _originVideoDuration;
    double _editedVideoDuration;
}

- (void).cxx_destruct;
@property(nonatomic) double editedVideoDuration; // @synthesize editedVideoDuration=_editedVideoDuration;
@property(nonatomic) double originVideoDuration; // @synthesize originVideoDuration=_originVideoDuration;
@property(copy, nonatomic) NSString *originVideoPath; // @synthesize originVideoPath=_originVideoPath;
@property(copy, nonatomic) NSString *storyHorizenVideoMd5; // @synthesize storyHorizenVideoMd5=_storyHorizenVideoMd5;
@property(nonatomic) _Bool isStoryPortraitVideo; // @synthesize isStoryPortraitVideo=_isStoryPortraitVideo;

@end

