//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class UIView;

@interface WeakViewBox : NSObject
{
    _Bool _isAdjusting;
    UIView *_view;
}

+ (id)view:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) _Bool isAdjusting; // @synthesize isAdjusting=_isAdjusting;
@property(nonatomic) __weak UIView *view; // @synthesize view=_view;

@end

