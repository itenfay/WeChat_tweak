//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class WCTDatabase, WCTTable;

@interface EmoticonDataDB : NSObject
{
    WCTDatabase *_m_emoticonDB;
    WCTTable *_m_tableEmoticon;
    WCTTable *_m_tableEmoticonPackage;
    WCTTable *_tableEmoticonSetInfo;
}

- (void).cxx_destruct;
@property(retain) WCTTable *tableEmoticonSetInfo; // @synthesize tableEmoticonSetInfo=_tableEmoticonSetInfo;
@property(retain) WCTTable *m_tableEmoticonPackage; // @synthesize m_tableEmoticonPackage=_m_tableEmoticonPackage;
@property(retain) WCTTable *m_tableEmoticon; // @synthesize m_tableEmoticon=_m_tableEmoticon;
@property(retain) WCTDatabase *m_emoticonDB; // @synthesize m_emoticonDB=_m_emoticonDB;
- (id)internalCreateEmoticonTable:(id)arg1 tableClass:(Class)arg2;
- (void)enableMigrate;
- (void)close;
- (void)dealloc;
- (void)reloadWithDBPath:(id)arg1 mmdbPath:(id)arg2;
- (id)DeleteEmoticonByPackageId:(id)arg1 WithoutExtFlag:(unsigned int)arg2;
- (id)GetEmoticonsOnProperty:(const void *)arg1 Where:(const void *)arg2 orders:(const void *)arg3 limit:(int)arg4;
- (id)FilterNotInDBList:(id)arg1;
- (id)lastestSentMd5InMd5list:(id)arg1;
- (_Bool)IsEmoticonExistInCameraListByMd5:(id)arg1;
- (_Bool)IsEmoticonExistInCustomListByMd5:(id)arg1;
- (_Bool)IsEmoticonExist:(id)arg1;
- (_Bool)DeleteEmoticonByMD5:(id)arg1;
- (id)deleteEmoticonByPid:(id)arg1;
- (id)getRecentUsedEmoticonList:(unsigned int)arg1;
- (id)getEmoticonListByPackageId:(id)arg1;
- (id)getEmoticonWrapByMd5:(id)arg1;
- (id)getCameraEmoticonList;
- (id)getSelfEmoticonList;
- (_Bool)updateEmoticon:(id)arg1 extFlag:(unsigned int)arg2 needOverWrite:(_Bool)arg3;
- (_Bool)updateEmoticon:(id)arg1 packageId:(id)arg2;
- (_Bool)updateEmoticon:(id)arg1 usedTime:(unsigned int)arg2;
- (_Bool)updateEmoticon:(id)arg1 productId:(id)arg2 extInfo:(id)arg3 extFlag:(id)arg4 indexInPack:(id)arg5;
- (_Bool)insertEmoticonWithMD5:(id)arg1 type:(unsigned int)arg2 productId:(id)arg3 extInfo:(id)arg4 extFlag:(unsigned int)arg5 indexInPack:(id)arg6;
- (_Bool)AddEmoticon:(id)arg1 Type:(unsigned int)arg2 ProductId:(id)arg3 ExtInfo:(id)arg4 ExtFlag:(unsigned int)arg5 IndexInPack:(id)arg6;
- (_Bool)AddEmoticon:(id)arg1 Type:(unsigned int)arg2;
- (id)GetEmoticonList;
- (id)convertEmoticonsFromDBObjects:(id)arg1 isFullField:(_Bool)arg2;
- (void)convertEmotcion:(id)arg1 fromDBObject:(id)arg2 isFullField:(_Bool)arg3;
- (void)fillEmoticonListQueryPropery:(void *)arg1 isFullField:(_Bool)arg2;
- (void)fillEmoticonPackageQueryProperty:(void *)arg1;
- (_Bool)addPackageList:(id)arg1;
- (_Bool)clearAllData;
- (_Bool)isEmoticonPackageDownLoaded:(id)arg1;
- (_Bool)isEmoticonPackagePurchased:(id)arg1;
- (_Bool)isEmoticonPackageExist:(id)arg1;
- (_Bool)deleteEmoticonPackageByPid:(id)arg1;
- (id)getDesignerIPSetKey:(id)arg1;
- (id)getDesignerUin:(id)arg1;
- (id)getDesignerPids:(id)arg1;
- (id)getNeedUpdateDesignerPids;
- (id)getDistinctDesignerUin;
- (id)getEmoticonPackageList;
- (id)getEmoticonPackageByPid:(id)arg1;
- (_Bool)update:(id)arg1 designerIPSetKey:(id)arg2;
- (_Bool)update:(id)arg1 designerUin:(id)arg2;
- (_Bool)update:(id)arg1 count:(unsigned int)arg2;
- (_Bool)update:(id)arg1 downloadStatus:(unsigned int)arg2;
- (_Bool)update:(id)arg1 payStatus:(unsigned int)arg2;
- (_Bool)addEmoticonPackage:(id)arg1 name:(id)arg2 iconUrl:(id)arg3 payStatus:(unsigned int)arg4 downloadStatus:(unsigned int)arg5;
- (void)fillEmoticonSetInfoQueryProperty:(void *)arg1;
- (_Bool)delSetInfoFor:(id)arg1;
- (_Bool)delAllSetInfo;
- (id)getAllSetInfo;
- (id)getSetInfoFor:(id)arg1;
- (_Bool)update:(id)arg1 panelUrl:(id)arg2;
- (_Bool)update:(id)arg1 iconUrl:(id)arg2;
- (_Bool)update:(id)arg1 desc:(id)arg2;
- (_Bool)update:(id)arg1 title:(id)arg2;
- (_Bool)addSetInfoWith:(id)arg1 title:(id)arg2 desc:(id)arg3 iconUrl:(id)arg4 panelUrl:(id)arg5;

@end

