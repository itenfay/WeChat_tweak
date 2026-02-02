//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface WCFinderSubtitleTimeSection : NSObject
{
    unsigned long long _beginTimeInMs;
    unsigned long long _endTimeInMs;
}

@property(nonatomic) unsigned long long endTimeInMs; // @synthesize endTimeInMs=_endTimeInMs;
@property(nonatomic) unsigned long long beginTimeInMs; // @synthesize beginTimeInMs=_beginTimeInMs;
- (id)description;
- (id)initWithBeginTime:(unsigned long long)arg1 endTime:(unsigned long long)arg2;

@end

