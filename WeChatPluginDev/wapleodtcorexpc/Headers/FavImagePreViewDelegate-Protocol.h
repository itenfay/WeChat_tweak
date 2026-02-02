//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class FavImagePreView, UIImageView;
@protocol RecordNodeDataSource;

@protocol FavImagePreViewDelegate <NSObject>

@optional
- (void)onWillLongPressFavImagePreView:(FavImagePreView *)arg1 imageView:(UIImageView *)arg2;
- (void)onLongPressedFavPreImage:(id <RecordNodeDataSource>)arg1;
- (void)onClickFavPreImage:(FavImagePreView *)arg1 ImageIndex:(unsigned int)arg2;
@end

