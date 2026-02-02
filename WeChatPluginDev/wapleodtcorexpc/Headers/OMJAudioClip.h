//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface OMJAudioClip : NSObject
{
    _Bool _isLooping;
    NSString *_filePath;
    double _volume;
    CDStruct_e83c9415 _timeRangeInAsset;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isLooping; // @synthesize isLooping=_isLooping;
@property(readonly, nonatomic) double volume; // @synthesize volume=_volume;
@property(readonly, nonatomic) CDStruct_e83c9415 timeRangeInAsset; // @synthesize timeRangeInAsset=_timeRangeInAsset;
@property(readonly, nonatomic) NSString *filePath; // @synthesize filePath=_filePath;
- (id)initWithFilePath:(id)arg1 timeRangeInAsset:(CDStruct_e83c9415)arg2 volume:(float)arg3 isLooping:(_Bool)arg4;
- (id)initWithFilePath:(id)arg1 timeRangeInAsset:(CDStruct_e83c9415)arg2 volume:(float)arg3;
- (id)initWithFilePath:(id)arg1 volume:(float)arg2;

@end

