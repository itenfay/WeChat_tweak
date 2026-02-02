//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class FinderClientStatus, NSData, NSString, POIInfo;

@interface WCFinderPOIStreamRequestParams : NSObject
{
    _Bool _isPrefetch;
    int _tabId;
    int _poiFromType;
    int _commentScene;
    unsigned int _filterType;
    NSData *_lastBuffer;
    FinderClientStatus *_status;
    NSString *_poiClassifyId;
    unsigned long long _fromObjectId;
    POIInfo *_poiInfo;
    NSString *_jumpInfoToPoiStreamBypass;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *jumpInfoToPoiStreamBypass; // @synthesize jumpInfoToPoiStreamBypass=_jumpInfoToPoiStreamBypass;
@property(nonatomic) _Bool isPrefetch; // @synthesize isPrefetch=_isPrefetch;
@property(nonatomic) unsigned int filterType; // @synthesize filterType=_filterType;
@property(retain, nonatomic) POIInfo *poiInfo; // @synthesize poiInfo=_poiInfo;
@property(nonatomic) int commentScene; // @synthesize commentScene=_commentScene;
@property(nonatomic) int poiFromType; // @synthesize poiFromType=_poiFromType;
@property(nonatomic) unsigned long long fromObjectId; // @synthesize fromObjectId=_fromObjectId;
@property(retain, nonatomic) NSString *poiClassifyId; // @synthesize poiClassifyId=_poiClassifyId;
@property(retain, nonatomic) FinderClientStatus *status; // @synthesize status=_status;
@property(retain, nonatomic) NSData *lastBuffer; // @synthesize lastBuffer=_lastBuffer;
@property(nonatomic) int tabId; // @synthesize tabId=_tabId;

@end

