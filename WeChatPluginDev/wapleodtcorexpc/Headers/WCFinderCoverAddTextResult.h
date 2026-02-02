//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class CALayer, UIImage;

@interface WCFinderCoverAddTextResult : NSObject
{
    UIImage *_img;
    CALayer *_layer;
    struct CGRect _rect;
}

- (void).cxx_destruct;
@property(nonatomic) struct CGRect rect; // @synthesize rect=_rect;
@property(retain, nonatomic) CALayer *layer; // @synthesize layer=_layer;
@property(retain, nonatomic) UIImage *img; // @synthesize img=_img;

@end

