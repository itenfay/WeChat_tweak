//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MoveWithTouchAlgorithm, NSDictionary, NSMutableDictionary, NSNumber, NSString, UIColor, UILabel, UIView;
@protocol WABaseViewDelegate;

@interface WABaseView
{
    UILabel *_label;
    UIView *_background;
    double _padding[4];
    double _alignOffset;
    double _rotate;
    double _scaleX;
    double _scaleY;
    _Bool _clickable;
    NSDictionary *_fontWeightDic;
    _Bool _bEventToWebView;
    _Bool _fixed;
    _Bool _parentDraggable;
    unsigned int _viewId;
    NSString *_userData;
    id <WABaseViewDelegate> _delegate;
    unsigned long long _type;
    unsigned long long _referrerPolicyType;
    MoveWithTouchAlgorithm *_moveAlgorithm;
    NSNumber *_workerIdNumber;
    NSDictionary *_style;
    UIColor *_customBackgroundColor;
    WABaseView *_followBaseView;
    NSMutableDictionary *_followerBaseViewDic;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *followerBaseViewDic; // @synthesize followerBaseViewDic=_followerBaseViewDic;
@property(nonatomic) __weak WABaseView *followBaseView; // @synthesize followBaseView=_followBaseView;
@property(retain, nonatomic) UIColor *customBackgroundColor; // @synthesize customBackgroundColor=_customBackgroundColor;
@property(retain, nonatomic) NSDictionary *style; // @synthesize style=_style;
@property(retain, nonatomic) NSNumber *workerIdNumber; // @synthesize workerIdNumber=_workerIdNumber;
@property(nonatomic) _Bool parentDraggable; // @synthesize parentDraggable=_parentDraggable;
@property(retain, nonatomic) MoveWithTouchAlgorithm *moveAlgorithm; // @synthesize moveAlgorithm=_moveAlgorithm;
@property(nonatomic) unsigned long long referrerPolicyType; // @synthesize referrerPolicyType=_referrerPolicyType;
@property(nonatomic) _Bool fixed; // @synthesize fixed=_fixed;
@property(nonatomic) unsigned int viewId; // @synthesize viewId=_viewId;
@property(nonatomic) _Bool bEventToWebView; // @synthesize bEventToWebView=_bEventToWebView;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
@property(nonatomic) __weak id <WABaseViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSString *userData; // @synthesize userData=_userData;
- (double)getFontWeightForKey:(id)arg1;
- (void)onMoveEndWithTouchAlgorithmResultMoveTo:(struct CGPoint)arg1;
- (void)onMoveWithTouchAlgorithmTaped:(struct CGPoint)arg1;
- (void)onMoveWithTouchAlgorithmResultMoveTo:(struct CGPoint)arg1;
- (id)onMoveWithTouchAlgorithmRequestView;
- (_Bool)isInDraggableContext;
- (_Bool)shouldLockToPortrait;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)followOtherBaseView:(id)arg1;
- (_Bool)clickable;
- (void)doClickAction;
- (void)onButtonClick:(id)arg1;
- (void)setBorderStyle:(id)arg1;
- (void)setBackground:(id)arg1 style:(id)arg2 clickable:(_Bool)arg3;
- (id)getBackgroundImage:(id)arg1;
- (void)setClickable:(_Bool)arg1;
- (void)updateBackgoundImage:(id)arg1;
- (void)layoutSubviews;
- (void)setLabel:(id)arg1;
@property(readonly, copy) NSString *description;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

