//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMFinderLivePlayGiftAnimationCommandResource, MMLiveHapticsPattern;

@interface MMFinderLivePlayGiftAnimationCommandItem : NSObject
{
    MMFinderLivePlayGiftAnimationCommandResource *_animation;
    MMFinderLivePlayGiftAnimationCommandResource *_soundEffect;
    MMLiveHapticsPattern *_hapticsPattern;
}

+ (id)itemWithAnimation:(id)arg1 extension:(id)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) MMLiveHapticsPattern *hapticsPattern; // @synthesize hapticsPattern=_hapticsPattern;
@property(retain, nonatomic) MMFinderLivePlayGiftAnimationCommandResource *soundEffect; // @synthesize soundEffect=_soundEffect;
@property(retain, nonatomic) MMFinderLivePlayGiftAnimationCommandResource *animation; // @synthesize animation=_animation;

@end

