//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class WCTDatabase, WCTTable;

@interface WCOutDataBase
{
    WCTDatabase *_dbBase;
    WCTTable *_recentCallTable;
    WCTTable *_weChatOutMsgTable;
}

- (void).cxx_destruct;
- (id)getWeChatOutMsgBeginLocalID:(unsigned int)arg1 limit:(int)arg2;
- (_Bool)insertOrUpdateWcoMsg:(id)arg1;
- (_Bool)deleteRecentCallByPhoneNum:(id)arg1 withCountryCode:(id)arg2;
- (_Bool)deleteRecentCallById:(int)arg1;
- (id)compositeForLastCallItemsAndCountryCodeUseCountDic;
- (id)dicFromCountryCodeToCount;
- (id)selectRecentCallForPhoneNum:(id)arg1 withCountryCode:(id)arg2 limit:(int)arg3;
- (int)insertCall:(id)arg1;
- (id)init;

@end

