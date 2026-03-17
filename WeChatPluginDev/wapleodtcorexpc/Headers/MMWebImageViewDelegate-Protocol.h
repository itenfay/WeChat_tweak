//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MMWebImageView, NSMutableDictionary;

@protocol MMWebImageViewDelegate <NSObject>

@optional
- (void)onLoadImageFail:(MMWebImageView *)arg1 extraInfo:(NSMutableDictionary *)arg2;
- (void)onLoadImageOK:(MMWebImageView *)arg1;
@end

