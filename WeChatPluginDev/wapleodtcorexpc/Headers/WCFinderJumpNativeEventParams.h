//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSData, NSString;

@interface WCFinderJumpNativeEventParams : NSObject
{
    NSString *_eventIdStr;
    NSString *_byPassInfoString;
    NSData *_byPassInfo;
}

+ (id)modelCustomPropertyMapperForConfigTag:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSData *byPassInfo; // @synthesize byPassInfo=_byPassInfo;
@property(copy, nonatomic) NSString *byPassInfoString; // @synthesize byPassInfoString=_byPassInfoString;
@property(copy, nonatomic) NSString *eventIdStr; // @synthesize eventIdStr=_eventIdStr;
- (unsigned long long)eventId;

@end

