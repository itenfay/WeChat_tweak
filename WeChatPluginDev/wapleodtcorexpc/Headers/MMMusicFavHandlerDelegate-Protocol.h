//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MMMusicFavHandler;

@protocol MMMusicFavHandlerDelegate <NSObject>
- (void)mmMusicFavHandlerOnAddFav:(MMMusicFavHandler *)arg1;
- (void)mmMusicFavHandlerOnEndLoading:(MMMusicFavHandler *)arg1;
- (void)mmMusicFavHandlerOnStartLoading:(MMMusicFavHandler *)arg1;
@end

