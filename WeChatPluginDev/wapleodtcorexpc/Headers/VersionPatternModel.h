//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray;

@interface VersionPatternModel : NSObject
{
    long long _version;
    long long _AbsoluteTime;
    NSArray *_PatternAry;
    NSArray *_SystemVibrationAry;
}

+ (id)modelContainerPropertyMappingForConfigTag:(id)arg1;
- (void).cxx_destruct;
@property(copy, nonatomic) NSArray *SystemVibrationAry; // @synthesize SystemVibrationAry=_SystemVibrationAry;
@property(copy, nonatomic) NSArray *PatternAry; // @synthesize PatternAry=_PatternAry;
@property(nonatomic) long long AbsoluteTime; // @synthesize AbsoluteTime=_AbsoluteTime;
@property(nonatomic) long long version; // @synthesize version=_version;

@end

