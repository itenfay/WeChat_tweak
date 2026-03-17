//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class UIColor;

@interface colorDrawUnit : NSObject
{
    UIColor *_color;
    struct _NSRange _range;
    struct CGRect _bound;
}

@property(nonatomic) struct _NSRange range; // @synthesize range=_range;
@property(nonatomic) struct CGRect bound; // @synthesize bound=_bound;
@property(retain, nonatomic) UIColor *color; // @synthesize color=_color;

@end

