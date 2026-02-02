//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class UIColor;

@interface FBSDKIcon : NSObject
{
    UIColor *_color;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) UIColor *color; // @synthesize color=_color;
- (struct CGPath *)pathWithSize:(struct CGSize)arg1;
- (id)imageWithSize:(struct CGSize)arg1;
- (id)init;
- (id)initWithColor:(id)arg1;

@end

