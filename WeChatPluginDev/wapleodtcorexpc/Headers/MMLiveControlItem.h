//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;
@protocol MMLiveControlItemDelegate;

@interface MMLiveControlItem : NSObject
{
    _Bool _showBadge;
    NSString *_controlName;
    NSString *_controlIconName;
    NSString *_controlTitle;
    id <MMLiveControlItemDelegate> _delegate;
    struct CGSize _iconImageSize;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <MMLiveControlItemDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool showBadge; // @synthesize showBadge=_showBadge;
@property(nonatomic) struct CGSize iconImageSize; // @synthesize iconImageSize=_iconImageSize;
@property(copy, nonatomic) NSString *controlTitle; // @synthesize controlTitle=_controlTitle;
@property(copy, nonatomic) NSString *controlIconName; // @synthesize controlIconName=_controlIconName;
@property(copy, nonatomic) NSString *controlName; // @synthesize controlName=_controlName;

@end

