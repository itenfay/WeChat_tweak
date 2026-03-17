//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class ShareFavoritesConfirmLogicHelper;

@protocol ShareFavoritesConfirmLogicHelperDelegate <NSObject>

@optional
- (_Bool)ShouldInterceptShareFavoritesItemBeforeConfirm:(ShareFavoritesConfirmLogicHelper *)arg1;
- (void)OnShareFavoritesItemCancel:(ShareFavoritesConfirmLogicHelper *)arg1;
- (void)OnShareFavoritesItemFail:(ShareFavoritesConfirmLogicHelper *)arg1 WithError:(int)arg2;
- (void)OnShareFavoritesItemOK:(ShareFavoritesConfirmLogicHelper *)arg1;
@end

