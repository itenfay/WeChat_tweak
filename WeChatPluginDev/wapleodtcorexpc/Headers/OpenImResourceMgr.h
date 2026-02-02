//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString, OpenImResourceStorage;

@interface OpenImResourceMgr : NSObject
{
    NSMutableDictionary *m_TypeResource;
    OpenImResourceStorage *m_resourceStorage;
}

+ (_Bool)isWeWorkOpenIm:(id)arg1;
+ (id)resourcePathType;
- (void).cxx_destruct;
- (id)getWeWorkOpenImAcctType;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (_Bool)doUpdateOpenImResourceFromServer:(id)arg1 subType:(unsigned int)arg2 wordings:(id)arg3 checkTime:(_Bool)arg4;
- (_Bool)updateOpenImResourceFromServer:(id)arg1 subType:(unsigned int)arg2 wordings:(id)arg3;
- (id)openimWordingShortPY:(id)arg1 Appid:(id)arg2 subType:(unsigned int)arg3;
- (id)openimWordingShortPY:(id)arg1 Appid:(id)arg2;
- (id)openimWordingQuanPin:(id)arg1 Appid:(id)arg2 subType:(unsigned int)arg3;
- (id)openimWordingQuanPin:(id)arg1 Appid:(id)arg2;
- (id)openimWording:(id)arg1 Appid:(id)arg2 subType:(unsigned int)arg3;
- (id)openimWording:(id)arg1 Appid:(id)arg2;
- (id)openimCardName:(id)arg1;
- (id)openimContactListIconUrl:(id)arg1;
- (id)openimContactListName:(id)arg1;
- (id)openimDescIconUrl:(id)arg1 subType:(unsigned int)arg2;
- (id)openimFuncTip:(id)arg1 subType:(unsigned int)arg2;
- (id)openimCustomHeader:(id)arg1 subType:(unsigned int)arg2;
- (id)openimIntroURL:(id)arg1 subType:(unsigned int)arg2;
- (id)openimIconURL:(id)arg1 subType:(unsigned int)arg2;
- (id)openimName:(id)arg1 subType:(unsigned int)arg2;
- (unsigned int)openimFuncFlag:(id)arg1 subType:(unsigned int)arg2;
- (id)openimAcctType:(id)arg1 subType:(unsigned int)arg2;
- (id)openimAcctType:(id)arg1;
- (id)GetOpenImAppidResource:(id)arg1 subType:(unsigned int)arg2;
- (_Bool)tryUpdateOpenImResource:(id)arg1 subType:(unsigned int)arg2 wordings:(id)arg3 checkTime:(_Bool)arg4;
- (_Bool)tryUpdateOpenImResource:(id)arg1 wordings:(id)arg2 checkTime:(_Bool)arg3;
- (_Bool)tryUpdateOpenImResource:(id)arg1 subType:(unsigned int)arg2 wordings:(id)arg3;
- (_Bool)tryUpdateOpenImResource:(id)arg1 wordings:(id)arg2;
- (_Bool)checkOpenImResourceReady:(id)arg1 subType:(unsigned int)arg2 wordings:(id)arg3 checkTime:(_Bool)arg4;
- (_Bool)checkOpenImResourceReady:(id)arg1 wordings:(id)arg2 checkTime:(_Bool)arg3;
- (void)saveOpenImTypeResource;
- (_Bool)checkOpenImTypeResourceLanguageIsEqual:(id)arg1;
- (id)tryLoadOpenImTypeResource:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

