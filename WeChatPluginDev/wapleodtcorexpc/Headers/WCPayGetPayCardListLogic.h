//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@interface WCPayGetPayCardListLogic
{
    int scene;
}

@property(nonatomic) int scene; // @synthesize scene;
- (void)OnGetLocalPayCardList:(id)arg1 UsrVerifiedInfo:(id)arg2 SwicthInfo:(id)arg3 BalanceInfo:(id)arg4 NoticeInfo:(id)arg5 loanEntryInfo:(id)arg6 LqtInfo:(id)arg7;
- (void)OnGetBindQueryInfo:(id)arg1 Error:(id)arg2;
- (void)startLogic;

@end

