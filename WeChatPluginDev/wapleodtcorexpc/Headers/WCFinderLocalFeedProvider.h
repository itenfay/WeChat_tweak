//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class WCFinderWCDB;

@interface WCFinderLocalFeedProvider : NSObject
{
    _Bool _isRequesting;
    WCFinderWCDB *_dataBase;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isRequesting; // @synthesize isRequesting=_isRequesting;
@property(nonatomic) __weak WCFinderWCDB *dataBase; // @synthesize dataBase=_dataBase;
- (void)requestBackupFeedsIfNeeded;
- (id)localFeedArrayWithFeedSource:(unsigned long long)arg1 commentScene:(int)arg2 limitCount:(unsigned long long)arg3;
- (id)localFeedArrayWithPullType:(unsigned long long)arg1 commentScene:(int)arg2 limitCount:(unsigned long long)arg3;
- (id)localFeedWithPullType:(unsigned long long)arg1 commentScene:(int)arg2;
- (_Bool)hasEnoughValidLocalFeeds:(unsigned long long)arg1 pullType:(unsigned long long)arg2 commentScene:(int)arg3;
- (void)removeLocalBackupFeedsWithTidArray:(id)arg1;
- (void)removeLocalBackupFeedWithTid:(id)arg1;
- (void)updateLocalBackupFeedArray:(id)arg1 commentScene:(int)arg2 feedSource:(unsigned long long)arg3;
- (id)initWithFinderDB:(id)arg1;

@end

