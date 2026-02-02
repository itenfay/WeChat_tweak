//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface EdgeComputingThresholdRecord : NSObject
{
    unsigned long long _thresholdTime;
    unsigned long long _thresholdCount;
}

@property(nonatomic) unsigned long long thresholdCount; // @synthesize thresholdCount=_thresholdCount;
@property(nonatomic) unsigned long long thresholdTime; // @synthesize thresholdTime=_thresholdTime;

@end

