//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, UIColor;

@interface WCTagItem : NSObject
{
    long long _type;
    NSString *_imageName;
    UIColor *_imageColor;
    CDUnknownBlockType _imageCreateAction;
    CDUnknownBlockType _itemViewCreateAction;
    struct CGSize _size;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType itemViewCreateAction; // @synthesize itemViewCreateAction=_itemViewCreateAction;
@property(copy, nonatomic) CDUnknownBlockType imageCreateAction; // @synthesize imageCreateAction=_imageCreateAction;
@property(retain, nonatomic) UIColor *imageColor; // @synthesize imageColor=_imageColor;
@property(retain, nonatomic) NSString *imageName; // @synthesize imageName=_imageName;
@property(nonatomic) struct CGSize size; // @synthesize size=_size;
@property(nonatomic) long long type; // @synthesize type=_type;
- (double)getWidthByHeight:(double)arg1;
- (id)initWithType:(long long)arg1 size:(struct CGSize)arg2 imageUrl:(id)arg3;
- (id)initWithType:(long long)arg1 size:(struct CGSize)arg2 imageName:(id)arg3 imageColor:(id)arg4;
- (id)initWithType:(long long)arg1 size:(struct CGSize)arg2 imageCreateAction:(CDUnknownBlockType)arg3;
- (id)initWithType:(long long)arg1 size:(struct CGSize)arg2 itemViewCreateAction:(CDUnknownBlockType)arg3;
- (id)initWithType:(long long)arg1 size:(struct CGSize)arg2;

@end

