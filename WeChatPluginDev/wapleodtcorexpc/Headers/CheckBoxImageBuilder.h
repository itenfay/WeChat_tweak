//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class UIImage;

@interface CheckBoxImageBuilder : NSObject
{
    _Bool _isSelected;
    _Bool _isEnable;
    _Bool _isOverlay;
    unsigned long long _imageIconViewSizeType;
    UIImage *_CheckBoxImage;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIImage *CheckBoxImage; // @synthesize CheckBoxImage=_CheckBoxImage;
@property(nonatomic) _Bool isOverlay; // @synthesize isOverlay=_isOverlay;
@property(nonatomic) unsigned long long imageIconViewSizeType; // @synthesize imageIconViewSizeType=_imageIconViewSizeType;
@property(nonatomic) _Bool isEnable; // @synthesize isEnable=_isEnable;
@property(nonatomic) _Bool isSelected; // @synthesize isSelected=_isSelected;
@property(readonly, nonatomic) UIImage *standardImage;
@property(readonly, copy, nonatomic) CDUnknownBlockType withSelected;
@property(readonly, copy, nonatomic) CDUnknownBlockType withOverlay;
@property(readonly, copy, nonatomic) CDUnknownBlockType withEnable;
@property(readonly, copy, nonatomic) CheckBoxImageBuilder *smallBoxBuilder;
@property(readonly, copy, nonatomic) CheckBoxImageBuilder *mediumBoxBuilder;
- (id)init;

@end

