//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, POIInfo;

@interface WCFinderPOIParamsModel : NSObject
{
    _Bool _hideExactLocation;
    _Bool _isPrefetch;
    int _poiFromType;
    int _tabID;
    unsigned int _filterType;
    int _fromScene;
    POIInfo *_poiInfo;
    NSString *_poiClassifyId;
    NSString *_chatname;
    NSString *_reportID;
    unsigned long long _entryScene;
    unsigned long long _fromObjectId;
    NSString *_jumpInfoToPoiStreamBypass;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *jumpInfoToPoiStreamBypass; // @synthesize jumpInfoToPoiStreamBypass=_jumpInfoToPoiStreamBypass;
@property(nonatomic) _Bool isPrefetch; // @synthesize isPrefetch=_isPrefetch;
@property(nonatomic) int fromScene; // @synthesize fromScene=_fromScene;
@property(nonatomic) unsigned int filterType; // @synthesize filterType=_filterType;
@property(nonatomic) int tabID; // @synthesize tabID=_tabID;
@property(nonatomic) _Bool hideExactLocation; // @synthesize hideExactLocation=_hideExactLocation;
@property(nonatomic) unsigned long long fromObjectId; // @synthesize fromObjectId=_fromObjectId;
@property(nonatomic) unsigned long long entryScene; // @synthesize entryScene=_entryScene;
@property(nonatomic) int poiFromType; // @synthesize poiFromType=_poiFromType;
@property(copy, nonatomic) NSString *reportID; // @synthesize reportID=_reportID;
@property(copy, nonatomic) NSString *chatname; // @synthesize chatname=_chatname;
@property(copy, nonatomic) NSString *poiClassifyId; // @synthesize poiClassifyId=_poiClassifyId;
@property(retain, nonatomic) POIInfo *poiInfo; // @synthesize poiInfo=_poiInfo;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithFinderPOIRelatedWithPOIInfo:(id)arg1 poiClassifyId:(id)arg2 fromObjectId:(unsigned long long)arg3 reportID:(id)arg4 entryScene:(unsigned long long)arg5 jumpInfoToPoiStreamBypass:(id)arg6;
- (id)initWithSnsPOIRelatedStreamWithPOIInfo:(id)arg1 poiClassifyId:(id)arg2 chatname:(id)arg3 reportID:(id)arg4 entryScene:(unsigned long long)arg5;

@end

