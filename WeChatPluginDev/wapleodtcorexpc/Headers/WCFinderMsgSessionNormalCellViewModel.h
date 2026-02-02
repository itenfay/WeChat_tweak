//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMBaseSessionCellData, NSString, WCFinderContact;

@interface WCFinderMsgSessionNormalCellViewModel
{
    MMBaseSessionCellData *_cellData;
    NSString *_realChatUserName;
    WCFinderContact *_realChatContact;
}

+ (id)cellDataForSessionInfo:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderContact *realChatContact; // @synthesize realChatContact=_realChatContact;
@property(retain, nonatomic) NSString *realChatUserName; // @synthesize realChatUserName=_realChatUserName;
@property(retain, nonatomic) MMBaseSessionCellData *cellData; // @synthesize cellData=_cellData;
- (void)onFinderContactUpdate:(id)arg1;
- (void)updateRealChatContact;
- (void)updateCellData;
- (void)updateCellView;
- (id)realChatFinderContact;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

