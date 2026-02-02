//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@interface KaraProphetTable
{
    Class WINQ;
}

- (long long)pagesWithError:(id *)arg1;
- (long long)deleteBehaviorsHappenedBefore:(id)arg1 limit:(long long)arg2 error:(id *)arg3;
- (id)getBehaviorsForRapidResponseReportingHappenedFrom:(id)arg1 to:(id)arg2 limit:(long long)arg3 error:(id *)arg4;
- (id)getBehaviorsForReportingHappenedFrom:(id)arg1 to:(id)arg2 limit:(long long)arg3 error:(id *)arg4;
- (id)getBehaviorsForUploadingHappenedFrom:(id)arg1 to:(id)arg2 limit:(long long)arg3 error:(id *)arg4;
- (long long)updateBehaviorUserInfo:(id)arg1 happenedAfter:(id)arg2 error:(id *)arg3;
- (long long)updateBehaviorThatRecalled:(id)arg1 happenedAfter:(id)arg2 error:(id *)arg3;
- (long long)updateBehaviorThatPrepared:(id)arg1 happenedAfter:(id)arg2 error:(id *)arg3;
- (long long)updateBehaviorThatExtracted:(id)arg1 happenedAfter:(id)arg2 error:(id *)arg3;
- (long long)updateBehaviorThatPredictedIfNot:(id)arg1 happenedAfter:(id)arg2 error:(id *)arg3;
- (long long)updateBehaviorThatPredicted:(id)arg1 happenedAfter:(id)arg2 error:(id *)arg3;
- (long long)deleteBehavior:(id)arg1 happenedAfter:(id)arg2 error:(id *)arg3;
- (long long)insertOrIgnoreBehaviorThatHappened:(id)arg1 error:(id *)arg2;
- (id)getBehaviorIdentified:(id)arg1 includingFeatures:(_Bool)arg2 happenedAfter:(id)arg3 error:(id *)arg4;
- (id)initWithPath:(id)arg1 tableName:(id)arg2 tableClass:(Class)arg3;

@end

