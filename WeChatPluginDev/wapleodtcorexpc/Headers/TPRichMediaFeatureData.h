//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface TPRichMediaFeatureData : NSObject
{
    NSString *_featureType;
    NSString *_env;
    NSString *_version;
    NSArray *_featureContents;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSArray *featureContents; // @synthesize featureContents=_featureContents;
@property(copy, nonatomic) NSString *version; // @synthesize version=_version;
@property(copy, nonatomic) NSString *env; // @synthesize env=_env;
@property(copy, nonatomic) NSString *featureType; // @synthesize featureType=_featureType;

@end

