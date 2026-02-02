//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class UIImage;

@interface OMJHandleBoxItem : NSObject
{
    UIImage *_image;
    long long _corner;
    unsigned long long _actionType;
    SEL _action;
    id _target;
    struct CGSize _imageSize;
    struct CGSize _touchSize;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) __weak id target; // @synthesize target=_target;
@property(readonly, nonatomic) SEL action; // @synthesize action=_action;
@property(readonly, nonatomic) unsigned long long actionType; // @synthesize actionType=_actionType;
@property(readonly, nonatomic) long long corner; // @synthesize corner=_corner;
@property(nonatomic) struct CGSize touchSize; // @synthesize touchSize=_touchSize;
@property(readonly, nonatomic) struct CGSize imageSize; // @synthesize imageSize=_imageSize;
@property(readonly, nonatomic) UIImage *image; // @synthesize image=_image;
- (id)description;
- (id)initWithImage:(id)arg1 imageSize:(struct CGSize)arg2 corner:(long long)arg3 target:(id)arg4 action:(SEL)arg5;
- (id)initWithImage:(id)arg1 imageSize:(struct CGSize)arg2 corner:(long long)arg3 actionType:(unsigned long long)arg4;

@end

