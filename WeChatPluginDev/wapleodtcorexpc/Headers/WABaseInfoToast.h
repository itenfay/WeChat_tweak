//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMTimer, UIView;
@protocol WABaseInfoToastDelegate;

@interface WABaseInfoToast
{
    _Bool m_isMoving;
    MMTimer *m_autoDismissTimer;
    _Bool _isNeedAutoDismiss;
    id <WABaseInfoToastDelegate> _delegate;
    long long _showTimeStamp;
    UIView *_parentView;
}

- (void).cxx_destruct;
@property(nonatomic) __weak UIView *parentView; // @synthesize parentView=_parentView;
@property(nonatomic) long long showTimeStamp; // @synthesize showTimeStamp=_showTimeStamp;
@property(nonatomic) _Bool isNeedAutoDismiss; // @synthesize isNeedAutoDismiss=_isNeedAutoDismiss;
@property(nonatomic) __weak id <WABaseInfoToastDelegate> delegate; // @synthesize delegate=_delegate;
- (void)dismissWithAnimation:(_Bool)arg1;
- (void)autoDismiss;
- (void)showInView:(id)arg1;
- (void)layoutSubviews;
- (void)dealloc;

@end

