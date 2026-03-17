//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class TSKMidiScoreResult, TSKScoreResultSet;

@protocol TSKMidiScoreCalculator
@property(readonly, nonatomic) TSKMidiScoreResult *scoreResult;
- (_Bool)resetWithResultSet:(TSKScoreResultSet *)arg1;
- (_Bool)updateWithResultSet:(TSKScoreResultSet *)arg1 index:(int)arg2;
@end

