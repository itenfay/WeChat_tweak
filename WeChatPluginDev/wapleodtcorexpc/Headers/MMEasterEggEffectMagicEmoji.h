//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMTimer, NSString;

@interface MMEasterEggEffectMagicEmoji
{
    _Bool _running;
    NSString *_magicEmojiEffectId;
    MMTimer *_timeoutTimer;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMTimer *timeoutTimer; // @synthesize timeoutTimer=_timeoutTimer;
@property(nonatomic, getter=isRunning) _Bool running; // @synthesize running=_running;
@property(retain, nonatomic) NSString *magicEmojiEffectId; // @synthesize magicEmojiEffectId=_magicEmojiEffectId;
- (void)onEasterEggAnimationEnd:(id)arg1 eggKey:(id)arg2;
- (void)onEasterEggAnimationClick:(id)arg1 eggKey:(id)arg2;
- (void)onEasterEggAnimationStart:(id)arg1 eggKey:(id)arg2;
- (id)description;
- (void)timeout;
- (void)privateEndEffect;
- (_Bool)checkMatchForId:(id)arg1 sessionId:(id)arg2;
- (void)setBackgroundView:(id)arg1;
- (void)endEffectWithReason:(unsigned int)arg1;
- (void)continueEffectWithInteractiveUI:(id)arg1;
- (_Bool)joinEffectWithExtInfo:(id)arg1;
- (_Bool)startEffectWithExtInfo:(id)arg1;

@end

