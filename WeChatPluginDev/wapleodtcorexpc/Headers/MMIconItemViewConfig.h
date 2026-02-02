//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, NSURL, UIImage;
@protocol MMIconItemConfigDelegate, MMIconItemDelegate;

@interface MMIconItemViewConfig : NSObject
{
    _Bool _changeIconColorOnAppearanceChange;
    NSString *_title;
    NSURL *_imageUrl;
    id <MMIconItemDelegate> _delegate;
    UIImage *_image;
    NSString *_uniqueId;
    double _iconLength;
    double _bgLength;
    double _bgCornerRadius;
    double _iconLabelPadding;
    NSString *_type;
    id <MMIconItemConfigDelegate> _configDelegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <MMIconItemConfigDelegate> configDelegate; // @synthesize configDelegate=_configDelegate;
@property(nonatomic) _Bool changeIconColorOnAppearanceChange; // @synthesize changeIconColorOnAppearanceChange=_changeIconColorOnAppearanceChange;
@property(retain, nonatomic) NSString *type; // @synthesize type=_type;
@property(nonatomic) double iconLabelPadding; // @synthesize iconLabelPadding=_iconLabelPadding;
@property(nonatomic) double bgCornerRadius; // @synthesize bgCornerRadius=_bgCornerRadius;
@property(nonatomic) double bgLength; // @synthesize bgLength=_bgLength;
@property(nonatomic) double iconLength; // @synthesize iconLength=_iconLength;
@property(retain, nonatomic) NSString *uniqueId; // @synthesize uniqueId=_uniqueId;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
@property(nonatomic) __weak id <MMIconItemDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSURL *imageUrl; // @synthesize imageUrl=_imageUrl;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
- (id)init;

@end

