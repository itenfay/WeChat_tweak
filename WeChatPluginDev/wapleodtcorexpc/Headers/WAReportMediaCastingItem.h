//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface WAReportMediaCastingItem
{
    unsigned int _eventTimeMs;
    NSString *_videoURI;
    unsigned long long _eventID;
    unsigned long long _deviceCount;
    unsigned long long _castResult;
    unsigned long long _protocolType;
    NSString *_modelName;
    NSString *_manuFacturer;
    unsigned long long _videoState;
    unsigned long long _component;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long component; // @synthesize component=_component;
@property(nonatomic) unsigned long long videoState; // @synthesize videoState=_videoState;
@property(copy, nonatomic) NSString *manuFacturer; // @synthesize manuFacturer=_manuFacturer;
@property(copy, nonatomic) NSString *modelName; // @synthesize modelName=_modelName;
@property(nonatomic) unsigned long long protocolType; // @synthesize protocolType=_protocolType;
@property(nonatomic) unsigned long long castResult; // @synthesize castResult=_castResult;
@property(nonatomic) unsigned long long deviceCount; // @synthesize deviceCount=_deviceCount;
@property(nonatomic) unsigned long long eventID; // @synthesize eventID=_eventID;
@property(copy, nonatomic) NSString *videoURI; // @synthesize videoURI=_videoURI;
@property(nonatomic) unsigned int eventTimeMs; // @synthesize eventTimeMs=_eventTimeMs;
- (id)reportString;
- (int)reportID;
- (void)makeSafeString;

@end

