//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class WAEJTexture;

@interface WAEJCanvasContext2DTexture
{
    WAEJTexture *texture;
}

- (id)getTexture;
@property(readonly, nonatomic) WAEJTexture *texture;
- (void)resizeToWidth:(short)arg1 height:(short)arg2;
- (void)dealloc;

@end

