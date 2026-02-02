//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@interface EnterpriseSessionCellData
{
    _Bool m_isSessionTop;
}

@property(nonatomic) _Bool isSessionTop; // @synthesize isSessionTop=m_isSessionTop;
- (id)textForMsgLabelWithMessage:(id)arg1;
- (void)updateSessionTop;
- (void)updateHeadViewInfo:(id)arg1;
- (void)updateMsgLabelTextForEnterpriseMsg:(id)arg1;
- (void)updateNameLabelText:(id)arg1;
- (void)updateUnreadCount;
- (void)updateWithBaseSessionInfo:(id)arg1;

@end

