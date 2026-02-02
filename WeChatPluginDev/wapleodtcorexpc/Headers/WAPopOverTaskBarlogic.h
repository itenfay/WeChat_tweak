//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUIViewController, NSMutableArray, NSString, WAPopOverView;

@interface WAPopOverTaskBarlogic
{
    unsigned int _currentDebugMode;
    NSMutableArray *_arrTaskItem;
    MMUIViewController *_containerVC;
    WAPopOverView *_popOverView;
    NSString *_currentUsername;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int currentDebugMode; // @synthesize currentDebugMode=_currentDebugMode;
@property(copy, nonatomic) NSString *currentUsername; // @synthesize currentUsername=_currentUsername;
@property(nonatomic) __weak WAPopOverView *popOverView; // @synthesize popOverView=_popOverView;
@property(nonatomic) __weak MMUIViewController *containerVC; // @synthesize containerVC=_containerVC;
@property(retain, nonatomic) NSMutableArray *arrTaskItem; // @synthesize arrTaskItem=_arrTaskItem;
- (void)taskBarView:(id)arg1 didSelectTaskItem:(id)arg2;
- (_Bool)isShouldShowTaskBarView;
- (id)taskItemAtRowIndex:(long long)arg1;
- (void)loadTaskItemListWithCount:(unsigned int)arg1;
- (void)reloadTaskItems;
- (void)initData;
- (id)initWithUsername:(id)arg1 debugMode:(unsigned int)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

