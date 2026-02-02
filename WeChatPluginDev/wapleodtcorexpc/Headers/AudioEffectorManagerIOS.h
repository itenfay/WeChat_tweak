//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class WXAudioEffectManager;

@interface AudioEffectorManagerIOS : NSObject
{
    WXAudioEffectManager *_audioEffectManager;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
@property(retain, nonatomic) WXAudioEffectManager *audioEffectManager; // @synthesize audioEffectManager=_audioEffectManager;
- (id)getAudioEffectManager;
- (id)init;

@end

