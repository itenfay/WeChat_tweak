//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUIViewController, UIImageView, UIView, WAPopOverTaskBarView, WAPopOverTaskBarlogic;

@interface WAPopOverView
{
    _Bool _isDismissForbidAnimation;
    _Bool _constraitByContainer;
    MMUIViewController *_containerVC;
    long long _containerViewOrientation;
    UIView *_interateView;
    UIImageView *_arrowImageView;
    UIView *_containerView;
    WAPopOverTaskBarView *_taskBarView;
    WAPopOverTaskBarlogic *_logic;
    UIView *_parentView;
    struct CGSize _preferedContentSize;
}

+ (double)getPopOverWidth;
- (void).cxx_destruct;
@property(nonatomic) __weak UIView *parentView; // @synthesize parentView=_parentView;
@property(retain, nonatomic) WAPopOverTaskBarlogic *logic; // @synthesize logic=_logic;
@property(retain, nonatomic) WAPopOverTaskBarView *taskBarView; // @synthesize taskBarView=_taskBarView;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(retain, nonatomic) UIImageView *arrowImageView; // @synthesize arrowImageView=_arrowImageView;
@property(retain, nonatomic) UIView *interateView; // @synthesize interateView=_interateView;
@property(nonatomic) long long containerViewOrientation; // @synthesize containerViewOrientation=_containerViewOrientation;
@property(nonatomic) _Bool constraitByContainer; // @synthesize constraitByContainer=_constraitByContainer;
@property(nonatomic) struct CGSize preferedContentSize; // @synthesize preferedContentSize=_preferedContentSize;
@property(nonatomic) __weak MMUIViewController *containerVC; // @synthesize containerVC=_containerVC;
@property(nonatomic) _Bool isDismissForbidAnimation; // @synthesize isDismissForbidAnimation=_isDismissForbidAnimation;
- (void)didRotate:(id)arg1;
- (void)initInterateView;
- (void)initArrowImageView;
- (void)initContainerView;
- (void)dismissWithAnimation;
- (double)getPopOverWidthConstriatByContainer;
- (void)showInView:(id)arg1 atPoint:(struct CGPoint)arg2 completion:(CDUnknownBlockType)arg3;
- (void)dealloc;
- (id)initWithWAPopOverTaskLogic:(id)arg1;

@end

