//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface PAGMarker : NSObject
{
    long long _startTime;
    long long _duration;
    NSString *_comment;
}

@property(copy, nonatomic) NSString *comment; // @synthesize comment=_comment;
@property(nonatomic) long long duration; // @synthesize duration=_duration;
@property(nonatomic) long long startTime; // @synthesize startTime=_startTime;
- (void)dealloc;

@end

