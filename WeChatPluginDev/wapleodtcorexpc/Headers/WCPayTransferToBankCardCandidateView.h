//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableArray, NSString, UITableView;
@protocol WCPayTransferToBankCardCandidateViewDelegate;

@interface WCPayTransferToBankCardCandidateView
{
    UITableView *m_candidateTableView;
    id <WCPayTransferToBankCardCandidateViewDelegate> m_delegate;
    unsigned long long m_enMatchRule;
    NSMutableArray *_m_resultsArray;
    NSString *_m_inputText;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *m_inputText; // @synthesize m_inputText=_m_inputText;
@property(retain, nonatomic) NSMutableArray *m_resultsArray; // @synthesize m_resultsArray=_m_resultsArray;
@property(nonatomic) unsigned long long m_enMatchRule; // @synthesize m_enMatchRule;
@property(nonatomic) __weak id <WCPayTransferToBankCardCandidateViewDelegate> m_delegate; // @synthesize m_delegate;
- (void)layoutCell:(id)arg1 candidate:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)reloadCandidateView;
- (void)setFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)initView;
- (void)reloadCandidateViewWithMatchResults:(id)arg1 matchType:(unsigned long long)arg2 inputText:(id)arg3;
- (void)initTableView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

