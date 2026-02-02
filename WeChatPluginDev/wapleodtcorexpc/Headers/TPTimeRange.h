//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface TPTimeRange : NSObject
{
    long long _startTimeMs;
    long long _endTimeMs;
}

@property long long endTimeMs; // @synthesize endTimeMs=_endTimeMs;
@property long long startTimeMs; // @synthesize startTimeMs=_startTimeMs;

@end

