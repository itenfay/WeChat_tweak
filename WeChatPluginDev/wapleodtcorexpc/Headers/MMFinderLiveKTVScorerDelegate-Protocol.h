//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MMFinderLiveKTVBaseScorer;

@protocol MMFinderLiveKTVScorerDelegate <NSObject>
- (_Bool)isScorerNeedIgnoreFrameProcess;
- (void)scorer:(MMFinderLiveKTVBaseScorer *)arg1 targetHitIn:(int)arg2 duration:(int)arg3 isHit:(_Bool)arg4 noteHeight:(float)arg5 noteValue:(float)arg6;
- (void)scorer:(MMFinderLiveKTVBaseScorer *)arg1 didFinishWithTotalScore:(int)arg2 averageScore:(double)arg3;
- (void)scorer:(MMFinderLiveKTVBaseScorer *)arg1 didGetNewScore:(int)arg2 sentenceIndex:(int)arg3 totalScore:(int)arg4;
@end

