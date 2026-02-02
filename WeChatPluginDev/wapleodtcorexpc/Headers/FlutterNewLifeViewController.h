//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, TingFlutterCommentInputController;

@interface FlutterNewLifeViewController
{
    TingFlutterCommentInputController *_commentInputController;
}

- (void).cxx_destruct;
@property(retain, nonatomic) TingFlutterCommentInputController *commentInputController; // @synthesize commentInputController=_commentInputController;
- (void)registerYReportSdk;
- (void)activeCommentInput:(id)arg1 result:(CDUnknownBlockType)arg2;
- (void)onMentionBtnClick;
- (void)onMentionBtnExpose;
- (void)onMentionContactSelect:(id)arg1;
- (void)onMentionPanelShow;
- (void)viewDidLoad;
- (id)initWithFlutterInstance:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

