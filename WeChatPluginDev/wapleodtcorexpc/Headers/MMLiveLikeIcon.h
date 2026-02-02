//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class UIImage;

@interface MMLiveLikeIcon : NSObject
{
    _Bool _fixedRate;
    float _rate;
    UIImage *_icon;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool fixedRate; // @synthesize fixedRate=_fixedRate;
@property(nonatomic) float rate; // @synthesize rate=_rate;
@property(retain, nonatomic) UIImage *icon; // @synthesize icon=_icon;
- (id)initWithImage:(id)arg1;

@end

