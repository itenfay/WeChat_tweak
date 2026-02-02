//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class NSMutableArray, NSString, WACanvasCoverViewContainer, _TtC6WeChat16MagicSclFrameSet, _TtC6WeChat22MagicSclViewCoverLogic;

@interface MagicSclFrameSetView : UIView
{
    _Bool _isOutOfBounds;
    _Bool _hasSetup;
    _Bool _unbindFrameSetOnDealloc;
    int _viewId;
    _TtC6WeChat16MagicSclFrameSet *_frameSet;
    WACanvasCoverViewContainer *_coverView;
    NSMutableArray *_canvasIds;
    long long _viewState;
    unsigned long long _activeTime;
    NSString *_frameSetName;
    NSString *_bizName;
    _TtC6WeChat22MagicSclViewCoverLogic *_coverLogic;
}

- (void).cxx_destruct;
@property(retain, nonatomic) _TtC6WeChat22MagicSclViewCoverLogic *coverLogic; // @synthesize coverLogic=_coverLogic;
@property(nonatomic) int viewId; // @synthesize viewId=_viewId;
@property(retain, nonatomic) NSString *bizName; // @synthesize bizName=_bizName;
@property(retain, nonatomic) NSString *frameSetName; // @synthesize frameSetName=_frameSetName;
@property(nonatomic) unsigned long long activeTime; // @synthesize activeTime=_activeTime;
@property(nonatomic) long long viewState; // @synthesize viewState=_viewState;
@property(nonatomic) _Bool unbindFrameSetOnDealloc; // @synthesize unbindFrameSetOnDealloc=_unbindFrameSetOnDealloc;
@property(nonatomic) _Bool hasSetup; // @synthesize hasSetup=_hasSetup;
@property(nonatomic) _Bool isOutOfBounds; // @synthesize isOutOfBounds=_isOutOfBounds;
@property(retain, nonatomic) NSMutableArray *canvasIds; // @synthesize canvasIds=_canvasIds;
@property(retain, nonatomic) WACanvasCoverViewContainer *coverView; // @synthesize coverView=_coverView;
@property(retain, nonatomic) _TtC6WeChat16MagicSclFrameSet *frameSet; // @synthesize frameSet=_frameSet;
- (void)removeStartupCoverViewFromScl;
- (void)showStartupCoverView;
- (id)provideContainerView;
- (void)willMoveToWindow:(id)arg1;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)addSubview:(id)arg1;
- (void)unbind;
- (void)bind:(id)arg1;
- (void)initFrameSet:(id)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)setHidden:(_Bool)arg1;
- (void)layoutSubviews;
- (id)description;
- (void)invalidate;
- (void)dealloc;
- (void)resetViewId:(int)arg1;
- (void)resetFrameSet:(id)arg1;
- (id)init:(id)arg1 bizName:(id)arg2;
- (id)init:(id)arg1;

@end

