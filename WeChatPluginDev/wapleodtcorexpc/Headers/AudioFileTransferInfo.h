//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface AudioFileTransferInfo : NSObject
{
    NSString *_sourcePath;
    NSString *_outputPath;
    double _startTime;
    double _endTime;
    double _maxAudioDuration;
}

- (void).cxx_destruct;
@property(nonatomic) double maxAudioDuration; // @synthesize maxAudioDuration=_maxAudioDuration;
@property(nonatomic) double endTime; // @synthesize endTime=_endTime;
@property(nonatomic) double startTime; // @synthesize startTime=_startTime;
@property(copy, nonatomic) NSString *outputPath; // @synthesize outputPath=_outputPath;
@property(copy, nonatomic) NSString *sourcePath; // @synthesize sourcePath=_sourcePath;

@end

