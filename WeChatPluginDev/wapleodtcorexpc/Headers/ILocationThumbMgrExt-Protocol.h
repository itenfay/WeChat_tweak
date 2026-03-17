//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class LocationThumbTask, UIImage;

@protocol ILocationThumbMgrExt <NSObject>

@optional
- (void)OnLocationThumbMgrError:(int)arg1 Task:(LocationThumbTask *)arg2;
- (void)OnUpdateLocationThumb:(UIImage *)arg1 Task:(LocationThumbTask *)arg2;
@end

