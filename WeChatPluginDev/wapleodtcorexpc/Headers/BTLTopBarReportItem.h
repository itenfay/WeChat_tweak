//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface BTLTopBarReportItem
{
    _Bool _hasDotNotice;
    _Bool _isLogoCache;
    _Bool _isDefaultLogo;
    _Bool _isBrandLiving;
    unsigned int _eventTime;
    unsigned int _exposeCount;
    unsigned int _clickCount;
    unsigned int _exposeReqId;
    unsigned int _barType;
    unsigned int _liveState;
    unsigned int _liveScene;
    unsigned int _barExpandType;
    unsigned int _exposedType;
    unsigned int _memberZoneStatus;
    unsigned long long _itemType;
    NSString *_itemId;
    unsigned long long _index;
    NSString *_bizUsrName;
    NSString *_logoUrl;
    NSString *_syncBuffer;
    unsigned long long _eventTimeMs;
    NSString *_liveExportId;
    unsigned long long _newMsgType;
    unsigned long long _finderUin;
    NSString *_finderUsername;
}

+ (id)reportItemWithBTLiveBarItemViewModel:(id)arg1 index:(unsigned long long)arg2;
+ (id)reportItemWithChannelItemModel:(id)arg1 index:(unsigned long long)arg2;
+ (id)reportItemWithBrandItemModel:(id)arg1 index:(unsigned long long)arg2;
+ (id)itemIdWithBrandItemModel:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *finderUsername; // @synthesize finderUsername=_finderUsername;
@property(nonatomic) unsigned long long finderUin; // @synthesize finderUin=_finderUin;
@property(nonatomic) unsigned int memberZoneStatus; // @synthesize memberZoneStatus=_memberZoneStatus;
@property(nonatomic) unsigned long long newMsgType; // @synthesize newMsgType=_newMsgType;
@property(nonatomic) unsigned int exposedType; // @synthesize exposedType=_exposedType;
@property(nonatomic) unsigned int barExpandType; // @synthesize barExpandType=_barExpandType;
@property(nonatomic) unsigned int liveScene; // @synthesize liveScene=_liveScene;
@property(nonatomic) _Bool isBrandLiving; // @synthesize isBrandLiving=_isBrandLiving;
@property(copy, nonatomic) NSString *liveExportId; // @synthesize liveExportId=_liveExportId;
@property(nonatomic) unsigned int liveState; // @synthesize liveState=_liveState;
@property(nonatomic) unsigned int barType; // @synthesize barType=_barType;
@property(nonatomic) _Bool isDefaultLogo; // @synthesize isDefaultLogo=_isDefaultLogo;
@property(nonatomic) unsigned int exposeReqId; // @synthesize exposeReqId=_exposeReqId;
@property(nonatomic) unsigned int clickCount; // @synthesize clickCount=_clickCount;
@property(nonatomic) unsigned int exposeCount; // @synthesize exposeCount=_exposeCount;
@property(nonatomic) unsigned long long eventTimeMs; // @synthesize eventTimeMs=_eventTimeMs;
@property(nonatomic) unsigned int eventTime; // @synthesize eventTime=_eventTime;
@property(nonatomic) _Bool isLogoCache; // @synthesize isLogoCache=_isLogoCache;
@property(copy, nonatomic) NSString *syncBuffer; // @synthesize syncBuffer=_syncBuffer;
@property(copy, nonatomic) NSString *logoUrl; // @synthesize logoUrl=_logoUrl;
@property(copy, nonatomic) NSString *bizUsrName; // @synthesize bizUsrName=_bizUsrName;
@property(nonatomic) _Bool hasDotNotice; // @synthesize hasDotNotice=_hasDotNotice;
@property(nonatomic) unsigned long long index; // @synthesize index=_index;
@property(copy, nonatomic) NSString *itemId; // @synthesize itemId=_itemId;
@property(nonatomic) unsigned long long itemType; // @synthesize itemType=_itemType;
- (id)oftenReadBarClickInfo;
- (id)oftenReadBarShowInfo;
- (_Bool)isSameAsItem:(id)arg1;

@end

