//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, WCAdStateSettingBarInfo;

@interface WCAdStateSettingBarLogic
{
    _Bool _timerStarted;
    unsigned long long _barStyle;
    NSString *_tid;
    WCAdStateSettingBarInfo *_barInfo;
}

+ (id)getStateSettingBarLogicWithDataItem:(id)arg1 contentItemScene:(unsigned long long)arg2;
- (void).cxx_destruct;
@property(nonatomic) _Bool timerStarted; // @synthesize timerStarted=_timerStarted;
@property(retain, nonatomic) WCAdStateSettingBarInfo *barInfo; // @synthesize barInfo=_barInfo;
@property(copy, nonatomic) NSString *tid; // @synthesize tid=_tid;
@property(nonatomic) unsigned long long barStyle; // @synthesize barStyle=_barStyle;
- (void)dealloc;
- (void)updateStateSettingBarStyleWithAnimation;
- (void)startTimerIfNeed;
- (id)initWithDataItem:(id)arg1 contentItemScene:(unsigned long long)arg2;

@end

