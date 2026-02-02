//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSArray, NSString, SubscribeMsgResp;

@interface WASubscriptionMessageSettingsViewModel
{
    _Bool _dataReady;
    _Bool _globalSwitch;
    NSString *_detailTitle;
    NSArray *_items;
    NSString *_appName;
    SubscribeMsgResp *_originRes;
}

- (void).cxx_destruct;
@property(retain, nonatomic) SubscribeMsgResp *originRes; // @synthesize originRes=_originRes;
@property(nonatomic) _Bool globalSwitch; // @synthesize globalSwitch=_globalSwitch;
@property(nonatomic) _Bool dataReady; // @synthesize dataReady=_dataReady;
@property(copy, nonatomic) NSString *appName; // @synthesize appName=_appName;
@property(retain, nonatomic) NSArray *items; // @synthesize items=_items;
@property(copy, nonatomic) NSString *detailTitle; // @synthesize detailTitle=_detailTitle;
- (id)generateItemsWith:(id)arg1;
- (_Bool)itemsDataChanged;
- (id)toMsgItemsArrayUpdated;
- (_Bool)globalSwitchDataChanged;
- (id)_mergeResponseWithOriginResponse:(id)arg1 newResponse:(id)arg2;
- (void)mergeWithResponse:(id)arg1;
- (void)backToOrigin;
- (_Bool)dataChanged;
- (void)fillWithRes:(id)arg1;
- (id)initWithListResponse:(id)arg1;

@end

