//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MLFeatureValue, NSSet, NSString;

@protocol MLFeatureProvider
- (MLFeatureValue *)featureValueForName:(NSString *)arg1;
@property(nonatomic, readonly) NSSet *featureNames;
@end

