//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface MMLiveHapticsPattern : NSObject
{
    NSMutableArray *_events;
    NSMutableArray *_dynamicParametersStorage;
    NSMutableArray *_parameterCurvesStorage;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *parameterCurvesStorage; // @synthesize parameterCurvesStorage=_parameterCurvesStorage;
@property(retain, nonatomic) NSMutableArray *dynamicParametersStorage; // @synthesize dynamicParametersStorage=_dynamicParametersStorage;
@property(retain, nonatomic) NSMutableArray *events; // @synthesize events=_events;
- (id)coreHapticsPattern;
@property(readonly, nonatomic) NSMutableArray *parameterCurves;
@property(readonly, nonatomic) NSMutableArray *dynamicParameters;
- (id)initWithEvents:(id)arg1;
- (id)init;

@end

