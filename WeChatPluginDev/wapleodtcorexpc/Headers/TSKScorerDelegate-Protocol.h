//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class TSKScoreResultSet, TSKScorer;

@protocol TSKScorerDelegate <NSObject>

@optional
- (void)scorer:(TSKScorer *)arg1 didFinishWithResult:(TSKScoreResultSet *)arg2;
- (void)scorer:(TSKScorer *)arg1 targetHitIn:(double)arg2 duration:(double)arg3 isHit:(_Bool)arg4 noteValue:(int)arg5;
- (void)scorer:(TSKScorer *)arg1 didFinishSeekWithResult:(TSKScoreResultSet *)arg2;
- (void)scorer:(TSKScorer *)arg1 didGetScoreForSentence:(int)arg2 result:(TSKScoreResultSet *)arg3;
@end

