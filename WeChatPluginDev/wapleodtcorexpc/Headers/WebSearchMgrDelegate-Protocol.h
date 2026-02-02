//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class CContact, NSDictionary, NSString;

@protocol WebSearchMgrDelegate <NSObject>

@optional
- (void)onSendVideoPlayInfoList:(NSDictionary *)arg1;
- (void)onWebRecommendInfoUpdate:(NSDictionary *)arg1;
- (void)onUpdateLocalImage:(NSDictionary *)arg1;
- (void)onFailReceiveSuggestionJSON;
- (void)onReceiveSuggestionJSON:(NSString *)arg1 query:(NSString *)arg2;
- (void)onReceiveSuggestionJSON:(NSString *)arg1;
- (void)onOpenContactError:(NSString *)arg1 withMessage:(NSString *)arg2;
- (void)onOpenContact:(CContact *)arg1;
- (void)onSearchSimilarEmoticon:(NSDictionary *)arg1;
- (void)onSearchRecmdDataFail:(NSString *)arg1;
- (void)onSearchRecmdDataSuccess:(NSDictionary *)arg1;
- (void)onSearchRecmdDataReturn:(NSDictionary *)arg1;
- (void)onSearchRecmdDataRequestSend:(NSDictionary *)arg1;
- (void)onWebSearchDataFail:(NSDictionary *)arg1;
- (void)onWebSearchDataChanged:(NSDictionary *)arg1;
@end

