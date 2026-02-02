//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface UserInfoForReport : NSObject
{
    unsigned int _sex;
    unsigned int _distance;
    unsigned int _hasAlbumFlag;
    unsigned int _hasSignature;
    unsigned int _nickNameHasEmoji;
    unsigned int _hasFinderFlag;
    NSString *_country;
    NSString *_district;
    NSString *_city;
    NSString *_userName;
}

+ (unsigned int)parseDistanceStr:(id)arg1;
+ (id)genFromCContact:(id)arg1;
+ (id)genFromLBSContactInfo:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) unsigned int hasFinderFlag; // @synthesize hasFinderFlag=_hasFinderFlag;
@property(nonatomic) unsigned int nickNameHasEmoji; // @synthesize nickNameHasEmoji=_nickNameHasEmoji;
@property(nonatomic) unsigned int hasSignature; // @synthesize hasSignature=_hasSignature;
@property(nonatomic) unsigned int hasAlbumFlag; // @synthesize hasAlbumFlag=_hasAlbumFlag;
@property(nonatomic) unsigned int distance; // @synthesize distance=_distance;
@property(nonatomic) unsigned int sex; // @synthesize sex=_sex;
@property(retain, nonatomic) NSString *userName; // @synthesize userName=_userName;
@property(retain, nonatomic) NSString *city; // @synthesize city=_city;
@property(retain, nonatomic) NSString *district; // @synthesize district=_district;
@property(retain, nonatomic) NSString *country; // @synthesize country=_country;

@end

