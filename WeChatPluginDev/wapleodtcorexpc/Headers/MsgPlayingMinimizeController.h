//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MinimizeTaskData, MsgPlayingMinimizeView, NSString;
@protocol MsgPlayingMinimizeControllerDelegate;

@interface MsgPlayingMinimizeController : NSObject
{
    id <MsgPlayingMinimizeControllerDelegate> _delegate;
    MsgPlayingMinimizeView *_minimizeView;
    MinimizeTaskData *_taskData;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MinimizeTaskData *taskData; // @synthesize taskData=_taskData;
@property(retain, nonatomic) MsgPlayingMinimizeView *minimizeView; // @synthesize minimizeView=_minimizeView;
@property(nonatomic) __weak id <MsgPlayingMinimizeControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onOutContentTask:(id)arg1 replacedByAnotherTaskData:(id)arg2;
- (void)stopAnimating;
- (struct CGSize)minimizeViewSize;
@property(readonly, nonatomic) _Bool isShowingMinimizeView;
- (void)removeMinimizeView;
- (void)foldMinimizeView;
- (void)updateMinimizeViewWithMsg:(id)arg1;
- (void)initMinimizeViewWithMsg:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

