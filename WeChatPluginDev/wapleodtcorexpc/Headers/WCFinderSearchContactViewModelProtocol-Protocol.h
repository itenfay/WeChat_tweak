//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSIndexPath, NSString, WCFinderContact, WCFinderSearchInfo;
@protocol WCFinderFollowSearchContactViewModelDelegate;

@protocol WCFinderSearchContactViewModelProtocol <NSObject>
@property(nonatomic) int scene;
- (NSString *)searchPlaceHolder;
- (_Bool)isFinderContact;
- (unsigned long long)cellActionType;
- (void)reportItemExposeInfo;
- (void)recordResultDisplay:(NSIndexPath *)arg1;
- (WCFinderSearchInfo *)searchInfoAtIndexPath:(NSIndexPath *)arg1;
- (unsigned long long)mentionTypeForSection:(long long)arg1;
- (NSString *)titleForSection:(NSIndexPath *)arg1;
- (_Bool)moreThenOneSection;
- (unsigned long long)searchRowNumsWithSection:(unsigned long long)arg1;
- (unsigned long long)searchNumsOfSection;
- (void)onQueryNextPageContact;
- (void)queryContactWith:(NSString *)arg1;
- (void)resetSearchStatus;
- (_Bool)isNoMoreData;
- (NSString *)latestQueryString;
- (_Bool)isRepetSearch:(NSString *)arg1;
- (void)setDelegate:(id <WCFinderFollowSearchContactViewModelDelegate>)arg1;
- (id <WCFinderFollowSearchContactViewModelDelegate>)delegate;

@optional
- (void)addToBlackList:(WCFinderContact *)arg1 success:(void (^)(void))arg2 failure:(void (^)(long long, NSString *))arg3;
@end

