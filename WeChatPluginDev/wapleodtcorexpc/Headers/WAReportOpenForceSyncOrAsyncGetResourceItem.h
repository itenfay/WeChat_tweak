//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@interface WAReportOpenForceSyncOrAsyncGetResourceItem
{
    unsigned long long _resourceType;
    unsigned long long _forceTypeAndReason;
}

@property(nonatomic) unsigned long long forceTypeAndReason; // @synthesize forceTypeAndReason=_forceTypeAndReason;
@property(nonatomic) unsigned long long resourceType; // @synthesize resourceType=_resourceType;
- (id)reportString;
- (void)makeSafeString;
- (int)reportID;

@end

