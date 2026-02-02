//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@interface MMIndexedContainerView
{
    _Bool _shouldEnableIndexing;
    long long _numOfViewsNoGreaterThanDefault;
    long long _defaultIndexBeginPos;
    long long _onceFlag;
}

@property(nonatomic) _Bool shouldEnableIndexing; // @synthesize shouldEnableIndexing=_shouldEnableIndexing;
@property(nonatomic) long long onceFlag; // @synthesize onceFlag=_onceFlag;
@property(nonatomic) long long defaultIndexBeginPos; // @synthesize defaultIndexBeginPos=_defaultIndexBeginPos;
@property(nonatomic) long long numOfViewsNoGreaterThanDefault; // @synthesize numOfViewsNoGreaterThanDefault=_numOfViewsNoGreaterThanDefault;
- (long long)getHierarchyIndexFromView:(id)arg1;
- (void)setHierarchyIndex:(long long)arg1 forView:(id)arg2;
- (void)checkCurrentHierarchy;
- (id)debugHierarchyInfo;
- (void)updateDefaultIndexRangeAfterInsertSubview:(id)arg1;
- (void)handleWillRemoveSubview:(id)arg1;
- (void)_handleSendSubviewToBack:(id)arg1;
- (void)handleSendSubviewToBack:(id)arg1;
- (void)_handleBringSubviewToFront:(id)arg1;
- (void)handleBringSubviewToFront:(id)arg1;
- (void)_handleInsertSubview:(id)arg1 aboveSubview:(id)arg2;
- (void)handleInsertSubview:(id)arg1 aboveSubview:(id)arg2;
- (void)_handleInsertSubview:(id)arg1 belowSubview:(id)arg2;
- (void)handleInsertSubview:(id)arg1 belowSubview:(id)arg2;
- (void)_handleAddSubview:(id)arg1;
- (void)handleAddSubview:(id)arg1;
- (void)_handleExchangeSubviewAtIndex:(long long)arg1 withSubviewAtIndex:(long long)arg2;
- (void)handleExchangeSubviewAtIndex:(long long)arg1 withSubviewAtIndex:(long long)arg2;
- (void)_handleInsertSubview:(id)arg1 atIndex:(long long)arg2;
- (void)handleInsertSubview:(id)arg1 atIndex:(long long)arg2;
- (void)_changeHierarchyIndexForSubview:(id)arg1 newHierarchyIndex:(long long)arg2;
- (void)changeHierarchyIndexForSubview:(id)arg1 newHierarchyIndex:(long long)arg2;
- (void)_addSubview:(id)arg1 atHierarchyIndex:(long long)arg2;
- (void)addSubview:(id)arg1 atHierarchyIndex:(long long)arg2;
- (void)willRemoveSubview:(id)arg1;
- (void)sendSubviewToBack:(id)arg1;
- (void)bringSubviewToFront:(id)arg1;
- (void)insertSubview:(id)arg1 aboveSubview:(id)arg2;
- (void)insertSubview:(id)arg1 belowSubview:(id)arg2;
- (void)addSubview:(id)arg1;
- (void)exchangeSubviewAtIndex:(long long)arg1 withSubviewAtIndex:(long long)arg2;
- (void)insertSubview:(id)arg1 atIndex:(long long)arg2;
- (_Bool)enableSubviewIndexing;
- (long long)subviewTopMostIndex;
- (long long)subviewDefaultFrontIndex;
- (long long)subviewDefaultIndex;
- (long long)subviewBottomMostIndex;

@end

