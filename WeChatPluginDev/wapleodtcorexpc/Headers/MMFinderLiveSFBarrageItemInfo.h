//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMFinderLiveSFBarrageCellView, MMFinderLiveSFBarrageSingleTrackInfo;

@interface MMFinderLiveSFBarrageItemInfo : NSObject
{
    _Bool _isAnimating;
    _Bool _isOffScreenMode;
    _Bool _isInTappedState;
    _Bool _isInDisappearState;
    MMFinderLiveSFBarrageCellView *_barrageCell;
    MMFinderLiveSFBarrageSingleTrackInfo *_rootTrackInfo;
    unsigned long long _barrageSeqNum;
    unsigned long long _moveAnimType;
    double _fullyVisibleTime;
    double _animateSpeed;
    double _animationStartTime;
    CDUnknownBlockType _didTapBlock;
    CDUnknownBlockType _actionInvokeBlock;
    CDUnknownBlockType _autoRecoverUnTappedBlock;
    CDUnknownBlockType _getSingleEnableCommentBlock;
    CDUnknownBlockType _tappedStateChangeCallback;
    CDUnknownBlockType _movingCompletion;
    struct CGPoint _animationStartPos;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isInDisappearState; // @synthesize isInDisappearState=_isInDisappearState;
@property(nonatomic) _Bool isInTappedState; // @synthesize isInTappedState=_isInTappedState;
@property(copy, nonatomic) CDUnknownBlockType movingCompletion; // @synthesize movingCompletion=_movingCompletion;
@property(copy, nonatomic) CDUnknownBlockType tappedStateChangeCallback; // @synthesize tappedStateChangeCallback=_tappedStateChangeCallback;
@property(copy, nonatomic) CDUnknownBlockType getSingleEnableCommentBlock; // @synthesize getSingleEnableCommentBlock=_getSingleEnableCommentBlock;
@property(copy, nonatomic) CDUnknownBlockType autoRecoverUnTappedBlock; // @synthesize autoRecoverUnTappedBlock=_autoRecoverUnTappedBlock;
@property(copy, nonatomic) CDUnknownBlockType actionInvokeBlock; // @synthesize actionInvokeBlock=_actionInvokeBlock;
@property(copy, nonatomic) CDUnknownBlockType didTapBlock; // @synthesize didTapBlock=_didTapBlock;
@property(nonatomic) _Bool isOffScreenMode; // @synthesize isOffScreenMode=_isOffScreenMode;
@property(nonatomic) double animationStartTime; // @synthesize animationStartTime=_animationStartTime;
@property(nonatomic) struct CGPoint animationStartPos; // @synthesize animationStartPos=_animationStartPos;
@property(nonatomic) double animateSpeed; // @synthesize animateSpeed=_animateSpeed;
@property(nonatomic) double fullyVisibleTime; // @synthesize fullyVisibleTime=_fullyVisibleTime;
@property(nonatomic) _Bool isAnimating; // @synthesize isAnimating=_isAnimating;
@property(nonatomic) unsigned long long moveAnimType; // @synthesize moveAnimType=_moveAnimType;
@property(nonatomic) unsigned long long barrageSeqNum; // @synthesize barrageSeqNum=_barrageSeqNum;
@property(nonatomic) __weak MMFinderLiveSFBarrageSingleTrackInfo *rootTrackInfo; // @synthesize rootTrackInfo=_rootTrackInfo;
@property(retain, nonatomic) MMFinderLiveSFBarrageCellView *barrageCell; // @synthesize barrageCell=_barrageCell;
- (_Bool)isActualStartMovingAnimation;
- (struct CGRect)presentationFrame;
- (void)removeMovingAnimation;
- (void)dealloc;
- (id)initWithBarrageCell:(id)arg1;

@end

