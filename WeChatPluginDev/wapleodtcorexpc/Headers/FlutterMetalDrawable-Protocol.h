//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "MTLDrawable-Protocol.h"

@protocol MTLCommandBuffer;

@protocol FlutterMetalDrawable <MTLDrawable>
- (void)flutterPrepareForPresent:(id <MTLCommandBuffer>)arg1;
@end

