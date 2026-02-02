//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSData, NSString;

@interface BizAttrSyncBufferCacheItem
{
    NSString *_username;
    unsigned long long _lastUpdateTime;
    NSData *_syncBuf;
}

+ (void)initialize;
+ (void)PBArrayAdd_syncBuf;
+ (void)PBArrayAdd_lastUpdateTime;
+ (void)PBArrayAdd_username;
- (void).cxx_destruct;
@property(retain, nonatomic) NSData *syncBuf; // @synthesize syncBuf=_syncBuf;
@property(nonatomic) unsigned long long lastUpdateTime; // @synthesize lastUpdateTime=_lastUpdateTime;
@property(retain, nonatomic) NSString *username; // @synthesize username=_username;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

