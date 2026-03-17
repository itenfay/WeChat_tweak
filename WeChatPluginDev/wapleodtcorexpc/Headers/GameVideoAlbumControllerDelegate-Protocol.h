//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "GameVideoEditViewControllerDelegate-Protocol.h"

@class NSDictionary;

@protocol GameVideoAlbumControllerDelegate <GameVideoEditViewControllerDelegate>
- (void)gameAlbumVideoDidChoose:(NSDictionary *)arg1 extraInfo:(NSDictionary *)arg2;
- (void)videoAlbumControllerDidSkip;
- (void)videoAlbumControllerDidExit;
@end

