//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableArray, NSString;
@protocol FavTagEditViewDelegate;

@interface FavTagHintView
{
    NSMutableArray *m_arrHints;
    NSString *m_currentInput;
    id <FavTagEditViewDelegate> m_delegate;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *m_currentInput; // @synthesize m_currentInput;
@property(retain, nonatomic) NSMutableArray *m_arrHints; // @synthesize m_arrHints;
@property(nonatomic) __weak id <FavTagEditViewDelegate> m_delegate; // @synthesize m_delegate;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)initData;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

