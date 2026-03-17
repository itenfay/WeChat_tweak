//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface FTSModuleStat : NSObject
{
    unsigned int _moduleType;
    unsigned int _resultCnt;
    unsigned long long _startTime;
    unsigned long long _endTime;
}

@property(nonatomic) unsigned int resultCnt; // @synthesize resultCnt=_resultCnt;
@property(nonatomic) unsigned long long endTime; // @synthesize endTime=_endTime;
@property(nonatomic) unsigned long long startTime; // @synthesize startTime=_startTime;
@property(nonatomic) unsigned int moduleType; // @synthesize moduleType=_moduleType;
- (unsigned int)calTime;

@end

