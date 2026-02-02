//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface QBDNSRecord : NSObject
{
    _Bool _expired;
    int _ttl;
    long long _timeStamp;
    NSString *_value;
}

@property(readonly, nonatomic) NSString *value; // @synthesize value=_value;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (_Bool)expired;
- (id)init:(id)arg1 ttl:(int)arg2;

@end

