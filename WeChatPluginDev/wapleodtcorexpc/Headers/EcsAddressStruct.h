//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface EcsAddressStruct : NSObject
{
    NSString *_userName;
    NSString *_postalCode;
    NSString *_nationalCode;
    NSString *_telNumber;
    NSString *_province;
    NSString *_city;
    NSString *_county;
    NSString *_street;
    NSString *_detail;
    NSString *_houseNum;
}

+ (id)nullableFromList:(id)arg1;
+ (id)fromList:(id)arg1;
+ (id)makeWithUserName:(id)arg1 postalCode:(id)arg2 nationalCode:(id)arg3 telNumber:(id)arg4 province:(id)arg5 city:(id)arg6 county:(id)arg7 street:(id)arg8 detail:(id)arg9 houseNum:(id)arg10;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *houseNum; // @synthesize houseNum=_houseNum;
@property(copy, nonatomic) NSString *detail; // @synthesize detail=_detail;
@property(copy, nonatomic) NSString *street; // @synthesize street=_street;
@property(copy, nonatomic) NSString *county; // @synthesize county=_county;
@property(copy, nonatomic) NSString *city; // @synthesize city=_city;
@property(copy, nonatomic) NSString *province; // @synthesize province=_province;
@property(copy, nonatomic) NSString *telNumber; // @synthesize telNumber=_telNumber;
@property(copy, nonatomic) NSString *nationalCode; // @synthesize nationalCode=_nationalCode;
@property(copy, nonatomic) NSString *postalCode; // @synthesize postalCode=_postalCode;
@property(copy, nonatomic) NSString *userName; // @synthesize userName=_userName;
- (id)toList;

@end

