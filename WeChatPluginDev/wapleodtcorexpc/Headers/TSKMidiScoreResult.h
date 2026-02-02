//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSArray, NSMutableArray;

@interface TSKMidiScoreResult
{
    NSMutableArray *_allScores;
    int _totalScore;
    int _lastScore;
    int _curIndex;
}

- (void).cxx_destruct;
@property(nonatomic) int curIndex; // @synthesize curIndex=_curIndex;
@property(nonatomic) int lastScore; // @synthesize lastScore=_lastScore;
@property(nonatomic) int totalScore; // @synthesize totalScore=_totalScore;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)updateScore:(int)arg1 atIndex:(int)arg2;
@property(retain) NSArray *allScores;
- (id)init;

@end

