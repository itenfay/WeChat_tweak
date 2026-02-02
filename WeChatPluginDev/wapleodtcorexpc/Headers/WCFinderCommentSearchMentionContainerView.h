//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class NSString, WCFinderCommentContactSelectView, WCFinderCommentSearchMentionHeaderView;
@protocol WCFinderCommentSearchMentionContainerViewDelegate;

@interface WCFinderCommentSearchMentionContainerView : UIView
{
    id <WCFinderCommentSearchMentionContainerViewDelegate> _delegate;
    WCFinderCommentSearchMentionHeaderView *_headerView;
    WCFinderCommentContactSelectView *_contactSelectView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderCommentContactSelectView *contactSelectView; // @synthesize contactSelectView=_contactSelectView;
@property(retain, nonatomic) WCFinderCommentSearchMentionHeaderView *headerView; // @synthesize headerView=_headerView;
@property(nonatomic) __weak id <WCFinderCommentSearchMentionContainerViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onClickCloseCommentSearchMentionHeaderBtn;
- (void)resignResponder;
- (void)reloadLatestCommentMentionedContacts;
- (void)cancelSearch;
- (void)setupContactSelectView;
- (void)resetSearchView;
- (void)setupWithDelegate:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

