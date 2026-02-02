//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCPayAddressInfo : NSObject
{
    NSString *_address_name;
    NSString *_phone_num;
    NSString *_address;
}

+ (id)GenFromDictionary:(id)arg1;
- (void).cxx_destruct;
@property(retain) NSString *address; // @synthesize address=_address;
@property(retain) NSString *phone_num; // @synthesize phone_num=_phone_num;
@property(retain) NSString *address_name; // @synthesize address_name=_address_name;
- (void)genFromDic:(id)arg1;

@end

