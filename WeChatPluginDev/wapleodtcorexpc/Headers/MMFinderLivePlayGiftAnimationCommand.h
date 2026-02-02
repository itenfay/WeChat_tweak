//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMFinderLivePlayGiftAnimationCommandItem, NSData, NSString;

@interface MMFinderLivePlayGiftAnimationCommand : NSObject
{
    unsigned int _triggerType;
    NSString *_correlationId;
    MMFinderLivePlayGiftAnimationCommandItem *_portraitAnimation;
    MMFinderLivePlayGiftAnimationCommandItem *_landscapeAnimation;
    NSData *_businessBuff;
}

+ (id)giftAnimationPlayCommandWithBackendMessage:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSData *businessBuff; // @synthesize businessBuff=_businessBuff;
@property(nonatomic) unsigned int triggerType; // @synthesize triggerType=_triggerType;
@property(retain, nonatomic) MMFinderLivePlayGiftAnimationCommandItem *landscapeAnimation; // @synthesize landscapeAnimation=_landscapeAnimation;
@property(retain, nonatomic) MMFinderLivePlayGiftAnimationCommandItem *portraitAnimation; // @synthesize portraitAnimation=_portraitAnimation;
@property(retain, nonatomic) NSString *correlationId; // @synthesize correlationId=_correlationId;
- (id)initWithPortraitAnimation:(id)arg1 portraitAnimationExtension:(id)arg2 landscapeAnimation:(id)arg3 landscapeAnimationExtension:(id)arg4 triggerType:(unsigned int)arg5 businessBuffer:(id)arg6;
- (id)init;

@end

