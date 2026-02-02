//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class NSMutableArray, NSString, UIScrollView;
@protocol WCPayT2BCCandidateSugBarDelegate;

@interface WCPayT2BCCandidateSugBar : UIView
{
    id <WCPayT2BCCandidateSugBarDelegate> _m_delegate;
    NSMutableArray *_m_resultsArray;
    NSMutableArray *_m_candidateViewArray;
    NSString *_m_inputText;
    UIScrollView *_scrollView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(retain, nonatomic) NSString *m_inputText; // @synthesize m_inputText=_m_inputText;
@property(retain, nonatomic) NSMutableArray *m_candidateViewArray; // @synthesize m_candidateViewArray=_m_candidateViewArray;
@property(retain, nonatomic) NSMutableArray *m_resultsArray; // @synthesize m_resultsArray=_m_resultsArray;
@property(nonatomic) __weak id <WCPayT2BCCandidateSugBarDelegate> m_delegate; // @synthesize m_delegate=_m_delegate;
- (void)onClickCandidateView:(id)arg1;
- (void)reloadCandidateView;
- (void)restScrollView;
- (void)reloadCandidateViewWithMatchResults:(id)arg1 inputText:(id)arg2;
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

