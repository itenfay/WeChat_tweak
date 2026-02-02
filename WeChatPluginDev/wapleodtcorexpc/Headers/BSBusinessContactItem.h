//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class BSBusinessServiceInfo, BusinessDetailInfo, CContact, NSString, SearchOrRecommendItemNew;

@interface BSBusinessContactItem : NSObject
{
    NSString *_nickName;
    BusinessDetailInfo *_detailInfo;
    SearchOrRecommendItemNew *_contactItem;
    BSBusinessServiceInfo *_serviceInfo;
    CContact *_contact;
    NSString *_jumpUrl;
}

+ (id)fromServerObj:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *jumpUrl; // @synthesize jumpUrl=_jumpUrl;
@property(retain, nonatomic) CContact *contact; // @synthesize contact=_contact;
@property(retain, nonatomic) BSBusinessServiceInfo *serviceInfo; // @synthesize serviceInfo=_serviceInfo;
@property(retain, nonatomic) SearchOrRecommendItemNew *contactItem; // @synthesize contactItem=_contactItem;
@property(retain, nonatomic) BusinessDetailInfo *detailInfo; // @synthesize detailInfo=_detailInfo;
@property(retain, nonatomic) NSString *nickName; // @synthesize nickName=_nickName;

@end

