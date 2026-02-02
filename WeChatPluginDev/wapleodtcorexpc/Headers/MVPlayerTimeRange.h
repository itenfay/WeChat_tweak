//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSSet;

@interface MVPlayerTimeRange : NSObject
{
    double _startTimeInSecond;
    double _durationInSecond;
    NSSet *_videoIdentifiers;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSSet *videoIdentifiers; // @synthesize videoIdentifiers=_videoIdentifiers;
@property(nonatomic) double durationInSecond; // @synthesize durationInSecond=_durationInSecond;
@property(nonatomic) double startTimeInSecond; // @synthesize startTimeInSecond=_startTimeInSecond;
- (_Bool)isValid;
- (id)initWithStartTime:(double)arg1 duration:(double)arg2;
- (id)init;

@end

