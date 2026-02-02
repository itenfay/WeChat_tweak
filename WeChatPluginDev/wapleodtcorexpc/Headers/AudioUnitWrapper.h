//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface AudioUnitWrapper : NSObject
{
    struct OpaqueAudioComponentInstance *_audioUnit;
}

+ (id)wrapperWithAudioUnit:(struct OpaqueAudioComponentInstance *)arg1;
@property(nonatomic) struct OpaqueAudioComponentInstance *audioUnit; // @synthesize audioUnit=_audioUnit;

@end

