//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class UIImage;

@interface MMAdaptiveBubbleParams : NSObject
{
    _Bool _needBlurEffect;
    UIImage *_mainPartBgImage;
    UIImage *_arrowImage;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIImage *arrowImage; // @synthesize arrowImage=_arrowImage;
@property(retain, nonatomic) UIImage *mainPartBgImage; // @synthesize mainPartBgImage=_mainPartBgImage;
@property(nonatomic) _Bool needBlurEffect; // @synthesize needBlurEffect=_needBlurEffect;

@end

