//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface GameCenterGlobalSettingFetchInfo
{
    unsigned int _lastGlobalSettingFetchTime;
}

+ (void)initialize;
+ (void)PBArrayAdd_lastGlobalSettingFetchTime;
@property(nonatomic) unsigned int lastGlobalSettingFetchTime; // @synthesize lastGlobalSettingFetchTime=_lastGlobalSettingFetchTime;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

