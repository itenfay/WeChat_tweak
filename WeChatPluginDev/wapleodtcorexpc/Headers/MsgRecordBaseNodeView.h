//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class BaseMessageCellView, NSString;

@interface MsgRecordBaseNodeView
{
    BaseMessageCellView *_cellView;
}

+ (_Bool)useMsgStyle:(int)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) BaseMessageCellView *cellView; // @synthesize cellView=_cellView;
- (_Bool)tryHandleMenu:(long long)arg1 withViewModel:(id)arg2;
- (void)tapAppNodeView:(id)arg1;
- (void)PlayVideo:(id)arg1 soundable:(_Bool)arg2;
- (void)tapFriendCard_NodeView:(id)arg1 WithContact:(id)arg2 WithMsg:(id)arg3;
- (void)tapLocation_NodeView:(id)arg1;
- (void)tapImage_NodeView:(id)arg1 needEditImage:(_Bool)arg2;
- (_Bool)isMsgCanRevoke:(id)arg1;
- (id)getViewController;
- (id)accessibilityCustomActions;
- (id)accessibilityLabel;
- (_Bool)isAccessibilityElement;
- (void)onClickAsRefer;
- (void)addContentSubView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

