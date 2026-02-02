//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class CContact, NSArray, NSDictionary;

@protocol ContactsDataLogicDelegate <NSObject>
- (_Bool)onFilterContactCandidate:(CContact *)arg1;
- (void)onContactsDataChange;

@optional
- (_Bool)hideFavourContactCandidate;
- (NSDictionary *)onContactGetDicExistContactsOutOfPickLogic;
- (void)onRecommendDataChange:(_Bool)arg1;
- (void)onContactUpdatePickDataSection:(long long)arg1 added:(_Bool)arg2 deleted:(_Bool)arg3 sections:(NSArray *)arg4 sectionTitles:(NSDictionary *)arg5 sectionResults:(NSDictionary *)arg6;
- (void)onContactAsynSearchSectionResultChanged:(NSArray *)arg1 sectionTitles:(NSDictionary *)arg2 sectionResults:(NSDictionary *)arg3;
- (void)onContactsDataNeedChange;
@end

