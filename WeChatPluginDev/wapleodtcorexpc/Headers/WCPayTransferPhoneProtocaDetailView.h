//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class NSString, RichTextView, UILabel, WCPayTransferPhoneProtocalHalfPage;

@interface WCPayTransferPhoneProtocaDetailView : UIView
{
    WCPayTransferPhoneProtocalHalfPage *_parentVC;
    RichTextView *_protoLink;
    UILabel *_titleLabel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) RichTextView *protoLink; // @synthesize protoLink=_protoLink;
@property(nonatomic) __weak WCPayTransferPhoneProtocalHalfPage *parentVC; // @synthesize parentVC=_parentVC;
- (void)onLinkClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (void)layoutSubviews;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

