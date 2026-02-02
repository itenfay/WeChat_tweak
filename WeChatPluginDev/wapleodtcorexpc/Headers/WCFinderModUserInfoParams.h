//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class FinderNotRecommendInfo, NSString;

@interface WCFinderModUserInfoParams : NSObject
{
    _Bool _notShowLocation;
    _Bool _notShowSex;
    _Bool _notShowBirth;
    int _sex;
    unsigned int _birthYear;
    unsigned int _birthMonth;
    unsigned int _birthDay;
    unsigned int _privateSwitch;
    unsigned int _finderVideoSwitch;
    unsigned int _audienceMuteSwitch;
    int _privacyLevel;
    int _comment_privacyLevel;
    int _greet_privacyLevel;
    NSString *_nickname;
    NSString *_signature;
    NSString *_coverImgUrl;
    NSString *_headImageUrl;
    NSString *_country;
    NSString *_province;
    NSString *_city;
    NSString *_realCountry;
    NSString *_realProvince;
    NSString *_realCity;
    FinderNotRecommendInfo *_notRecommendInfo;
    unsigned long long _miniappReferenceSwitch;
    unsigned long long _hiddenMentionFeedSwitch;
    unsigned long long _musicForbidReproduce;
    unsigned long long _showLiveDataAtProfile;
    unsigned long long _mjForbidReproduce;
}

+ (unsigned long long)valueWithBOOL:(_Bool)arg1;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long mjForbidReproduce; // @synthesize mjForbidReproduce=_mjForbidReproduce;
@property(nonatomic) unsigned long long showLiveDataAtProfile; // @synthesize showLiveDataAtProfile=_showLiveDataAtProfile;
@property(nonatomic) unsigned long long musicForbidReproduce; // @synthesize musicForbidReproduce=_musicForbidReproduce;
@property(nonatomic) unsigned long long hiddenMentionFeedSwitch; // @synthesize hiddenMentionFeedSwitch=_hiddenMentionFeedSwitch;
@property(nonatomic) unsigned long long miniappReferenceSwitch; // @synthesize miniappReferenceSwitch=_miniappReferenceSwitch;
@property(retain, nonatomic) FinderNotRecommendInfo *notRecommendInfo; // @synthesize notRecommendInfo=_notRecommendInfo;
@property(nonatomic) int greet_privacyLevel; // @synthesize greet_privacyLevel=_greet_privacyLevel;
@property(nonatomic) int comment_privacyLevel; // @synthesize comment_privacyLevel=_comment_privacyLevel;
@property(nonatomic) int privacyLevel; // @synthesize privacyLevel=_privacyLevel;
@property(nonatomic) unsigned int audienceMuteSwitch; // @synthesize audienceMuteSwitch=_audienceMuteSwitch;
@property(nonatomic) unsigned int finderVideoSwitch; // @synthesize finderVideoSwitch=_finderVideoSwitch;
@property(nonatomic) unsigned int privateSwitch; // @synthesize privateSwitch=_privateSwitch;
@property(nonatomic) _Bool notShowBirth; // @synthesize notShowBirth=_notShowBirth;
@property(nonatomic) _Bool notShowSex; // @synthesize notShowSex=_notShowSex;
@property(nonatomic) _Bool notShowLocation; // @synthesize notShowLocation=_notShowLocation;
@property(nonatomic) unsigned int birthDay; // @synthesize birthDay=_birthDay;
@property(nonatomic) unsigned int birthMonth; // @synthesize birthMonth=_birthMonth;
@property(nonatomic) unsigned int birthYear; // @synthesize birthYear=_birthYear;
@property(nonatomic) int sex; // @synthesize sex=_sex;
@property(copy, nonatomic) NSString *realCity; // @synthesize realCity=_realCity;
@property(copy, nonatomic) NSString *realProvince; // @synthesize realProvince=_realProvince;
@property(copy, nonatomic) NSString *realCountry; // @synthesize realCountry=_realCountry;
@property(copy, nonatomic) NSString *city; // @synthesize city=_city;
@property(copy, nonatomic) NSString *province; // @synthesize province=_province;
@property(copy, nonatomic) NSString *country; // @synthesize country=_country;
@property(copy, nonatomic) NSString *headImageUrl; // @synthesize headImageUrl=_headImageUrl;
@property(copy, nonatomic) NSString *coverImgUrl; // @synthesize coverImgUrl=_coverImgUrl;
@property(copy, nonatomic) NSString *signature; // @synthesize signature=_signature;
@property(copy, nonatomic) NSString *nickname; // @synthesize nickname=_nickname;
- (id)init;

@end

