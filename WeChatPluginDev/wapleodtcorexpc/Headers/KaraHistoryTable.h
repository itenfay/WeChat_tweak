//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@interface KaraHistoryTable
{
    Class WINQ;
}

- (long long)pagesWithError:(id *)arg1;
- (id)historyAtSlot:(id)arg1 happenedBetween:(id)arg2 to:(id)arg3 limit:(long long)arg4 error:(id *)arg5;
- (id)historyWhere:(const void *)arg1 atSlot:(id)arg2 happenedBetween:(id)arg3 to:(id)arg4 limit:(long long)arg5 error:(id *)arg6;
- (id)historyWhere:(const void *)arg1 happenedBetween:(id)arg2 to:(id)arg3 limit:(long long)arg4 error:(id *)arg5;
- (long long)updateRecordThatRecalled:(id)arg1 includeProperties:(const void *)arg2 happenedAfter:(id)arg3 error:(id *)arg4;
- (id)recordsOnResultColumns:(const void *)arg1 where:(const void *)arg2 happenedBetween:(id)arg3 to:(id)arg4 limit:(long long)arg5 error:(id *)arg6;
- (long long)deleteRecord:(id)arg1 happenedAfter:(id)arg2 error:(id *)arg3;
- (long long)deleteRecordsHappenedBefore:(id)arg1 error:(id *)arg2;
- (long long)updateRecordThatRecalled:(id)arg1 happenedAfter:(id)arg2 error:(id *)arg3;
- (long long)insertOrIgnoreRecord:(id)arg1 error:(id *)arg2;
- (id)initWithPath:(id)arg1 tableName:(id)arg2 tableClass:(Class)arg3;

@end

