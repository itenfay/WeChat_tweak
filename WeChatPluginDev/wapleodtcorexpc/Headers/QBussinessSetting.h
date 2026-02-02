//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSDictionary, NSString, QBusinessConf;

@interface QBussinessSetting : NSObject
{
    NSString *_sdk_protocol;
    NSString *__private_partner;
    QBusinessConf *_business_conf;
    NSDictionary *_services;
}

+ (_Bool)validateDict:(id)arg1 withAPIKey:(id)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) NSDictionary *services; // @synthesize services=_services;
@property(retain, nonatomic) QBusinessConf *business_conf; // @synthesize business_conf=_business_conf;
@property(retain, nonatomic) NSString *_private_partner; // @synthesize _private_partner=__private_partner;
@property(retain, nonatomic) NSString *sdk_protocol; // @synthesize sdk_protocol=_sdk_protocol;
- (id)initWithDict:(id)arg1;

@end

