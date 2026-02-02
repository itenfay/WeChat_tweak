//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;
@protocol MMDeleteNotRegularContactLogicDelegate;

@interface MMDeleteNotRegularContactLogic
{
    NSString *m_contactsMaxLimitSortSessionid;
    int m_responseRet;
    id <MMDeleteNotRegularContactLogicDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <MMDeleteNotRegularContactLogicDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onContactVerifyPreCheckFailActionCancel:(id)arg1 opcode:(unsigned int)arg2;
- (void)onContactVerifyPreCheckFailActionDone:(id)arg1 opcode:(unsigned int)arg2;
- (void)onContactVerifyPreCheckFail:(id)arg1 opcode:(unsigned int)arg2;
- (_Bool)onShouldHandleContactVerifyPreCheckFail:(id)arg1 opcode:(unsigned int)arg2 responseRet:(int)arg3;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)OnGetNeedDeleteNotRegularContactResponse:(id)arg1;
- (_Bool)getNeedDeleteNotRegularContactFromNetwork:(id)arg1;

@end

