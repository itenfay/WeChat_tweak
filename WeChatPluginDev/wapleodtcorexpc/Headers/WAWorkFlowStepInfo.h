//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSNumber, NSString;
@protocol WAWorkFlowImplement;

@interface WAWorkFlowStepInfo : NSObject
{
    NSString *_stepName;
    CDUnknownBlockType _stepBlock;
    id <WAWorkFlowImplement> _stepSubWorkFlow;
    NSNumber *_numResult;
    NSString *_error;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *error; // @synthesize error=_error;
@property(retain, nonatomic) NSNumber *numResult; // @synthesize numResult=_numResult;
@property(retain, nonatomic) id <WAWorkFlowImplement> stepSubWorkFlow; // @synthesize stepSubWorkFlow=_stepSubWorkFlow;
@property(copy, nonatomic) CDUnknownBlockType stepBlock; // @synthesize stepBlock=_stepBlock;
@property(retain, nonatomic) NSString *stepName; // @synthesize stepName=_stepName;
- (void)dealloc;

@end

