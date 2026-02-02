//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@interface WCFinderLocalFeedAffProvider
{
}

- (id)convertNSDataArrayToDataItemArray:(id)arg1;
- (id)convertDataItemArrayToNSDataArray:(id)arg1;
- (_Bool)hasEnoughValidLocalFeeds:(unsigned long long)arg1 pullType:(unsigned long long)arg2 commentScene:(int)arg3;
- (id)localFeedArrayWithFeedSource:(unsigned long long)arg1 commentScene:(int)arg2 limitCount:(unsigned long long)arg3;
- (id)localFeedArrayWithPullType:(unsigned long long)arg1 commentScene:(int)arg2 limitCount:(unsigned long long)arg3;
- (void)removeLocalBackupFeedsWithTidArray:(id)arg1;
- (void)updateLocalBackupFeedArray:(id)arg1 commentScene:(int)arg2 feedSource:(unsigned long long)arg3;
- (id)initWithFinderDB:(id)arg1;

@end

