//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MMMusicInfo, NSString, UIImage;

@protocol MMMusicAlbumRtnExt <NSObject>

@optional
- (void)OnGetSongAlbumUrl:(MMMusicInfo *)arg1 AlbumUrl:(NSString *)arg2;
- (void)OnGetAlbumImage:(MMMusicInfo *)arg1 AlbumImage:(UIImage *)arg2;
@end

