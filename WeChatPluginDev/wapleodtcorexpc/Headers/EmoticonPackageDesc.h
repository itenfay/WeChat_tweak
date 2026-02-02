//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class EmotionLinkInfo, NSMutableArray, NSString;

@interface EmoticonPackageDesc
{
    unsigned int _m_lastRequestTime;
    unsigned int _m_clickFlag;
    NSMutableArray *_m_descList;
    NSString *_m_packageId;
    EmotionLinkInfo *_linkInfo;
}

+ (_Bool)canDownLoadForDownloadFlag:(unsigned int)arg1;
+ (id)loadFromCache:(id)arg1;
+ (id)getSavePath:(id)arg1;
+ (id)getSaveRootDir;
+ (id)getMd5Pid:(id)arg1;
+ (void)initialize;
+ (void)PBArrayAdd_linkInfo;
+ (void)PBArrayAdd_m_lastRequestTime;
+ (void)PBArrayAdd_m_clickFlag;
+ (void)PBArrayAdd_m_packageId;
+ (void)PBArrayAdd_m_descList;
- (void).cxx_destruct;
@property(retain, nonatomic) EmotionLinkInfo *linkInfo; // @synthesize linkInfo=_linkInfo;
@property(nonatomic) unsigned int m_clickFlag; // @synthesize m_clickFlag=_m_clickFlag;
@property(nonatomic) unsigned int m_lastRequestTime; // @synthesize m_lastRequestTime=_m_lastRequestTime;
@property(retain, nonatomic) NSString *m_packageId; // @synthesize m_packageId=_m_packageId;
@property(retain, nonatomic) NSMutableArray *m_descList; // @synthesize m_descList=_m_descList;
- (void)saveToCache;
- (_Bool)hasDesc;
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

