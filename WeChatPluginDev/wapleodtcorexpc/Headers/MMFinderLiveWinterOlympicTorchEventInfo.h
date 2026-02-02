//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSData, NSString;

@interface MMFinderLiveWinterOlympicTorchEventInfo : NSObject
{
    NSString *_eventNickname;
    NSString *_eventUsername;
    NSString *_eventWxUsername;
    NSString *_byPassInfoString;
    NSData *_byPassInfo;
    long long _relayIndex;
    NSString *_avatarUrl;
    unsigned long long _eventType;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long eventType; // @synthesize eventType=_eventType;
@property(retain, nonatomic) NSString *avatarUrl; // @synthesize avatarUrl=_avatarUrl;
@property(nonatomic) long long relayIndex; // @synthesize relayIndex=_relayIndex;
@property(retain, nonatomic) NSData *byPassInfo; // @synthesize byPassInfo=_byPassInfo;
@property(copy, nonatomic) NSString *byPassInfoString; // @synthesize byPassInfoString=_byPassInfoString;
@property(copy, nonatomic) NSString *eventWxUsername; // @synthesize eventWxUsername=_eventWxUsername;
@property(copy, nonatomic) NSString *eventUsername; // @synthesize eventUsername=_eventUsername;
@property(copy, nonatomic) NSString *eventNickname; // @synthesize eventNickname=_eventNickname;

@end

