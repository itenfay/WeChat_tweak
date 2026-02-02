//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class NSString;
@protocol WCFinderMembershipPaymentNoticeDetailViewDelegate;

@interface WCFinderMembershipPaymentNoticeDetailView : UIView
{
    id <WCFinderMembershipPaymentNoticeDetailViewDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <WCFinderMembershipPaymentNoticeDetailViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onLinkClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (id)genDotView;
- (id)genRichTextView;
- (void)layout;
- (void)layoutContent;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

