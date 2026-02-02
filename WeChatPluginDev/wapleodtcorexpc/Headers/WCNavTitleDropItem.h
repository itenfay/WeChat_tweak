//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, UIImage;

@interface WCNavTitleDropItem : NSObject
{
    _Bool _isSelected;
    unsigned long long _dataType;
    UIImage *_image;
    NSString *_title;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isSelected; // @synthesize isSelected=_isSelected;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
@property(nonatomic) unsigned long long dataType; // @synthesize dataType=_dataType;

@end

