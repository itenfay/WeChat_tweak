//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface FavWeAppItem
{
    unsigned int _type;
    unsigned int _pkgType;
    unsigned int _version;
    unsigned int _disableForward;
    unsigned int _brandOfficialFlag;
    unsigned int _relievedBuyFlag;
    unsigned int _flagshipFlag;
    unsigned int _subType;
    NSString *_userName;
    NSString *_iconUrl;
    NSString *_pagePath;
    NSString *_sourceDisplayName;
    NSString *_appId;
    NSString *_messageExtraData;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int subType; // @synthesize subType=_subType;
@property(copy, nonatomic) NSString *messageExtraData; // @synthesize messageExtraData=_messageExtraData;
@property(nonatomic) unsigned int flagshipFlag; // @synthesize flagshipFlag=_flagshipFlag;
@property(nonatomic) unsigned int relievedBuyFlag; // @synthesize relievedBuyFlag=_relievedBuyFlag;
@property(nonatomic) unsigned int brandOfficialFlag; // @synthesize brandOfficialFlag=_brandOfficialFlag;
@property(nonatomic) unsigned int disableForward; // @synthesize disableForward=_disableForward;
@property(nonatomic) unsigned int version; // @synthesize version=_version;
@property(nonatomic) unsigned int pkgType; // @synthesize pkgType=_pkgType;
@property(nonatomic) unsigned int type; // @synthesize type=_type;
@property(copy, nonatomic) NSString *appId; // @synthesize appId=_appId;
@property(copy, nonatomic) NSString *sourceDisplayName; // @synthesize sourceDisplayName=_sourceDisplayName;
@property(copy, nonatomic) NSString *pagePath; // @synthesize pagePath=_pagePath;
@property(copy, nonatomic) NSString *iconUrl; // @synthesize iconUrl=_iconUrl;
@property(copy, nonatomic) NSString *userName; // @synthesize userName=_userName;

@end

