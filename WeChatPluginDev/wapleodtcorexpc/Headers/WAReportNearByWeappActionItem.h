//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface WAReportNearByWeappActionItem
{
    unsigned int _appCount;
    unsigned int _clicktime;
    unsigned long long _enterScene;
    unsigned long long _openType;
    NSString *_nearbyListID;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int clicktime; // @synthesize clicktime=_clicktime;
@property(copy, nonatomic) NSString *nearbyListID; // @synthesize nearbyListID=_nearbyListID;
@property(nonatomic) unsigned int appCount; // @synthesize appCount=_appCount;
@property(nonatomic) unsigned long long openType; // @synthesize openType=_openType;
@property(nonatomic) unsigned long long enterScene; // @synthesize enterScene=_enterScene;
- (id)reportString;

// Remaining properties
@property(copy, nonatomic) NSString *sceneNote;

@end

