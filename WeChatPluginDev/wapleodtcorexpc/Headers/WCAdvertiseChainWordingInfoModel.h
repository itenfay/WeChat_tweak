//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface WCAdvertiseChainWordingInfoModel : NSObject
{
    int _wordingType;
    unsigned int _wordingComplexExchangeValue;
    NSString *_wording;
    NSString *_wordingRepIOS;
    NSString *_wordingRepAndroid;
    NSString *_wordingLink;
    NSArray *_userNameList;
    NSString *_wordingComplexString;
}

+ (id)modelCustomPropertyMapperForConfigTag:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) unsigned int wordingComplexExchangeValue; // @synthesize wordingComplexExchangeValue=_wordingComplexExchangeValue;
@property(retain, nonatomic) NSString *wordingComplexString; // @synthesize wordingComplexString=_wordingComplexString;
@property(retain, nonatomic) NSArray *userNameList; // @synthesize userNameList=_userNameList;
@property(retain, nonatomic) NSString *wordingLink; // @synthesize wordingLink=_wordingLink;
@property(retain, nonatomic) NSString *wordingRepAndroid; // @synthesize wordingRepAndroid=_wordingRepAndroid;
@property(retain, nonatomic) NSString *wordingRepIOS; // @synthesize wordingRepIOS=_wordingRepIOS;
@property(retain, nonatomic) NSString *wording; // @synthesize wording=_wording;
@property(nonatomic) int wordingType; // @synthesize wordingType=_wordingType;
- (_Bool)isValid;

@end

