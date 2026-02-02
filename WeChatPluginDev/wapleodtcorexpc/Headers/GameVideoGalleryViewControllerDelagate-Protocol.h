//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class GameVideoGalleryViewController;

@protocol GameVideoGalleryViewControllerDelagate <NSObject>
- (void)gameVideoGallery:(GameVideoGalleryViewController *)arg1 didPerformActionWithIndex:(long long)arg2 andData:(id)arg3;
@end

