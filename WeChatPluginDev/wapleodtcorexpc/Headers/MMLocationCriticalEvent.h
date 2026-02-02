//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSDictionary;

@interface MMLocationCriticalEvent : NSObject
{
    double _beginTime;
    double _endTime;
    NSDictionary *_eventInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSDictionary *eventInfo; // @synthesize eventInfo=_eventInfo;
@property(nonatomic) double endTime; // @synthesize endTime=_endTime;
@property(nonatomic) double beginTime; // @synthesize beginTime=_beginTime;

@end

