//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class WCFinderContact;

@protocol WCFinderMentionUserViewModelDelegate <NSObject>

@optional
- (void)finderContactListUpdateFinished;
- (void)finderContactListUpdateFollowingCount;
- (void)finderContactListFollowContact:(WCFinderContact *)arg1;
- (void)finderContactListUnFollowContact:(WCFinderContact *)arg1 index:(unsigned long long)arg2;
- (void)finderContactListViewFetchFailWithErrorCode:(int)arg1;
- (void)finderContactListViewNeedReloadWithContinueFlag:(_Bool)arg1;
@end

