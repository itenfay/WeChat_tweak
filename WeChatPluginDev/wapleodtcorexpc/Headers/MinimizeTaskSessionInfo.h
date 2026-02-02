//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface MinimizeTaskSessionInfo : NSObject
{
    NSString *_sessionId;
    unsigned long long _startTimeStamp;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long startTimeStamp; // @synthesize startTimeStamp=_startTimeStamp;
@property(retain, nonatomic) NSString *sessionId; // @synthesize sessionId=_sessionId;

@end

