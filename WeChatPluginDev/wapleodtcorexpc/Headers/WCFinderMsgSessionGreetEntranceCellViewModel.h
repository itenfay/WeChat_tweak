//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMBaseSessionCellData, NSString, WCFinderContact;

@interface WCFinderMsgSessionGreetEntranceCellViewModel
{
    MMBaseSessionCellData *_cellData;
    NSString *_senderUserName;
    WCFinderContact *_realChatContact;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderContact *realChatContact; // @synthesize realChatContact=_realChatContact;
@property(retain, nonatomic) NSString *senderUserName; // @synthesize senderUserName=_senderUserName;
@property(retain, nonatomic) MMBaseSessionCellData *cellData; // @synthesize cellData=_cellData;
- (void)onFinderContactUpdate:(id)arg1;
- (void)updateCellViewDataWithSesionInfo:(id)arg1;
- (void)updateCellData;
- (void)updateCellView;
- (id)sessionTitle;
- (id)headImage;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

