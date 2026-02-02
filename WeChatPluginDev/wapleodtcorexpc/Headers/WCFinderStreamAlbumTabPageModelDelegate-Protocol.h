//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class WCFinderStreamAlbumTabPageModel;

@protocol WCFinderStreamAlbumTabPageModelDelegate <NSObject>
- (void)playList:(WCFinderStreamAlbumTabPageModel *)arg1 appendDataAtRange:(struct _NSRange)arg2;
- (void)playListDataDidReload:(WCFinderStreamAlbumTabPageModel *)arg1;
@end

