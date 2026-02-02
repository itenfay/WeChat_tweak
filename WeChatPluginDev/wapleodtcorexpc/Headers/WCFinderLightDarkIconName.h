//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCFinderLightDarkIconName : NSObject
{
    NSString *_lightName;
    NSString *_darkName;
    long long _imageFetchType;
}

+ (id)instanceWithSameName:(id)arg1;
+ (id)instanceWithLight:(id)arg1 dark:(id)arg2;
- (void).cxx_destruct;
@property(nonatomic) long long imageFetchType; // @synthesize imageFetchType=_imageFetchType;
@property(copy, nonatomic) NSString *darkName; // @synthesize darkName=_darkName;
@property(copy, nonatomic) NSString *lightName; // @synthesize lightName=_lightName;

@end

