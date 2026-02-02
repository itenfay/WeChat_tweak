//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class FinderLiveShopWindowAdItem_AdPage, FinderLiveShopWindowAdItem_Condition, NSString;

@interface MMFinderLiveAdsItem : NSObject
{
    _Bool _isPromoting;
    unsigned int _source;
    unsigned int _resourceType;
    unsigned int _subType;
    unsigned long long _adId;
    FinderLiveShopWindowAdItem_AdPage *_adPage;
    NSString *_title;
    NSString *_imgUrl;
    NSString *_desc;
    NSString *_buttonText;
    NSString *_platformName;
    NSString *_uxInfo;
    FinderLiveShopWindowAdItem_Condition *_condition;
    unsigned long long _partnerAdId;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long partnerAdId; // @synthesize partnerAdId=_partnerAdId;
@property(nonatomic) unsigned int subType; // @synthesize subType=_subType;
@property(nonatomic) unsigned int resourceType; // @synthesize resourceType=_resourceType;
@property(retain, nonatomic) FinderLiveShopWindowAdItem_Condition *condition; // @synthesize condition=_condition;
@property(nonatomic) unsigned int source; // @synthesize source=_source;
@property(retain, nonatomic) NSString *uxInfo; // @synthesize uxInfo=_uxInfo;
@property(nonatomic) _Bool isPromoting; // @synthesize isPromoting=_isPromoting;
@property(retain, nonatomic) NSString *platformName; // @synthesize platformName=_platformName;
@property(retain, nonatomic) NSString *buttonText; // @synthesize buttonText=_buttonText;
@property(retain, nonatomic) NSString *desc; // @synthesize desc=_desc;
@property(retain, nonatomic) NSString *imgUrl; // @synthesize imgUrl=_imgUrl;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) FinderLiveShopWindowAdItem_AdPage *adPage; // @synthesize adPage=_adPage;
@property(nonatomic) unsigned long long adId; // @synthesize adId=_adId;
- (void)copyFromPBItem:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithPBItem:(id)arg1;

@end

