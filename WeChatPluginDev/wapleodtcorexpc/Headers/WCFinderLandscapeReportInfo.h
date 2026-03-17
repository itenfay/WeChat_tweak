//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface WCFinderLandscapeReportInfo : NSObject
{
    unsigned long long _rotateToLandscapeTimeStampMs;
    double _rotateToLandscapeVideoProgress;
}

@property(nonatomic) double rotateToLandscapeVideoProgress; // @synthesize rotateToLandscapeVideoProgress=_rotateToLandscapeVideoProgress;
@property(nonatomic) unsigned long long rotateToLandscapeTimeStampMs; // @synthesize rotateToLandscapeTimeStampMs=_rotateToLandscapeTimeStampMs;
- (id)genReportDictWithLandScapeEnterType:(unsigned long long)arg1;

@end

