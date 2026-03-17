//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class ShakeMusicInfo;

@protocol UploadShakeMusicMgrDelegate <NSObject>
- (void)OnGetMusicFail:(int)arg1 SessionId:(unsigned int)arg2;
- (void)OnGetMusicItem:(ShakeMusicInfo *)arg1 FPId:(unsigned int)arg2;
@end

