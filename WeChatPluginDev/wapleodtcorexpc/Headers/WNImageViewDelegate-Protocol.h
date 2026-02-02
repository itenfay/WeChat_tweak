//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString, UIImage;

@protocol WNImageViewDelegate <NSObject>

@optional
- (void)onLoadComplete:(UIImage *)arg1 SourcePath:(NSString *)arg2;
@end

