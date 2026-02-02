//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CHHapticEngine;

@interface MMLiveHapticsEnginePlayer
{
    CHHapticEngine *_hapticsEngine;
}

- (void).cxx_destruct;
@property(retain, nonatomic) CHHapticEngine *hapticsEngine; // @synthesize hapticsEngine=_hapticsEngine;
- (void)playPatternWithinData:(id)arg1;
- (void)stopEngine;
- (void)startEngineWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)createEngine;
- (void)playPatternInFile:(id)arg1;
- (void)playPattern:(id)arg1;
- (void)anticipatePlayingWithinTimeInterval:(double)arg1;

@end

