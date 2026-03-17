//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface MMFinderLiveRecordMemObj : NSObject
{
    unsigned int _currentTime;
    float _curMem;
}

+ (id)liveRecordMemObjWithMem:(long long)arg1;
@property(nonatomic) float curMem; // @synthesize curMem=_curMem;
@property(nonatomic) unsigned int currentTime; // @synthesize currentTime=_currentTime;
- (id)genFinderSimpleDateTimeStringByTimestamp:(long long)arg1;
- (id)liveRecordReportString;

@end

