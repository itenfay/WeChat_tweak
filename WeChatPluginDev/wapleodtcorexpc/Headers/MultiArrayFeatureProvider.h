//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSSet;

@interface MultiArrayFeatureProvider : NSObject
{
    const void * *_inputs;
    NSSet *_featureNames;
    int _coreMlVersion;
}

@property(readonly, nonatomic) int coreMlVersion; // @synthesize coreMlVersion=_coreMlVersion;
- (id)featureValueForName:(id)arg1;
@property(readonly, nonatomic) NSSet *featureNames;
- (id)initWithInputs:(const void * *)arg1 coreMlVersion:(int)arg2;

@end

