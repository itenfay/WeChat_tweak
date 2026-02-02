//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class UIImage;

@interface TBImageHolder : NSObject
{
    int _rc;
    UIImage *_image;
}

- (void).cxx_destruct;
@property(nonatomic) int rc; // @synthesize rc=_rc;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;

@end

