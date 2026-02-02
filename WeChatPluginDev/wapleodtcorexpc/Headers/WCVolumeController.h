//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class WCVolumeView;

@interface WCVolumeController : NSObject
{
    WCVolumeView *_volumeView;
}

+ (void)queryValueWithCompletion:(CDUnknownBlockType)arg1;
+ (void)queryValueWithCompletion:(CDUnknownBlockType)arg1 inQueue:(id)arg2;
+ (void)VoIP_executeInAudioSessionQueue:(CDUnknownBlockType)arg1;
+ (void)VoIP_queryValueWithCompletion:(CDUnknownBlockType)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) WCVolumeView *volumeView; // @synthesize volumeView=_volumeView;
- (void)configValue:(float)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)dealloc;
- (id)init;

@end

