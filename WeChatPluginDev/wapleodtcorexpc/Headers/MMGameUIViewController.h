//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableArray;

@interface MMGameUIViewController
{
    _Bool _bTopWhiteStyle;
    _Bool _noNeedReport;
    unsigned int _sourceScene;
    unsigned int _currentScene;
    NSMutableArray *_visibleStateArray;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *visibleStateArray; // @synthesize visibleStateArray=_visibleStateArray;
@property(nonatomic) unsigned int currentScene; // @synthesize currentScene=_currentScene;
@property(nonatomic) unsigned int sourceScene; // @synthesize sourceScene=_sourceScene;
@property(nonatomic) _Bool noNeedReport; // @synthesize noNeedReport=_noNeedReport;
@property(nonatomic) _Bool bTopWhiteStyle; // @synthesize bTopWhiteStyle=_bTopWhiteStyle;
- (long long)overrideUserInterfaceStyle;
- (void)viewDidLoad;
- (void)OnReturn;
- (unsigned long long)calcForegroundTimeDuration;
- (id)getStatStr:(unsigned long long)arg1 ForegroundTime:(unsigned long long)arg2;
- (_Bool)pageTimeReport;
- (_Bool)addVisibleState:(_Bool)arg1 Reason:(id)arg2;
- (void)applicationWillResignActive;
- (void)applicationDidEnterBackground;
- (void)applicationWillEnterForeground;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)removeNotificationObservers;
- (void)initNotificationObservers;
- (void)dealloc;
- (id)initWithSourceScene:(unsigned int)arg1 CurrentScene:(unsigned int)arg2;

@end

