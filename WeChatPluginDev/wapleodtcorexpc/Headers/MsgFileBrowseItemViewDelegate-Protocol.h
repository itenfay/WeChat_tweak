//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString, UIImage;

@protocol MsgFileBrowseItemViewDelegate <NSObject>

@optional
- (UIImage *)getFileBrowseItemIconImageByFileExt:(NSString *)arg1;
- (void)onFileBrowseItem:(NSString *)arg1 selected:(_Bool)arg2;
@end

