//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class BatteryStrategy, ExpireTimeStrategy, NSMutableArray, WifiStrategy;

@interface MessageExposureStrategy : NSObject
{
    unsigned int _exposure_count;
    unsigned int _channel;
    float _click_score;
    int _ignore_exceed_exposure;
    NSMutableArray *_history_message_list;
    WifiStrategy *_wifi_strategy;
    ExpireTimeStrategy *_expire_time_strategy;
    BatteryStrategy *_battery_strategy;
}

+ (id)modelContainerPropertyMappingForConfigTag:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) int ignore_exceed_exposure; // @synthesize ignore_exceed_exposure=_ignore_exceed_exposure;
@property(nonatomic) float click_score; // @synthesize click_score=_click_score;
@property(nonatomic) unsigned int channel; // @synthesize channel=_channel;
@property(retain, nonatomic) BatteryStrategy *battery_strategy; // @synthesize battery_strategy=_battery_strategy;
@property(retain, nonatomic) ExpireTimeStrategy *expire_time_strategy; // @synthesize expire_time_strategy=_expire_time_strategy;
@property(retain, nonatomic) WifiStrategy *wifi_strategy; // @synthesize wifi_strategy=_wifi_strategy;
@property(nonatomic) unsigned int exposure_count; // @synthesize exposure_count=_exposure_count;
@property(retain, nonatomic) NSMutableArray *history_message_list; // @synthesize history_message_list=_history_message_list;

@end

