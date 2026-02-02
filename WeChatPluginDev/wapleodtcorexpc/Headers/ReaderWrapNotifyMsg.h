//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMReaderPubliserInfo, NSArray, NSString;

@interface ReaderWrapNotifyMsg : NSObject
{
    _Bool _isShowMsgCount;
    unsigned int _weappVersion;
    unsigned int _weappState;
    unsigned int _scene;
    unsigned int _msgVersion;
    unsigned int _msgShowFlag;
    unsigned int _msgBusiType;
    NSString *_title;
    NSString *_action;
    NSString *_title2;
    NSArray *_arrText;
    unsigned long long _clickType;
    NSString *_url;
    NSString *_weappUsername;
    NSString *_weappPath;
    NSString *_publisherUsername;
    NSString *_publisherNickname;
    double _space;
    NSString *_boxDigest;
    NSArray *_digestItems;
    NSString *_avatarUrl;
    NSString *_notifyMsgId;
    MMReaderPubliserInfo *_publisherInfo;
    NSString *_timeColorLight;
    NSString *_timeColorDark;
}

+ (id)modelContainerPropertyMappingForConfigTag:(id)arg1;
+ (id)modelCustomPropertyMapperForConfigTag:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *timeColorDark; // @synthesize timeColorDark=_timeColorDark;
@property(retain, nonatomic) NSString *timeColorLight; // @synthesize timeColorLight=_timeColorLight;
@property(nonatomic) unsigned int msgBusiType; // @synthesize msgBusiType=_msgBusiType;
@property(nonatomic) unsigned int msgShowFlag; // @synthesize msgShowFlag=_msgShowFlag;
@property(retain, nonatomic) MMReaderPubliserInfo *publisherInfo; // @synthesize publisherInfo=_publisherInfo;
@property(retain, nonatomic) NSString *notifyMsgId; // @synthesize notifyMsgId=_notifyMsgId;
@property(nonatomic) unsigned int msgVersion; // @synthesize msgVersion=_msgVersion;
@property(retain, nonatomic) NSString *avatarUrl; // @synthesize avatarUrl=_avatarUrl;
@property(retain, nonatomic) NSArray *digestItems; // @synthesize digestItems=_digestItems;
@property(nonatomic) _Bool isShowMsgCount; // @synthesize isShowMsgCount=_isShowMsgCount;
@property(retain, nonatomic) NSString *boxDigest; // @synthesize boxDigest=_boxDigest;
@property(nonatomic) double space; // @synthesize space=_space;
@property(nonatomic) unsigned int scene; // @synthesize scene=_scene;
@property(retain, nonatomic) NSString *publisherNickname; // @synthesize publisherNickname=_publisherNickname;
@property(retain, nonatomic) NSString *publisherUsername; // @synthesize publisherUsername=_publisherUsername;
@property(nonatomic) unsigned int weappState; // @synthesize weappState=_weappState;
@property(nonatomic) unsigned int weappVersion; // @synthesize weappVersion=_weappVersion;
@property(retain, nonatomic) NSString *weappPath; // @synthesize weappPath=_weappPath;
@property(retain, nonatomic) NSString *weappUsername; // @synthesize weappUsername=_weappUsername;
@property(retain, nonatomic) NSString *url; // @synthesize url=_url;
@property(nonatomic) unsigned long long clickType; // @synthesize clickType=_clickType;
@property(retain, nonatomic) NSArray *arrText; // @synthesize arrText=_arrText;
@property(retain, nonatomic) NSString *title2; // @synthesize title2=_title2;
@property(retain, nonatomic) NSString *action; // @synthesize action=_action;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
- (id)genAttrBoxDigest;
- (id)toXML;
- (_Bool)fromXML:(struct XmlReaderNode_t *)arg1;
- (id)weAppOpWrap;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isDataValid;

@end

