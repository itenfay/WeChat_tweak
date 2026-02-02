//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableArray, NSString;

@interface MMWindowMgr
{
    NSMutableArray *m_WindowMgrObjArr;
}

- (void).cxx_destruct;
- (void)doWindowClose:(id)arg1 isTop:(_Bool)arg2 WithCompletion:(CDUnknownBlockType)arg3;
- (id)getTopWindowLess:(int)arg1;
- (_Bool)isContainWindowObj:(id)arg1;
- (_Bool)isContainVisibleWindowGreaterThan:(id)arg1;
- (id)getVisibleTopMainSceneWindow:(Class)arg1;
- (id)getTopWindow;
- (id)getMainSceneTopVisibleWindow;
- (id)getMainSceneTopWindow;
- (void)showTopWindow;
- (void)closeWindowWithViewController:(id)arg1 andAnimation:(int)arg2 completion:(CDUnknownBlockType)arg3;
- (void)closeWindowWithViewController:(id)arg1 andAnimation:(int)arg2;
- (id)getMainWindow;
- (id)getWinMgrObjByVC:(id)arg1;
- (_Bool)isTopViewController:(id)arg1;
- (_Bool)shouldShowWindow:(id)arg1;
- (_Bool)isMaxLevel:(int)arg1;
- (_Bool)isExsitVCObj:(id)arg1;
- (_Bool)isExsitVCClassName:(Class)arg1;
- (_Bool)isCanInsert:(id)arg1;
- (void)insertNewWindowMgrObj:(id)arg1;
- (void)showNewWindowMgrObj:(id)arg1 withAnimated:(int)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

