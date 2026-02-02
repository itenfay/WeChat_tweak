//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableArray;

@interface WCDeviceStepObject
{
    unsigned int beginTime;
    unsigned int endTime;
    unsigned int m7StepCount;
    unsigned int hkStepCount;
    NSMutableArray *allHKSampleSource;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *allHKSampleSource; // @synthesize allHKSampleSource;
@property(nonatomic) unsigned int hkStepCount; // @synthesize hkStepCount;
@property(nonatomic) unsigned int m7StepCount; // @synthesize m7StepCount;
@property(nonatomic) unsigned int endTime; // @synthesize endTime;
@property(nonatomic) unsigned int beginTime; // @synthesize beginTime;

@end

