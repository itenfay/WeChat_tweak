//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface KvReportItem28897
{
    unsigned int _scene_21;
    unsigned int _produceAction_23;
    unsigned int _consumeAction_24;
    unsigned int _preloadPicAction_28;
    NSString *_netType_22;
    long long _firstScreenTime_25;
    long long _receivePageDataTime_26;
    long long _pageFinishTime_27;
    long long _preloadPicDownloadTime_29;
    long long _preloadPicSize_30;
}

- (void).cxx_destruct;
@property(nonatomic) long long preloadPicSize_30; // @synthesize preloadPicSize_30=_preloadPicSize_30;
@property(nonatomic) long long preloadPicDownloadTime_29; // @synthesize preloadPicDownloadTime_29=_preloadPicDownloadTime_29;
@property(nonatomic) unsigned int preloadPicAction_28; // @synthesize preloadPicAction_28=_preloadPicAction_28;
@property(nonatomic) long long pageFinishTime_27; // @synthesize pageFinishTime_27=_pageFinishTime_27;
@property(nonatomic) long long receivePageDataTime_26; // @synthesize receivePageDataTime_26=_receivePageDataTime_26;
@property(nonatomic) long long firstScreenTime_25; // @synthesize firstScreenTime_25=_firstScreenTime_25;
@property(nonatomic) unsigned int consumeAction_24; // @synthesize consumeAction_24=_consumeAction_24;
@property(nonatomic) unsigned int produceAction_23; // @synthesize produceAction_23=_produceAction_23;
@property(copy, nonatomic) NSString *netType_22; // @synthesize netType_22=_netType_22;
@property(nonatomic) unsigned int scene_21; // @synthesize scene_21=_scene_21;
- (id)reportOrderedFieldNameArr;
- (unsigned int)reportKvId;

@end

