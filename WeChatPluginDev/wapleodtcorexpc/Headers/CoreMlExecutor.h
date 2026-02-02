//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MLModel, NSString;

@interface CoreMlExecutor : NSObject
{
    int _coreMlVersion;
    MLModel *_model;
    NSString *_mlModelFilePath;
    NSString *_compiledModelFilePath;
}

@property(readonly, nonatomic) int coreMlVersion; // @synthesize coreMlVersion=_coreMlVersion;
@property(retain) NSString *compiledModelFilePath; // @synthesize compiledModelFilePath=_compiledModelFilePath;
@property(retain) NSString *mlModelFilePath; // @synthesize mlModelFilePath=_mlModelFilePath;
@property(retain) MLModel *model; // @synthesize model=_model;
- (void).cxx_destruct;
- (_Bool)build:(id)arg1;
- (id)saveModel:(struct Model *)arg1;
- (_Bool)cleanup;
- (_Bool)invokeWithInputs:(const vector_1994dafb *)arg1 outputs:(const vector_1994dafb *)arg2;

@end

