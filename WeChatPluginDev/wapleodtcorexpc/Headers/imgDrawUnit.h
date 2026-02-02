//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class UIImage;

@interface imgDrawUnit : NSObject
{
    UIImage *_image;
    struct CGRect _bound;
}

- (void).cxx_destruct;
@property(nonatomic) struct CGRect bound; // @synthesize bound=_bound;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;

@end

