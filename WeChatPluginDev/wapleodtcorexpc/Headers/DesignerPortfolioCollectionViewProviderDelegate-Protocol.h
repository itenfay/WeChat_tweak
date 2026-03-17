//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class EmojiInfoObj, EmoticonStoreItem, NSString, UINavigationController;

@protocol DesignerPortfolioCollectionViewProviderDelegate <NSObject>

@optional
- (NSString *)sdkRequestID;
- (_Bool)needSDKReport;
- (void)onFetchDoneEmoticonData;
- (void)onFetchMoreEmoticonData;
- (unsigned long long)collectionViewDisplayScene;
- (unsigned long long)DetailVCEntryExtrance;
- (unsigned long long)DetailVCEntryScene;
- (void)OnOpenEmojiHalfScreen:(EmojiInfoObj *)arg1;
- (void)OnOpenDetailViewForItem:(EmoticonStoreItem *)arg1;
- (void)onFetchEmoticonDataFailed;
- (void)onGetEmoticonPacksForDisplay:(_Bool)arg1;
- (void)OnRewardStoreItem:(EmoticonStoreItem *)arg1;
- (void)onTapEmoticonWithItem:(EmoticonStoreItem *)arg1;
- (UINavigationController *)getNavController;
- (unsigned long long)currentDesignerEmoticonPackTapEventType;
- (_Bool)needStaticsInfo;
- (_Bool)shouldAutoRetryFetchOnFail;
- (_Bool)shouldRemoveExpiredPack;
- (_Bool)shouldShowDownloadView;
- (_Bool)shouldFetchStaticsInfo;
- (_Bool)shouldUseRichStyle;
@end

