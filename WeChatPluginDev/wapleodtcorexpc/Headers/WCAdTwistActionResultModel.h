//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@interface WCAdTwistActionResultModel
{
    int _result;
    int _triggerByAcceleration;
    double _failedMaxDegree;
}

@property(nonatomic) double failedMaxDegree; // @synthesize failedMaxDegree=_failedMaxDegree;
@property(nonatomic) int triggerByAcceleration; // @synthesize triggerByAcceleration=_triggerByAcceleration;
@property(nonatomic) int result; // @synthesize result=_result;

@end

