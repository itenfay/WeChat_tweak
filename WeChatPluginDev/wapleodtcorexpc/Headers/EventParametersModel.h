//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface EventParametersModel : NSObject
{
    NSString *_ParameterID;
    double _ParameterValue;
}

- (void).cxx_destruct;
@property(nonatomic) double ParameterValue; // @synthesize ParameterValue=_ParameterValue;
@property(copy, nonatomic) NSString *ParameterID; // @synthesize ParameterID=_ParameterID;

@end

