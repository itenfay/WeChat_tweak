//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface CameraScanCombineModelInfo : NSObject
{
    _Bool _useXNet;
    long long _modelVersion;
    NSString *_detectParamPath;
    NSString *_detectModelPath;
    NSString *_classifyParamPath;
    NSString *_classifyModelPath;
    NSString *_modelConfig;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool useXNet; // @synthesize useXNet=_useXNet;
@property(copy, nonatomic) NSString *modelConfig; // @synthesize modelConfig=_modelConfig;
@property(copy, nonatomic) NSString *classifyModelPath; // @synthesize classifyModelPath=_classifyModelPath;
@property(copy, nonatomic) NSString *classifyParamPath; // @synthesize classifyParamPath=_classifyParamPath;
@property(copy, nonatomic) NSString *detectModelPath; // @synthesize detectModelPath=_detectModelPath;
@property(copy, nonatomic) NSString *detectParamPath; // @synthesize detectParamPath=_detectParamPath;
@property(nonatomic) long long modelVersion; // @synthesize modelVersion=_modelVersion;

@end

