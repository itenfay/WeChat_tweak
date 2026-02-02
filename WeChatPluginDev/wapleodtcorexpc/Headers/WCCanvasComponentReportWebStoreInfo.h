//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@interface WCCanvasComponentReportWebStoreInfo
{
    int _isPreloaded;
    int _didClickDone;
    unsigned long long _loadingTime;
}

@property(nonatomic) int didClickDone; // @synthesize didClickDone=_didClickDone;
@property(nonatomic) unsigned long long loadingTime; // @synthesize loadingTime=_loadingTime;
@property(nonatomic) int isPreloaded; // @synthesize isPreloaded=_isPreloaded;
- (id)dictionaryRepresentation;

@end

