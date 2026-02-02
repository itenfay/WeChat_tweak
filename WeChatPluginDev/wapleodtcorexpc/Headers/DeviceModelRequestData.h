//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface DeviceModelRequestData
{
    unsigned int _m_lastRequestTime;
}

+ (id)loadFromFile;
+ (id)getSavePath;
+ (id)getSaveRootDir;
+ (void)initialize;
+ (void)PBArrayAdd_m_lastRequestTime;
@property(nonatomic) unsigned int m_lastRequestTime; // @synthesize m_lastRequestTime=_m_lastRequestTime;
- (void)saveToCache;
- (id)init;
- (_Bool)isTimeForRequestNewData;
- (void)updateLastRequestTime;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

