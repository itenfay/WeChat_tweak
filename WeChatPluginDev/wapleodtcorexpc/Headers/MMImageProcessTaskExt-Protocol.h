//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MMImage;

@protocol MMImageProcessTaskExt <NSObject>

@optional
- (void)imageProcessTask:(id)arg1 didFailToProcessMMImage:(MMImage *)arg2;
- (void)imageProcessTask:(id)arg1 didFinishProcessingMMImage:(MMImage *)arg2;
@end

