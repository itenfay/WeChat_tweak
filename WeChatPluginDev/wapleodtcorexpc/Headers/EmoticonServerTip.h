//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface EmoticonServerTip
{
    _Bool _m_isNeedBadge;
    unsigned int _m_newCount;
    unsigned int _m_freeCount;
    unsigned int _m_lastUpdateTime;
    unsigned int _m_personalNewCount;
    unsigned int _m_addButtonNewCount;
    NSString *_m_iconUrl;
}

+ (id)loadFromCache;
+ (id)getSavePath;
+ (id)getSaveRootDir;
+ (void)initialize;
+ (void)PBArrayAdd_m_addButtonNewCount;
+ (void)PBArrayAdd_m_personalNewCount;
+ (void)PBArrayAdd_m_isNeedBadge;
+ (void)PBArrayAdd_m_lastUpdateTime;
+ (void)PBArrayAdd_m_iconUrl;
+ (void)PBArrayAdd_m_freeCount;
+ (void)PBArrayAdd_m_newCount;
- (void).cxx_destruct;
@property(nonatomic) _Bool m_isNeedBadge; // @synthesize m_isNeedBadge=_m_isNeedBadge;
@property(nonatomic) unsigned int m_addButtonNewCount; // @synthesize m_addButtonNewCount=_m_addButtonNewCount;
@property(nonatomic) unsigned int m_personalNewCount; // @synthesize m_personalNewCount=_m_personalNewCount;
@property(nonatomic) unsigned int m_lastUpdateTime; // @synthesize m_lastUpdateTime=_m_lastUpdateTime;
@property(retain, nonatomic) NSString *m_iconUrl; // @synthesize m_iconUrl=_m_iconUrl;
@property(nonatomic) unsigned int m_freeCount; // @synthesize m_freeCount=_m_freeCount;
@property(nonatomic) unsigned int m_newCount; // @synthesize m_newCount=_m_newCount;
- (void)saveToCache;
- (id)init;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

