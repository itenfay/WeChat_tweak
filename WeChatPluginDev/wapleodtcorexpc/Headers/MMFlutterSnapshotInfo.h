//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class UIImage;

@interface MMFlutterSnapshotInfo : NSObject
{
    UIImage *_image;
    struct CGRect _frame;
    struct CGRect _contentFrame;
}

- (void).cxx_destruct;
@property(nonatomic) struct CGRect contentFrame; // @synthesize contentFrame=_contentFrame;
@property(nonatomic) struct CGRect frame; // @synthesize frame=_frame;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
- (id)initWithImage:(id)arg1 frame:(struct CGRect)arg2 contentFrame:(struct CGRect)arg3;

@end

