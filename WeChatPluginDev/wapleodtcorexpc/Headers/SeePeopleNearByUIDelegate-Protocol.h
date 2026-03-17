//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class LbsContactInfoList, LbsRecommendPoiItem, LbsRoomResponse, MMLbsAdvertismentInfo, MMLbsContactInfo, NSArray, NSString;

@protocol SeePeopleNearByUIDelegate <NSObject>

@optional
- (void)onGetLBSRecommendPoiList:(NSArray *)arg1;
- (void)onJoinChatRoomFailed;
- (void)onJoinChatRoomFinishedWithResult:(LbsRoomResponse *)arg1;
- (void)onJoinChatRoomStart;
- (void)showMessage:(NSString *)arg1;
- (void)onGetCertificationFinish;
- (void)onSelectedWithLbsContactInfo:(MMLbsContactInfo *)arg1;
- (void)onSelectedWithLbsPoiItem:(LbsRecommendPoiItem *)arg1;
- (void)onUpdateLbsContactInfoError:(int)arg1;
- (void)onUpdateLbsContactInfoFinishedWithData:(LbsContactInfoList *)arg1;
- (void)onUpdateAdvertisement:(MMLbsAdvertismentInfo *)arg1;
- (void)onClearMyLbsDataFinishedWithResult:(_Bool)arg1;
@end

