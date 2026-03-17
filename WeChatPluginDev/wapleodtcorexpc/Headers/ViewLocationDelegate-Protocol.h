//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class FavoritesItem, FavoritesItemDataField, MMViewLocationViewController, NSString;

@protocol ViewLocationDelegate <NSObject>

@optional
- (NSString *)getChatName;
- (void)onFinishViewLocation;
- (void)onShowFavContext:(FavoritesItem *)arg1 DataItem:(FavoritesItemDataField *)arg2 NeedReport:(_Bool)arg3 FromScene:(unsigned int)arg4 FavIndex:(unsigned int)arg5 SearchText:(NSString *)arg6;
- (void)onShareLocationMsgToOpenSDKWithViewController:(MMViewLocationViewController *)arg1;
- (void)onSendLocationToFriendWithViewController:(MMViewLocationViewController *)arg1;
- (_Bool)canShowShareLocationMsgToDevice;
@end

