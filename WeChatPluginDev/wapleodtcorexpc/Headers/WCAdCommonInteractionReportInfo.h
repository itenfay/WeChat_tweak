//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface WCAdCommonInteractionReportInfo : NSObject
{
    _Bool _didSucceed;
    _Bool _currentResult;
    double _maxAccelerationGForce;
}

@property(nonatomic) double maxAccelerationGForce; // @synthesize maxAccelerationGForce=_maxAccelerationGForce;
@property(nonatomic) _Bool currentResult; // @synthesize currentResult=_currentResult;
@property(nonatomic) _Bool didSucceed; // @synthesize didSucceed=_didSucceed;

@end

