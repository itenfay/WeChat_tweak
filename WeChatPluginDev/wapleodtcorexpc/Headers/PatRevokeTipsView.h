//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class CAShapeLayer, MMTimer, MMUIButton, NSString, PatWrap, RichTextView;
@protocol PatRevokeTipsViewDelegate;

@interface PatRevokeTipsView : UIView
{
    _Bool _isHidingSelf;
    _Bool _isShowBelowHeadImage;
    double _navigationBarBottom;
    double _patSystemMessageAddHeight;
    id <PatRevokeTipsViewDelegate> _delegate;
    PatWrap *_patWrap;
    NSString *_chatName;
    MMTimer *_timer;
    UIView *_contentView;
    RichTextView *_richTextView;
    MMUIButton *_revokeButton;
    CAShapeLayer *_bubbleLayer;
    struct CGRect _headImageFrame;
}

- (void).cxx_destruct;
@property(retain, nonatomic) CAShapeLayer *bubbleLayer; // @synthesize bubbleLayer=_bubbleLayer;
@property(retain, nonatomic) MMUIButton *revokeButton; // @synthesize revokeButton=_revokeButton;
@property(retain, nonatomic) RichTextView *richTextView; // @synthesize richTextView=_richTextView;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) MMTimer *timer; // @synthesize timer=_timer;
@property(nonatomic) _Bool isShowBelowHeadImage; // @synthesize isShowBelowHeadImage=_isShowBelowHeadImage;
@property(nonatomic) _Bool isHidingSelf; // @synthesize isHidingSelf=_isHidingSelf;
@property(nonatomic) struct CGRect headImageFrame; // @synthesize headImageFrame=_headImageFrame;
@property(retain, nonatomic) NSString *chatName; // @synthesize chatName=_chatName;
@property(retain, nonatomic) PatWrap *patWrap; // @synthesize patWrap=_patWrap;
@property(nonatomic) __weak id <PatRevokeTipsViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) double patSystemMessageAddHeight; // @synthesize patSystemMessageAddHeight=_patSystemMessageAddHeight;
@property(nonatomic) double navigationBarBottom; // @synthesize navigationBarBottom=_navigationBarBottom;
- (void)onRevokePat:(id)arg1 fromChat:(id)arg2 isSuccess:(_Bool)arg3;
- (void)onClickRevokeButton;
- (void)showWithHeadFrame:(struct CGRect)arg1;
- (void)animationHiddenSelf;
- (void)doShowAnimation;
- (void)addArrowToBezierPath:(id)arg1;
- (id)generateBubblePathInRect:(struct CGRect)arg1 arrowX:(double)arg2;
- (id)generateBubbleLayer;
- (void)updateAnchorPoint;
- (void)refreshLayer;
- (void)refreshViewWithHeadFrame:(struct CGRect)arg1;
- (void)initSubviews;
- (void)dealloc;
- (id)initWithPatWrap:(id)arg1 chatName:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

