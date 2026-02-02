//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class NSString, RichTextView, UIButton, UIImageView;
@protocol WCBizTipViewDelegate;

@interface WCBizTipView : UIView
{
    NSString *_title;
    NSString *_content;
    NSString *_imageName;
    UIImageView *_backgroundView;
    UIImageView *contentImageView;
    RichTextView *richTextView;
    id <WCBizTipViewDelegate> m_delegate;
    UIButton *_backgroundCloseBtn;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIButton *backgroundCloseBtn; // @synthesize backgroundCloseBtn=_backgroundCloseBtn;
@property(nonatomic) __weak id <WCBizTipViewDelegate> m_delegate; // @synthesize m_delegate;
- (id)getContentImageView;
- (void)onCloseIntroView;
- (void)dealloc;
- (void)showAnimation;
- (void)initView;
- (id)initWithFrame:(struct CGRect)arg1 andTittle:(id)arg2 andContent:(id)arg3 andImage:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

