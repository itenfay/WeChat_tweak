//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUIActivityIndicatorView, NSString, UIImageView, UITextView;
@protocol InviteFriendViewDelegate;

@interface InviteFriendView
{
    UIImageView *m_imageQRView;
    MMUIActivityIndicatorView *m_loadingView;
    UITextView *m_textView;
    id <InviteFriendViewDelegate> m_delegate;
}

- (void).cxx_destruct;
- (void)onDownloadQRCodeFinish:(id)arg1 FooterWording:(id)arg2;
- (void)onRight;
- (void)onLeft;
- (id)initWithFrame:(struct CGRect)arg1 Title:(id)arg2 Msg:(id)arg3 Delegate:(id)arg4;
- (id)initWithFrame:(struct CGRect)arg1 Title:(id)arg2 Msg:(id)arg3 Delegate:(id)arg4 showQRImage:(_Bool)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

