//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MMKScoreResultSet, MMKScorer;

@protocol MMKScorerDelegate <NSObject>

@optional
- (void)scorerCallback:(MMKScorer *)arg1 didFinishWithResult:(MMKScoreResultSet *)arg2;
- (void)scorerCallback:(MMKScorer *)arg1 targetHitIn:(double)arg2 duration:(double)arg3 isHit:(_Bool)arg4 noteValue:(int)arg5 noteHeight:(int)arg6;
- (void)scorerCallback:(MMKScorer *)arg1 didFinishSeekWithResult:(MMKScoreResultSet *)arg2;
- (void)scorerCallback:(MMKScorer *)arg1 didGetScoreForSentence:(int)arg2 result:(MMKScoreResultSet *)arg3;
@end

