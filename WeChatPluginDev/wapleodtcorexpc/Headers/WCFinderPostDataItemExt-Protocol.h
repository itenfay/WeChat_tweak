//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString, WCFinderDataItem, WCFinderPostSessionModel;

@protocol WCFinderPostDataItemExt <NSObject>

@optional
- (void)onFinderDraftPostSessionFailedWithErrorType:(long long)arg1 draftId:(NSString *)arg2;
- (void)onFinderDraftPostSessionSuccess:(WCFinderPostSessionModel *)arg1 draftId:(NSString *)arg2;
- (void)onMemberShipQAPostSessionUpLoadFailWithTid:(NSString *)arg1 errorType:(long long)arg2;
- (void)onMemberShipQAPostSessionUpLoadSuccessful:(WCFinderPostSessionModel *)arg1;
- (void)onMemberShipQAPostSessionStartUpload:(WCFinderPostSessionModel *)arg1;
- (void)onMemberShipFeedPostSessionUpLoadFailWithTid:(NSString *)arg1 errorType:(long long)arg2;
- (void)onMemberShipFeedPostSessionUpLoadSuccessful:(WCFinderPostSessionModel *)arg1;
- (void)onMemberShipFeedPostSessionStartUpload:(WCFinderPostSessionModel *)arg1;
- (void)onNewLifePostSessionUpLoadFailWithTid:(NSString *)arg1 errorType:(long long)arg2;
- (void)onNewLifePostSessionUpLoadSuccessful:(WCFinderPostSessionModel *)arg1;
- (void)onNewLifePostSessionStartUpload:(WCFinderPostSessionModel *)arg1;
- (void)onNewLifePostSessionStartCompress:(WCFinderDataItem *)arg1;
- (void)onFinderPostSessionUpLoadFailWithTid:(NSString *)arg1 errorType:(long long)arg2;
- (void)onFinderPostSessionUpLoadSuccessful:(WCFinderPostSessionModel *)arg1;
- (void)onFinderPostSessionStartUpload:(WCFinderPostSessionModel *)arg1;
@end

