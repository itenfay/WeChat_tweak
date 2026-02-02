//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface MMOpenVoiceSessionKey : NSObject
{
    NSString *sessionKey;
    unsigned long long timeoutStamp;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long timeoutStamp; // @synthesize timeoutStamp;
@property(retain, nonatomic) NSString *sessionKey; // @synthesize sessionKey;
- (_Bool)isValid;
- (id)initWithKey:(id)arg1 now:(unsigned long long)arg2 lifespan:(unsigned int)arg3;

@end

