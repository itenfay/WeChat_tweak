//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSNumber, NSString;

@interface OMJILinkAppRequest : NSObject
{
    NSNumber *_commandID;
    NSNumber *_timeoutMillis;
    NSString *_URL;
    NSNumber *_retryCount;
    NSNumber *_limitFlow;
    NSNumber *_limitFrequency;
    NSNumber *_netType;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSNumber *netType; // @synthesize netType=_netType;
@property(retain, nonatomic) NSNumber *limitFrequency; // @synthesize limitFrequency=_limitFrequency;
@property(retain, nonatomic) NSNumber *limitFlow; // @synthesize limitFlow=_limitFlow;
@property(retain, nonatomic) NSNumber *retryCount; // @synthesize retryCount=_retryCount;
@property(retain, nonatomic) NSString *URL; // @synthesize URL=_URL;
@property(retain, nonatomic) NSNumber *timeoutMillis; // @synthesize timeoutMillis=_timeoutMillis;
@property(retain, nonatomic) NSNumber *commandID; // @synthesize commandID=_commandID;
- (id)description;
- (id)init;

@end

