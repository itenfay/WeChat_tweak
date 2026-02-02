//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMUILabel, NSAttributedString, NSString, RichTextView;

@interface WCMomentsBlankView : UIView
{
    RichTextView *_tipsTextView;
    NSString *_richText;
    MMUILabel *_tipsLabel;
    NSAttributedString *_attributedText;
}

+ (id)createTipsLabel;
+ (id)createTipsTextView;
- (void).cxx_destruct;
@property(copy, nonatomic) NSAttributedString *attributedText; // @synthesize attributedText=_attributedText;
@property(retain, nonatomic) MMUILabel *tipsLabel; // @synthesize tipsLabel=_tipsLabel;
@property(copy, nonatomic) NSString *richText; // @synthesize richText=_richText;
@property(retain, nonatomic) RichTextView *tipsTextView; // @synthesize tipsTextView=_tipsTextView;
- (void)onLinkClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (void)layoutSubviews;
- (void)displayTipsView:(id)arg1;
- (void)loadTipsLabel;
- (void)loadTipsTextView;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

