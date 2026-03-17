//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@protocol POINativeAPI
- (void)onFeedExposeItemIndex:(long long)arg1 sectionIndex:(long long)arg2 tabIndex:(long long)arg3 filterIndex:(long long)arg4 isEnd:(_Bool)arg5 x:(double)arg6 y:(double)arg7 width:(double)arg8 height:(double)arg9 error:(id *)arg10;
- (void)onFeedTapItemIndex:(long long)arg1 sectionIndex:(long long)arg2 tabIndex:(long long)arg3 filterIndex:(long long)arg4 visibleCellsInfoJSON:(NSString *)arg5 error:(id *)arg6;
- (void)onRequestPOIStreamTabIndex:(long long)arg1 filterIndex:(long long)arg2 isReload:(_Bool)arg3 completion:(void (^)(NSNumber *, FlutterError *))arg4;
- (void)onAddressEntranceTapWithError:(id *)arg1;
- (void)onForwardButtonTapWithError:(id *)arg1;
- (void)onChangeFavoriteStateSelected:(_Bool)arg1 error:(id *)arg2;
- (void)onTakeCarButtonTapWithError:(id *)arg1;
- (void)onNavigateButtonTapWithError:(id *)arg1;
- (void)onChangeScrollStateIsTop:(_Bool)arg1 error:(id *)arg2;
- (void)makePhoneCallPhoneNumber:(NSString *)arg1 error:(id *)arg2;
@end

