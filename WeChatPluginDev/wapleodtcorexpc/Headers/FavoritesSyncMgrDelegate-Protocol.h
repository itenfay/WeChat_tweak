//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@protocol FavoritesSyncMgrDelegate <NSObject>
- (void)OnNeedUpdateFavInfo;
- (void)OnSyncResult:(int)arg1 selector:(int)arg2;
@end

