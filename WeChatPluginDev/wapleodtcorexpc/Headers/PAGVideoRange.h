//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface PAGVideoRange : NSObject
{
    long long _startTime;
    long long _endTime;
    long long _playDuration;
    long long _reversed;
}

@property(nonatomic) long long reversed; // @synthesize reversed=_reversed;
@property(nonatomic) long long playDuration; // @synthesize playDuration=_playDuration;
@property(nonatomic) long long endTime; // @synthesize endTime=_endTime;
@property(nonatomic) long long startTime; // @synthesize startTime=_startTime;

@end

