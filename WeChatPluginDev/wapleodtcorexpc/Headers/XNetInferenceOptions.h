//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface XNetInferenceOptions : NSObject
{
    struct Options _underlying;
    _Bool _useNpuOnly;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(nonatomic) _Bool useNpuOnly; // @synthesize useNpuOnly=_useNpuOnly;
@property(retain, nonatomic) NSDictionary *typicalShape;
@property(retain, nonatomic) NSString *modelType;
@property(nonatomic) _Bool allowNPU;
@property(nonatomic) _Bool allowGPU;
@property(nonatomic) _Bool allowQuantize;
@property(nonatomic) int precisionLevel;
@property(retain, nonatomic) NSString *gpuLibFilename;
@property(retain, nonatomic) NSString *modelCachePath;
@property(nonatomic) int numThreads;
- (const void *)underlying;
- (id)initWithUnderlying:(const void *)arg1;

@end

