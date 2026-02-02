//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class FinderLivePromoteMsgInfo, MMFinderLivePromotePubbleCustomContentEndView, MMFinderLiveTask, MMFinderLiveTaskId, NSString;
@protocol MMFinderLiveOperationViewDelegate;

@interface MMFinderLivePromotePubbleContentView : UIView
{
    _Bool _hasGetJumpInfo;
    _Bool _isGettingJumpInfo;
    MMFinderLiveTaskId *_taskId;
    unsigned long long _promoteId;
    FinderLivePromoteMsgInfo *_currentPromoteMsgInfo;
    UIView *_contentView;
    NSString *_useSuggestions;
    NSString *_customEndText;
    id <MMFinderLiveOperationViewDelegate> _operationDelegate;
    CDUnknownBlockType _closeAction;
    CDUnknownBlockType _tapAction;
    CDUnknownBlockType _actionReportCallback;
    CDUnknownBlockType _firstFrameRenderredCompletion;
    unsigned long long _currentContentMode;
    MMFinderLivePromotePubbleCustomContentEndView *_customEndView;
}

+ (void)reportForPromoteActions:(id)arg1 withLiveTask:(id)arg2;
+ (id)createPromotePubbleContentWithPromoteMsgInfo:(id)arg1 taskId:(id)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) MMFinderLivePromotePubbleCustomContentEndView *customEndView; // @synthesize customEndView=_customEndView;
@property(nonatomic) unsigned long long currentContentMode; // @synthesize currentContentMode=_currentContentMode;
@property(copy, nonatomic) CDUnknownBlockType firstFrameRenderredCompletion; // @synthesize firstFrameRenderredCompletion=_firstFrameRenderredCompletion;
@property(copy, nonatomic) CDUnknownBlockType actionReportCallback; // @synthesize actionReportCallback=_actionReportCallback;
@property(copy, nonatomic) CDUnknownBlockType tapAction; // @synthesize tapAction=_tapAction;
@property(copy, nonatomic) CDUnknownBlockType closeAction; // @synthesize closeAction=_closeAction;
@property(nonatomic) __weak id <MMFinderLiveOperationViewDelegate> operationDelegate; // @synthesize operationDelegate=_operationDelegate;
@property(retain, nonatomic) NSString *customEndText; // @synthesize customEndText=_customEndText;
@property(retain, nonatomic) NSString *useSuggestions; // @synthesize useSuggestions=_useSuggestions;
@property(nonatomic) _Bool isGettingJumpInfo; // @synthesize isGettingJumpInfo=_isGettingJumpInfo;
@property(nonatomic) _Bool hasGetJumpInfo; // @synthesize hasGetJumpInfo=_hasGetJumpInfo;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) FinderLivePromoteMsgInfo *currentPromoteMsgInfo; // @synthesize currentPromoteMsgInfo=_currentPromoteMsgInfo;
@property(nonatomic) unsigned long long promoteId; // @synthesize promoteId=_promoteId;
@property(retain, nonatomic) MMFinderLiveTaskId *taskId; // @synthesize taskId=_taskId;
@property(readonly, nonatomic) _Bool isCustomDisplaying;
@property(readonly, nonatomic) MMFinderLiveTask *liveTask;
- (id)createPromoteActionReportItem:(unsigned long long)arg1;
- (void)reportForClick;
- (void)reportForExpose;
- (void)displayContent:(unsigned long long)arg1;
- (void)onTapped;
- (void)onDismissed;
- (void)onShowed;
- (void)onClosed;
- (void)disMissSelf;
- (void)updateFromSyncPromoteResp:(id)arg1;
@property(readonly, nonatomic) id currentPromoteItem;
- (id)getCurrentPromoteBuffer;
- (void)updatepromoteBuffer:(id)arg1;
- (void)updatePromoteItem:(id)arg1;
- (void)updatePromoteMsgInfo:(id)arg1;
- (_Bool)isCurrentPromoteItem:(id)arg1;
- (_Bool)isCurrentPromoteMsgInfo:(id)arg1;
- (void)handleSingleTapGesture:(id)arg1;
- (id)accessibilityValueString;
- (id)accessibilityLabelString;
- (_Bool)shouldBeAccessibilityElement;
- (void)refreshData;
- (void)requestJumpInfo:(CDUnknownBlockType)arg1;
- (void)resetGetJumpInfoTag;
- (void)layoutCustomEndView;
- (void)layoutContentView;
- (void)layoutUI;
- (void)convertPromoteMsgInfo:(id)arg1;
- (_Bool)disableTapGesture;
- (void)addGestures;
- (void)layoutSubviews;
- (id)initWithPromoteMsgInfo:(id)arg1 taskId:(id)arg2;

@end

