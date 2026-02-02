//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class BrandFinderLiveDataWrapperMedia, NSString;

@interface BrandFinderLiveDataWrapper : NSObject
{
    unsigned int _finderLiveReplayStatus;
    unsigned int _liveFlag;
    NSString *_finderUserName;
    unsigned long long _liveID;
    NSString *_feedID;
    NSString *_nonceID;
    NSString *_exportId;
    NSString *_finderNickName;
    NSString *_headUrl;
    NSString *_desc;
    unsigned long long _finderLiveStatus;
    double _liveExtFlag;
    NSString *_authIconUrl;
    NSString *_authIconTypeStr;
    BrandFinderLiveDataWrapperMedia *_media;
    NSString *_category;
    NSString *_recommendReason;
}

+ (id)modelPropertyBlacklistForConfigTag:(id)arg1;
+ (id)modelContainerPropertyMappingForConfigTag:(id)arg1;
+ (id)modelCustomPropertyMapperForConfigTag:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) unsigned int liveFlag; // @synthesize liveFlag=_liveFlag;
@property(copy, nonatomic) NSString *recommendReason; // @synthesize recommendReason=_recommendReason;
@property(copy, nonatomic) NSString *category; // @synthesize category=_category;
@property(retain, nonatomic) BrandFinderLiveDataWrapperMedia *media; // @synthesize media=_media;
@property(copy, nonatomic) NSString *authIconTypeStr; // @synthesize authIconTypeStr=_authIconTypeStr;
@property(copy, nonatomic) NSString *authIconUrl; // @synthesize authIconUrl=_authIconUrl;
@property(nonatomic) double liveExtFlag; // @synthesize liveExtFlag=_liveExtFlag;
@property(nonatomic) unsigned int finderLiveReplayStatus; // @synthesize finderLiveReplayStatus=_finderLiveReplayStatus;
@property(nonatomic) unsigned long long finderLiveStatus; // @synthesize finderLiveStatus=_finderLiveStatus;
@property(copy, nonatomic) NSString *desc; // @synthesize desc=_desc;
@property(copy, nonatomic) NSString *headUrl; // @synthesize headUrl=_headUrl;
@property(copy, nonatomic) NSString *finderNickName; // @synthesize finderNickName=_finderNickName;
@property(copy, nonatomic) NSString *exportId; // @synthesize exportId=_exportId;
@property(copy, nonatomic) NSString *nonceID; // @synthesize nonceID=_nonceID;
@property(copy, nonatomic) NSString *feedID; // @synthesize feedID=_feedID;
@property(nonatomic) unsigned long long liveID; // @synthesize liveID=_liveID;
@property(copy, nonatomic) NSString *finderUserName; // @synthesize finderUserName=_finderUserName;
- (id)description;
- (void)internalSetFinderReplayStatus:(unsigned int)arg1 shouldCallExtension:(_Bool)arg2;
- (void)internalSetFinderLiveStatus:(unsigned long long)arg1 shouldCallExtension:(_Bool)arg2;
- (id)liveStatusWording:(_Bool)arg1;
- (_Bool)canForward;
- (_Bool)isValid;
- (_Bool)isReplay;
- (_Bool)isLive;
- (void)fetchLiveStatusWithSuccessBlock:(CDUnknownBlockType)arg1 failBlock:(CDUnknownBlockType)arg2;
- (void)fetchDetailDataWithSuccessBlock:(CDUnknownBlockType)arg1 failBlock:(CDUnknownBlockType)arg2;
- (void)updateDetailDataFromDb;
- (id)toXML;
- (_Bool)fromXML:(struct XmlReaderNode_t *)arg1;
- (id)initFromXML:(struct XmlReaderNode_t *)arg1;
- (id)initWithBizProfileFinderLiveInfo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

