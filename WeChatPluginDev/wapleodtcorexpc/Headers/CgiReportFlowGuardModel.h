//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface CgiReportFlowGuardModel : NSObject
{
    unsigned int _reportIntervalMs;
    unsigned int _reportCount;
}

@property(nonatomic) unsigned int reportCount; // @synthesize reportCount=_reportCount;
@property(nonatomic) unsigned int reportIntervalMs; // @synthesize reportIntervalMs=_reportIntervalMs;
- (id)simpleLog;
- (_Bool)checkSizeOut:(long long)arg1;
- (double)getReportDelayTime;
- (_Bool)checkIsLegal;

@end

