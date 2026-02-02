//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class NSString, RichTextView, UIImageView;

@interface FavRecordReferView : UIView
{
    UIImageView *_thumbImageView;
    UIView *_highlightView;
    UIView *_referLineView;
    RichTextView *_richTextView;
}

+ (struct CGSize)sizeForContent:(id)arg1 maxWidth:(double)arg2 font:(id)arg3 outArrStyles:(id *)arg4 hasImage:(_Bool)arg5;
- (void).cxx_destruct;
@property(retain, nonatomic) RichTextView *richTextView; // @synthesize richTextView=_richTextView;
@property(retain, nonatomic) UIView *referLineView; // @synthesize referLineView=_referLineView;
@property(retain, nonatomic) UIView *highlightView; // @synthesize highlightView=_highlightView;
@property(readonly, nonatomic) UIImageView *thumbImageView; // @synthesize thumbImageView=_thumbImageView;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)onTouchRemoveEffect;
- (void)onTouchEffect;
- (void)onStateChanged:(id)arg1;
- (void)setThumbImage:(id)arg1;
- (void)updateWithSize:(struct CGSize)arg1 arrStyles:(id)arg2;
- (void)layoutSubviews;
- (void)initViews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

