//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableData, WAEJTexture;

@interface WAEJImageData : NSObject
{
    int width;
    int height;
    NSMutableData *pixels;
    WAEJTexture *innerTexture;
}

@property(readonly, nonatomic) NSMutableData *pixels; // @synthesize pixels;
@property(readonly, nonatomic) int height; // @synthesize height;
@property(readonly, nonatomic) int width; // @synthesize width;
@property(readonly, nonatomic) WAEJTexture *texture;
- (void)dealloc;
- (id)initWithWidth:(int)arg1 height:(int)arg2 pixels:(id)arg3;

@end

