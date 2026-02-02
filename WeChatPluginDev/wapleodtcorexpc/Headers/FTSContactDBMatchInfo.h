//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface FTSContactDBMatchInfo : NSObject
{
    unsigned int _firstLevelIndex;
    unsigned int _secondLevelIndex;
    unsigned int _location;
    NSArray *_matchPhases;
    NSString *_matchContent;
    unsigned long long _queryMatchType;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long queryMatchType; // @synthesize queryMatchType=_queryMatchType;
@property(retain, nonatomic) NSString *matchContent; // @synthesize matchContent=_matchContent;
@property(retain, nonatomic) NSArray *matchPhases; // @synthesize matchPhases=_matchPhases;
@property(nonatomic) unsigned int location; // @synthesize location=_location;
@property(nonatomic) unsigned int secondLevelIndex; // @synthesize secondLevelIndex=_secondLevelIndex;
@property(nonatomic) unsigned int firstLevelIndex; // @synthesize firstLevelIndex=_firstLevelIndex;

@end

