//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@protocol ITPReportParams;

@interface TPReportStepInner : NSObject
{
    unsigned long long _step;
    id <ITPReportParams> _stepParam;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id <ITPReportParams> stepParam; // @synthesize stepParam=_stepParam;
@property(nonatomic) unsigned long long step; // @synthesize step=_step;

@end

