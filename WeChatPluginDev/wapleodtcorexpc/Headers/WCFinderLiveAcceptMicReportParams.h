//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSData, NSString;

@interface WCFinderLiveAcceptMicReportParams : NSObject
{
    NSString *_sessionId;
    unsigned long long _connectTimestampInMS;
    NSData *_liveCookies;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSData *liveCookies; // @synthesize liveCookies=_liveCookies;
@property(nonatomic) unsigned long long connectTimestampInMS; // @synthesize connectTimestampInMS=_connectTimestampInMS;
@property(retain, nonatomic) NSString *sessionId; // @synthesize sessionId=_sessionId;
- (id)paramDescription;

@end

