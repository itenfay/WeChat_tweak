//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class TSKMidiScoreResult;

@interface TSKMidiScoreCalculatorMix : NSObject
{
    TSKMidiScoreResult *_scoreResult;
}

- (void).cxx_destruct;
@property(retain, nonatomic) TSKMidiScoreResult *scoreResult; // @synthesize scoreResult=_scoreResult;
- (_Bool)resetWithResultSet:(id)arg1;
- (_Bool)updateWithResultSet:(id)arg1 index:(int)arg2;
- (id)init;

@end

