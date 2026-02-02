//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface WAReportPageFrameInjectItem
{
    _Bool _isFromTaskPreload;
    unsigned int _appServiceType;
    int _injectCostTime;
    unsigned int _pageFrameLength;
    unsigned long long _injectStartTime;
    unsigned long long _injectEndTime;
    NSString *_moduleName;
    NSString *_lazyLoadKey;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *lazyLoadKey; // @synthesize lazyLoadKey=_lazyLoadKey;
@property(nonatomic) _Bool isFromTaskPreload; // @synthesize isFromTaskPreload=_isFromTaskPreload;
@property(nonatomic) unsigned int pageFrameLength; // @synthesize pageFrameLength=_pageFrameLength;
@property(copy, nonatomic) NSString *moduleName; // @synthesize moduleName=_moduleName;
@property(nonatomic) unsigned long long injectEndTime; // @synthesize injectEndTime=_injectEndTime;
@property(nonatomic) unsigned long long injectStartTime; // @synthesize injectStartTime=_injectStartTime;
@property(nonatomic) int injectCostTime; // @synthesize injectCostTime=_injectCostTime;
@property(nonatomic) unsigned int appServiceType; // @synthesize appServiceType=_appServiceType;
- (id)reportString;
- (int)reportID;

// Remaining properties
@property(copy, nonatomic) NSString *instanceId;

@end

