//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray;

@interface TextStateRedDotProfileIconConfig : NSObject
{
    NSArray *_durations;
    NSArray *_parsedDurations;
}

+ (long long)secondsFromDurationString:(id)arg1;
+ (id)modelPropertyBlacklistForConfigTag:(id)arg1;
+ (id)modelContainerPropertyMappingForConfigTag:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *parsedDurations; // @synthesize parsedDurations=_parsedDurations;
@property(retain, nonatomic) NSArray *durations; // @synthesize durations=_durations;
- (struct _NSRange)hitDurationForLocation:(long long)arg1;

@end

