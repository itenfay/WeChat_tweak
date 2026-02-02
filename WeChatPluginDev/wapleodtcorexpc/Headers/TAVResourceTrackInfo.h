//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class AVAssetTrack;

@interface TAVResourceTrackInfo : NSObject
{
    _Bool _useEmpty;
    AVAssetTrack *_track;
    CDStruct_1b6d18a9 _scaleToDuration;
    CDStruct_e83c9415 _selectedTimeRange;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool useEmpty; // @synthesize useEmpty=_useEmpty;
@property(nonatomic) CDStruct_1b6d18a9 scaleToDuration; // @synthesize scaleToDuration=_scaleToDuration;
@property(nonatomic) CDStruct_e83c9415 selectedTimeRange; // @synthesize selectedTimeRange=_selectedTimeRange;
@property(retain, nonatomic) AVAssetTrack *track; // @synthesize track=_track;

@end

