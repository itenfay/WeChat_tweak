//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface TAVFadeInOutAudioTransition : NSObject
{
    NSString *_identifier;
    CDStruct_1b6d18a9 _duration;
}

- (void).cxx_destruct;
@property(nonatomic) CDStruct_1b6d18a9 duration; // @synthesize duration=_duration;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void)applyPreviousAudioMixInputParameters:(id)arg1 timeRange:(CDStruct_e83c9415)arg2;
- (void)applyNextAudioMixInputParameters:(id)arg1 timeRange:(CDStruct_e83c9415)arg2;
- (id)initWithDuration:(CDStruct_1b6d18a9)arg1;
- (id)init;

@end

