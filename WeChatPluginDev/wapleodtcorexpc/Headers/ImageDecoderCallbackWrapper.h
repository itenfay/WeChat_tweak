//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface ImageDecoderCallbackWrapper : NSObject
{
    int _width;
    int _height;
    const struct Memory *_pixel;
    function_2b6ca66c _callback;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property function_2b6ca66c callback; // @synthesize callback=_callback;
@property int height; // @synthesize height=_height;
@property int width; // @synthesize width=_width;
@property const struct Memory *pixel; // @synthesize pixel=_pixel;
- (void)execute;

@end

