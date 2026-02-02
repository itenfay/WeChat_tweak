//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class FinderGetTopicListResponse, FinderLocation, NSArray, NSString, WCFinderSectionInfo;
@protocol WCFinderEventViewControllerDelegate;

@interface WCFinderTopicListParams : NSObject
{
    int _type;
    int _tabType;
    int _fromType;
    unsigned int _topicNewLifeEnterScene;
    int _poiFromType;
    int _poiTabID;
    int _poiFromScene;
    NSString *_topic;
    FinderLocation *_location;
    NSString *_latitude;
    NSString *_longitude;
    NSString *_refObjectId;
    NSString *_groupBuyBypassData;
    FinderGetTopicListResponse *_cacheResponse;
    NSArray *_cacheDataItems;
    WCFinderSectionInfo *_sectionInfo;
    NSString *_refUsername;
    unsigned long long _eventTopicId;
    NSString *_encryptedTopicId;
    id <WCFinderEventViewControllerDelegate> _eventDelegate;
    unsigned long long _musicTopicId;
    NSString *_patTopicStr;
    unsigned long long _eventEnterScene;
    unsigned long long _eventNewLifeEnterScene;
    unsigned long long _sourceType;
    unsigned long long _entryType;
    NSString *_jsapiKVReportInfo;
}

- (void).cxx_destruct;
@property(nonatomic) int poiFromScene; // @synthesize poiFromScene=_poiFromScene;
@property(nonatomic) int poiTabID; // @synthesize poiTabID=_poiTabID;
@property(nonatomic) int poiFromType; // @synthesize poiFromType=_poiFromType;
@property(copy, nonatomic) NSString *jsapiKVReportInfo; // @synthesize jsapiKVReportInfo=_jsapiKVReportInfo;
@property(nonatomic) unsigned long long entryType; // @synthesize entryType=_entryType;
@property(nonatomic) unsigned long long sourceType; // @synthesize sourceType=_sourceType;
@property(nonatomic) unsigned int topicNewLifeEnterScene; // @synthesize topicNewLifeEnterScene=_topicNewLifeEnterScene;
@property(nonatomic) unsigned long long eventNewLifeEnterScene; // @synthesize eventNewLifeEnterScene=_eventNewLifeEnterScene;
@property(nonatomic) unsigned long long eventEnterScene; // @synthesize eventEnterScene=_eventEnterScene;
@property(copy, nonatomic) NSString *patTopicStr; // @synthesize patTopicStr=_patTopicStr;
@property(nonatomic) unsigned long long musicTopicId; // @synthesize musicTopicId=_musicTopicId;
@property(nonatomic) __weak id <WCFinderEventViewControllerDelegate> eventDelegate; // @synthesize eventDelegate=_eventDelegate;
@property(copy, nonatomic) NSString *encryptedTopicId; // @synthesize encryptedTopicId=_encryptedTopicId;
@property(nonatomic) unsigned long long eventTopicId; // @synthesize eventTopicId=_eventTopicId;
@property(copy, nonatomic) NSString *refUsername; // @synthesize refUsername=_refUsername;
@property(nonatomic) int fromType; // @synthesize fromType=_fromType;
@property(nonatomic) int tabType; // @synthesize tabType=_tabType;
@property(retain, nonatomic) WCFinderSectionInfo *sectionInfo; // @synthesize sectionInfo=_sectionInfo;
@property(retain, nonatomic) NSArray *cacheDataItems; // @synthesize cacheDataItems=_cacheDataItems;
@property(retain, nonatomic) FinderGetTopicListResponse *cacheResponse; // @synthesize cacheResponse=_cacheResponse;
@property(copy, nonatomic) NSString *groupBuyBypassData; // @synthesize groupBuyBypassData=_groupBuyBypassData;
@property(copy, nonatomic) NSString *refObjectId; // @synthesize refObjectId=_refObjectId;
@property(copy, nonatomic) NSString *longitude; // @synthesize longitude=_longitude;
@property(copy, nonatomic) NSString *latitude; // @synthesize latitude=_latitude;
@property(retain, nonatomic) FinderLocation *location; // @synthesize location=_location;
@property(copy, nonatomic) NSString *topic; // @synthesize topic=_topic;
@property(nonatomic) int type; // @synthesize type=_type;
- (void)setBindEvent:(id)arg1;

@end

