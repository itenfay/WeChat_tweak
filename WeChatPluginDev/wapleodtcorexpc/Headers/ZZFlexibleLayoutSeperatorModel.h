//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class UIColor;

@interface ZZFlexibleLayoutSeperatorModel : NSObject
{
    UIColor *_color;
    struct CGSize _size;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIColor *color; // @synthesize color=_color;
@property(nonatomic) struct CGSize size; // @synthesize size=_size;
- (id)initWithSize:(struct CGSize)arg1 andColor:(id)arg2;

@end

