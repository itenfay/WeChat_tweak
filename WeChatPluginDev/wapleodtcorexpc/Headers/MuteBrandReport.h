//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface MuteBrandReport : NSObject
{
    _Bool _enableNumberNoticeAcctCountFromSearch;
    unsigned long long _action;
    unsigned long long _timestamp;
    long long _totalUnreadCount;
    long long _brandsCount;
    long long _chooseBrandCount;
}

+ (long long)genTotalUnreadBrandCount;
+ (void)reportExitListAction:(long long)arg1 totalCount:(long long)arg2 chooseBySearch:(_Bool)arg3;
+ (void)reportEntryListAction:(long long)arg1;
+ (void)reportCloseAction;
+ (void)reportOpenAction;
@property(nonatomic) _Bool enableNumberNoticeAcctCountFromSearch; // @synthesize enableNumberNoticeAcctCountFromSearch=_enableNumberNoticeAcctCountFromSearch;
@property(nonatomic) long long chooseBrandCount; // @synthesize chooseBrandCount=_chooseBrandCount;
@property(nonatomic) long long brandsCount; // @synthesize brandsCount=_brandsCount;
@property(nonatomic) long long totalUnreadCount; // @synthesize totalUnreadCount=_totalUnreadCount;
@property(nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;
@property(nonatomic) unsigned long long action; // @synthesize action=_action;
- (void)report;

@end

