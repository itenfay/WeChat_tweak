//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class EmoticonVideoInput;

@protocol EmoticonVideoInputDelegate <NSObject>
- (void)videoInput:(EmoticonVideoInput *)arg1 didOutputSampleBuffer:(struct opaqueCMSampleBuffer *)arg2;
@end

