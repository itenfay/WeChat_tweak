//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray, NSString, WCFinderShareAttachInfo;

@interface WCMegaVideoShareItem : NSObject
{
    NSString *_objectId;
    NSString *_objectNonceId;
    NSString *_nickname;
    NSString *_avatar;
    NSString *_desc;
    NSString *_mediaCount;
    NSArray *_mediaList;
    NSString *_username;
    WCFinderShareAttachInfo *_finderInfo;
    unsigned long long _authIconType;
    NSString *_authIconUrl;
}

+ (id)modelCustomPropertyMapperForConfigTag:(id)arg1;
+ (id)modelContainerPropertyMappingForConfigTag:(id)arg1;
+ (id)nodeName;
+ (void)initialize;
+ (void)PBArrayAdd_authIconUrl;
+ (void)PBArrayAdd_authIconType;
+ (void)PBArrayAdd_finderInfo;
+ (void)PBArrayAdd_username;
+ (void)PBArrayAdd_mediaList;
+ (void)PBArrayAdd_mediaCount;
+ (void)PBArrayAdd_desc;
+ (void)PBArrayAdd_avatar;
+ (void)PBArrayAdd_nickname;
+ (void)PBArrayAdd_objectNonceId;
+ (void)PBArrayAdd_objectId;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *authIconUrl; // @synthesize authIconUrl=_authIconUrl;
@property(nonatomic) unsigned long long authIconType; // @synthesize authIconType=_authIconType;
@property(retain, nonatomic) WCFinderShareAttachInfo *finderInfo; // @synthesize finderInfo=_finderInfo;
@property(copy, nonatomic) NSString *username; // @synthesize username=_username;
@property(retain, nonatomic) NSArray *mediaList; // @synthesize mediaList=_mediaList;
@property(copy, nonatomic) NSString *mediaCount; // @synthesize mediaCount=_mediaCount;
@property(copy, nonatomic) NSString *desc; // @synthesize desc=_desc;
@property(copy, nonatomic) NSString *avatar; // @synthesize avatar=_avatar;
@property(copy, nonatomic) NSString *nickname; // @synthesize nickname=_nickname;
@property(copy, nonatomic) NSString *objectNonceId; // @synthesize objectNonceId=_objectNonceId;
@property(copy, nonatomic) NSString *objectId; // @synthesize objectId=_objectId;
- (_Bool)isEqual:(id)arg1;
- (id)converToShareFeedItem;
- (id)getGallaryDesc;
- (id)getTimelineDesc;
- (id)toXMLV2;
- (id)toXML;
- (void)fromXML:(struct XmlReaderNode_t *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

