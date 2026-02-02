//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCFinderContactExtInfo : NSObject
{
    int _sexType;
    NSString *_country;
    NSString *_province;
    NSString *_city;
    unsigned long long _birthYear;
    unsigned long long _birthMonth;
    unsigned long long _birthDay;
}

+ (id)infoWithCountry:(id)arg1 province:(id)arg2 city:(id)arg3 sex:(int)arg4;
+ (id)infoWithFinderExtInfo:(id)arg1;
+ (unsigned long long)columnType;
+ (id)unarchiveWithWCTValue:(id)arg1;
+ (void)initialize;
+ (void)PBArrayAdd_birthDay;
+ (void)PBArrayAdd_birthMonth;
+ (void)PBArrayAdd_birthYear;
+ (void)PBArrayAdd_sexType;
+ (void)PBArrayAdd_city;
+ (void)PBArrayAdd_province;
+ (void)PBArrayAdd_country;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long birthDay; // @synthesize birthDay=_birthDay;
@property(nonatomic) unsigned long long birthMonth; // @synthesize birthMonth=_birthMonth;
@property(nonatomic) unsigned long long birthYear; // @synthesize birthYear=_birthYear;
@property(nonatomic) int sexType; // @synthesize sexType=_sexType;
@property(copy, nonatomic) NSString *city; // @synthesize city=_city;
@property(copy, nonatomic) NSString *province; // @synthesize province=_province;
@property(copy, nonatomic) NSString *country; // @synthesize country=_country;
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
- (id)convertToFinderContactExtInfo;
- (id)initWithCountry:(id)arg1 province:(id)arg2 city:(id)arg3 sex:(int)arg4;
- (id)initWithFinderExtInfo:(id)arg1;
- (id)archivedWCTValue;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

