//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableArray, NSString;
@protocol WCPayCreditPaySelectQuestionViewControllerDelegate;

@interface WCPayCreditPaySelectQuestionViewController
{
    id <WCPayCreditPaySelectQuestionViewControllerDelegate> m_delegate;
    long long m_uiLastSelectedQuestionID;
    NSMutableArray *m_aryQuestion;
    NSString *m_nsLastSelectedQuestionID;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *m_nsLastSelectedQuestionID; // @synthesize m_nsLastSelectedQuestionID;
- (void)viewDidLoad;
- (void)clickCell:(id)arg1 indexPath:(id)arg2;
- (void)makeInfoCell:(id)arg1 cellInfo:(id)arg2;
- (void)initTableView;
- (double)getQuestionItemHeight:(id)arg1;
- (void)onBack;
- (void)setDelegate:(id)arg1;
- (void)initNavigationBar;
- (id)initWithQuestionAry:(id)arg1 withLastSelectedQuestionID:(id)arg2;

@end

