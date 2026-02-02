//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray;

@interface MMKScoreResultSet : NSObject
{
    int _totalScore;
    int _avgScore;
    int _lastScore;
    int _curIndex;
    NSArray *_allScores;
}

- (void).cxx_destruct;
@property(nonatomic) int curIndex; // @synthesize curIndex=_curIndex;
@property(nonatomic) int lastScore; // @synthesize lastScore=_lastScore;
@property(retain) NSArray *allScores; // @synthesize allScores=_allScores;
@property(nonatomic) int avgScore; // @synthesize avgScore=_avgScore;
@property(nonatomic) int totalScore; // @synthesize totalScore=_totalScore;

@end

