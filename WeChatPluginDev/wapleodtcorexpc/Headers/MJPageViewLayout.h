//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface MJPageViewLayout : NSObject
{
    struct CGRect _titleFrame;
    struct CGRect _contentFrame;
}

+ (id)commonLayout;
@property(nonatomic) struct CGRect contentFrame; // @synthesize contentFrame=_contentFrame;
@property(nonatomic) struct CGRect titleFrame; // @synthesize titleFrame=_titleFrame;
- (id)initWithTitleFrame:(struct CGRect)arg1 contentFrame:(struct CGRect)arg2;

@end

