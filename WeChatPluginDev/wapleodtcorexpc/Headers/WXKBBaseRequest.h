//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WXKBBaseRequest : NSObject
{
    unsigned int _timestamp;
    NSString *_sessionId;
}

+ (id)modelCustomPropertyMapperForConfigTag:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) unsigned int timestamp; // @synthesize timestamp=_timestamp;
@property(retain, nonatomic) NSString *sessionId; // @synthesize sessionId=_sessionId;
- (_Bool)checkTime;

@end

