//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@protocol FavTagViewDelegate <NSObject>

@optional
- (void)onFavTagEditCancel;
- (void)onFavTagEditOK;
- (void)onFavTagEditBegin:(int)arg1;
@end

