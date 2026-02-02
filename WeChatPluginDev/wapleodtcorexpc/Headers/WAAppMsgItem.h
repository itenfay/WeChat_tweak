//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableDictionary, NSString, WAAppPackageInfo, WADynamicPageInfo, WANativeAppMsgInfo, WAScreenVideoInfo, WAUpdatableMsgInfo, WAVideoPageInfo;

@interface WAAppMsgItem
{
    _Bool _isPrivateMessage;
    _Bool _disableForward;
    unsigned int _type;
    unsigned int _version;
    unsigned int _appServiceType;
    unsigned int _brandOfficialFlag;
    unsigned int _relievedBuyFlag;
    unsigned int _hasRelievedBuyPlugin;
    unsigned int _flagshipFlag;
    unsigned int _subType;
    unsigned int _scene;
    unsigned int _secFlagForSinglePageMode;
    NSString *_username;
    NSString *_appid;
    NSString *_pagepath;
    NSString *_weappIconUrl;
    NSString *_shareId;
    NSString *_shareKey;
    NSString *_shareName;
    long long _tradeCommentScore;
    WAAppPackageInfo *_packInfo;
    WADynamicPageInfo *_dynamicPageInfo;
    WAUpdatableMsgInfo *_updatableMsgInfo;
    NSString *_messageExtraData;
    WANativeAppMsgInfo *_nativeAppMsgInfo;
    WAVideoPageInfo *_videoPageInfo;
    WAScreenVideoInfo *_screenVideoInfo;
    NSString *_toDoActivityId;
    NSString *_favWeAppMsgId;
    NSMutableDictionary *_dynamicInfo;
    NSString *_weAppPageThumbRawUrl;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int secFlagForSinglePageMode; // @synthesize secFlagForSinglePageMode=_secFlagForSinglePageMode;
@property(retain, nonatomic) NSString *weAppPageThumbRawUrl; // @synthesize weAppPageThumbRawUrl=_weAppPageThumbRawUrl;
@property(retain, nonatomic) NSMutableDictionary *dynamicInfo; // @synthesize dynamicInfo=_dynamicInfo;
@property(retain, nonatomic) NSString *favWeAppMsgId; // @synthesize favWeAppMsgId=_favWeAppMsgId;
@property(nonatomic) unsigned int scene; // @synthesize scene=_scene;
@property(nonatomic) _Bool disableForward; // @synthesize disableForward=_disableForward;
@property(nonatomic) _Bool isPrivateMessage; // @synthesize isPrivateMessage=_isPrivateMessage;
@property(copy, nonatomic) NSString *toDoActivityId; // @synthesize toDoActivityId=_toDoActivityId;
@property(retain, nonatomic) WAScreenVideoInfo *screenVideoInfo; // @synthesize screenVideoInfo=_screenVideoInfo;
@property(retain, nonatomic) WAVideoPageInfo *videoPageInfo; // @synthesize videoPageInfo=_videoPageInfo;
@property(retain, nonatomic) WANativeAppMsgInfo *nativeAppMsgInfo; // @synthesize nativeAppMsgInfo=_nativeAppMsgInfo;
@property(retain, nonatomic) NSString *messageExtraData; // @synthesize messageExtraData=_messageExtraData;
@property(retain, nonatomic) WAUpdatableMsgInfo *updatableMsgInfo; // @synthesize updatableMsgInfo=_updatableMsgInfo;
@property(retain, nonatomic) WADynamicPageInfo *dynamicPageInfo; // @synthesize dynamicPageInfo=_dynamicPageInfo;
@property(retain, nonatomic) WAAppPackageInfo *packInfo; // @synthesize packInfo=_packInfo;
@property(nonatomic) unsigned int subType; // @synthesize subType=_subType;
@property(nonatomic) long long tradeCommentScore; // @synthesize tradeCommentScore=_tradeCommentScore;
@property(nonatomic) unsigned int flagshipFlag; // @synthesize flagshipFlag=_flagshipFlag;
@property(nonatomic) unsigned int hasRelievedBuyPlugin; // @synthesize hasRelievedBuyPlugin=_hasRelievedBuyPlugin;
@property(nonatomic) unsigned int relievedBuyFlag; // @synthesize relievedBuyFlag=_relievedBuyFlag;
@property(nonatomic) unsigned int brandOfficialFlag; // @synthesize brandOfficialFlag=_brandOfficialFlag;
@property(nonatomic) unsigned int appServiceType; // @synthesize appServiceType=_appServiceType;
@property(retain, nonatomic) NSString *shareName; // @synthesize shareName=_shareName;
@property(retain, nonatomic) NSString *shareKey; // @synthesize shareKey=_shareKey;
@property(retain, nonatomic) NSString *shareId; // @synthesize shareId=_shareId;
@property(retain, nonatomic) NSString *weappIconUrl; // @synthesize weappIconUrl=_weappIconUrl;
@property(nonatomic) unsigned int version; // @synthesize version=_version;
@property(nonatomic) unsigned int type; // @synthesize type=_type;
@property(retain, nonatomic) NSString *pagepath; // @synthesize pagepath=_pagepath;
@property(retain, nonatomic) NSString *appid; // @synthesize appid=_appid;
@property(retain, nonatomic) NSString *username; // @synthesize username=_username;
- (id)toXML;
- (_Bool)fromXML:(struct XmlReaderNode_t *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

