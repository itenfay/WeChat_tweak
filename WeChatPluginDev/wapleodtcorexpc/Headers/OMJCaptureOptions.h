//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface OMJCaptureOptions : NSObject
{
    _Bool _isUseFrontCamera;
    _Bool _isAudioEnabled;
    _Bool _isChangeBackgroundImageEnabled;
    CDStruct_1b6d18a9 _maxRecordingDuration;
}

@property(readonly, nonatomic) CDStruct_1b6d18a9 maxRecordingDuration; // @synthesize maxRecordingDuration=_maxRecordingDuration;
@property(readonly, nonatomic) _Bool isChangeBackgroundImageEnabled; // @synthesize isChangeBackgroundImageEnabled=_isChangeBackgroundImageEnabled;
@property(readonly, nonatomic) _Bool isAudioEnabled; // @synthesize isAudioEnabled=_isAudioEnabled;
@property(readonly, nonatomic) _Bool isUseFrontCamera; // @synthesize isUseFrontCamera=_isUseFrontCamera;
- (id)initWithIsUseFrontCamera:(_Bool)arg1 isAudioEnabled:(_Bool)arg2 isChangeBackgroundImageEnabled:(_Bool)arg3 maxRecordingDuration:(CDStruct_1b6d18a9)arg4;

@end

