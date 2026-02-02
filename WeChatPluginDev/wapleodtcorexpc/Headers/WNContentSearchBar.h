//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMUIButton, MMUILabel, MMUITextField, NSString;
@protocol WNContentSearchBarDelegate, WNContentSearchBaroperationDelegate;

@interface WNContentSearchBar : UIView
{
    MMUITextField *m_searchField;
    MMUILabel *m_resultLable;
    MMUIButton *m_cancelBtn;
    MMUIButton *m_preResultBtn;
    MMUIButton *m_nextResultBtn;
    unsigned long long m_atIndex;
    unsigned long long m_totalCount;
    id <WNContentSearchBarDelegate> _delegate;
    id <WNContentSearchBaroperationDelegate> _operationDelegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <WNContentSearchBaroperationDelegate> operationDelegate; // @synthesize operationDelegate=_operationDelegate;
@property(nonatomic) __weak id <WNContentSearchBarDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)textFieldDidChange:(id)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)changeWidth:(double)arg1 with:(double)arg2;
- (void)cancelSearch;
- (void)tryToSearchWith:(id)arg1 immediately:(_Bool)arg2;
- (void)realDoSearchWith:(id)arg1;
- (void)searchFieldResignFirstResponder;
- (void)searchFieldBecomFirstResponder;
- (void)onClickNextKeyBtn:(id)arg1;
- (void)onClickPreKeyBtn:(id)arg1;
- (void)onCancel:(id)arg1;
- (void)clearResultLable;
- (void)updateResultLableAt:(unsigned long long)arg1 total:(unsigned long long)arg2;
- (void)initView;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

