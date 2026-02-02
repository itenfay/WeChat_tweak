//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class NSMutableArray, NSString, WCFinderMsgBubbleShowStateInfo;
@protocol WCFinderMsgBubbleMgrPanelViewDelegate;

@interface WCFinderMsgBubbleMgrPanelView : UIView
{
    id <WCFinderMsgBubbleMgrPanelViewDelegate> _delegate;
    NSMutableArray *_bubbleViewArray;
    WCFinderMsgBubbleShowStateInfo *_bubbleShowStateInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderMsgBubbleShowStateInfo *bubbleShowStateInfo; // @synthesize bubbleShowStateInfo=_bubbleShowStateInfo;
@property(retain, nonatomic) NSMutableArray *bubbleViewArray; // @synthesize bubbleViewArray=_bubbleViewArray;
@property(nonatomic) __weak id <WCFinderMsgBubbleMgrPanelViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)finderPostingCommentFailTableViewCellDidClick:(id)arg1;
- (void)onClickFinderPrivateMsgNotify;
- (void)onClickNotificationMsgBtn;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)createPostingCommentFailBubbleViewWithCommentFailiInfo:(id)arg1;
- (id)createPrivateMsgBubbleView;
- (id)createUnreadNewMsgBubbleViewWithUnreadMsdgCount:(unsigned long long)arg1;
- (void)updateAllBubbleViewLayout;
- (id)getMaxWidthBubbleView;
- (void)updateBubbleMgePanelViewWithBubbleShowStateInfo:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 bubbleShowStateInfo:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

