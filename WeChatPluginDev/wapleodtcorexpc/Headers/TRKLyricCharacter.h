//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface TRKLyricCharacter : NSObject
{
    long long _startTime;
    long long _duration;
    long long _start;
    long long _end;
}

@property(nonatomic) long long end; // @synthesize end=_end;
@property(nonatomic) long long start; // @synthesize start=_start;
@property(nonatomic) long long duration; // @synthesize duration=_duration;
@property(nonatomic) long long startTime; // @synthesize startTime=_startTime;
- (id)initWithCharacter:(id)arg1;

@end

