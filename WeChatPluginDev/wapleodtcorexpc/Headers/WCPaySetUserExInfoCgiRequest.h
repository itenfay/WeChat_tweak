//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, WCPayProfession;

@interface WCPaySetUserExInfoCgiRequest : NSObject
{
    NSString *_country;
    NSString *_province;
    NSString *_city;
    WCPayProfession *_profession;
    NSString *_nationality;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *nationality; // @synthesize nationality=_nationality;
@property(retain, nonatomic) WCPayProfession *profession; // @synthesize profession=_profession;
@property(copy, nonatomic) NSString *city; // @synthesize city=_city;
@property(copy, nonatomic) NSString *province; // @synthesize province=_province;
@property(copy, nonatomic) NSString *country; // @synthesize country=_country;

@end

