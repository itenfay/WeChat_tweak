//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class TSKMidiScoreResult;

@interface TSKScoreResultSet : NSObject
{
    TSKMidiScoreResult *_acfScoreResult;
    TSKMidiScoreResult *_pyinScoreResult;
}

- (void).cxx_destruct;
@property(retain, nonatomic) TSKMidiScoreResult *pyinScoreResult; // @synthesize pyinScoreResult=_pyinScoreResult;
@property(retain, nonatomic) TSKMidiScoreResult *acfScoreResult; // @synthesize acfScoreResult=_acfScoreResult;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

