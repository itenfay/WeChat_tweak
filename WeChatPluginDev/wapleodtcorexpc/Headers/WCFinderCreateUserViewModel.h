//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCFinderCreateUserViewModel : NSObject
{
    NSString *_curPoiCountry;
    NSString *_curPoiProvince;
    NSString *_curPoiCity;
    unsigned long long _maxWordCount;
    unsigned long long _minWordCount;
    long long _weixinSexType;
}

+ (id)genAgreementContent;
- (void).cxx_destruct;
@property(nonatomic) long long weixinSexType; // @synthesize weixinSexType=_weixinSexType;
@property(nonatomic) unsigned long long minWordCount; // @synthesize minWordCount=_minWordCount;
@property(nonatomic) unsigned long long maxWordCount; // @synthesize maxWordCount=_maxWordCount;
@property(copy, nonatomic) NSString *curPoiCity; // @synthesize curPoiCity=_curPoiCity;
@property(copy, nonatomic) NSString *curPoiProvince; // @synthesize curPoiProvince=_curPoiProvince;
@property(copy, nonatomic) NSString *curPoiCountry; // @synthesize curPoiCountry=_curPoiCountry;
- (void)fetchLocationAddressCodeWithCompletion:(CDUnknownBlockType)arg1 failed:(CDUnknownBlockType)arg2;
- (_Bool)hitNameProtect:(int)arg1;
- (_Bool)needVerifyName:(int)arg1;
- (id)tipsWithErrCode:(int)arg1;
- (_Bool)isInvalidInputErrCode:(int)arg1;
- (_Bool)isStringEmpty:(id)arg1;
- (_Bool)validateName:(id)arg1;
- (void)updateWithUserPrepareCache;
- (id)init;

@end

