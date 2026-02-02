//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, WCCardPkgMsg;
@protocol WCCardMsgViewDelegate;

@interface WCCardMsgView
{
    WCCardPkgMsg *_cardMsg;
    id <WCCardMsgViewDelegate> _delegate;
}

+ (double)GetHeightForCardMsg:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) __weak id <WCCardMsgViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onAction;
- (void)onLoadImageOK:(id)arg1;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithCardMsg:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

