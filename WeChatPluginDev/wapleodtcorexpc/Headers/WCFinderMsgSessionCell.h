//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, WCFinderMsgSessionCellViewModel, WCFinderMsgSessionNicknameTailView;

@interface WCFinderMsgSessionCell
{
    WCFinderMsgSessionCellViewModel *_viewModel;
    WCFinderMsgSessionNicknameTailView *_tailView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderMsgSessionNicknameTailView *tailView; // @synthesize tailView=_tailView;
@property(retain, nonatomic) WCFinderMsgSessionCellViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (void)onTailViewNeedLayout;
- (id)GetNickNameTailView;
- (id)genMessageListTimeStringByUInt:(unsigned int)arg1;
- (void)updateWithSessionCellData:(id)arg1;
- (void)prepareForReuse;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

