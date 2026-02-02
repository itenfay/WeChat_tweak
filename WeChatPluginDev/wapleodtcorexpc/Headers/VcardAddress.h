//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface VcardAddress : NSObject
{
    NSString *_postOfficeBox;
    NSString *_extendedAddress;
    NSString *_street;
    NSString *_locality;
    NSString *_region;
    NSString *_postalCode;
    NSString *_country;
}

+ (_Bool)isChineseAddress:(id)arg1;
+ (_Bool)isValidAddress:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *country; // @synthesize country=_country;
@property(retain, nonatomic) NSString *postalCode; // @synthesize postalCode=_postalCode;
@property(retain, nonatomic) NSString *region; // @synthesize region=_region;
@property(retain, nonatomic) NSString *locality; // @synthesize locality=_locality;
@property(retain, nonatomic) NSString *street; // @synthesize street=_street;
@property(retain, nonatomic) NSString *extendedAddress; // @synthesize extendedAddress=_extendedAddress;
@property(retain, nonatomic) NSString *postOfficeBox; // @synthesize postOfficeBox=_postOfficeBox;
- (void)print;

@end

