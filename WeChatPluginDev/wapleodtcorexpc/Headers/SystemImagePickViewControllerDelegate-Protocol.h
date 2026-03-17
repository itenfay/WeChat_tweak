//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSDictionary;

@protocol SystemImagePickViewControllerDelegate <NSObject>
- (void)onAlbumChange:(NSDictionary *)arg1;
- (void)onChangeAsset:(NSDictionary *)arg1;
- (void)onClickAsset:(NSDictionary *)arg1;
@end

