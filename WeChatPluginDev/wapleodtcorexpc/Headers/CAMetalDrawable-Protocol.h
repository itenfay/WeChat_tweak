//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "MTLDrawable-Protocol.h"

@class CAMetalLayer;
@protocol MTLTexture;

@protocol CAMetalDrawable <MTLDrawable>
@property(readonly) CAMetalLayer *layer;
@property(readonly) id <MTLTexture> texture;
@end

