//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, OMJAspectRatio;

@interface MJCanvasCellItem : NSObject
{
    _Bool _isSelected;
    NSString *_title;
    NSString *_iconName;
    OMJAspectRatio *_aspectRatio;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isSelected; // @synthesize isSelected=_isSelected;
@property(retain, nonatomic) OMJAspectRatio *aspectRatio; // @synthesize aspectRatio=_aspectRatio;
@property(retain, nonatomic) NSString *iconName; // @synthesize iconName=_iconName;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
- (id)initWithTitle:(id)arg1 iconName:(id)arg2 aspectRatio:(id)arg3;

@end

