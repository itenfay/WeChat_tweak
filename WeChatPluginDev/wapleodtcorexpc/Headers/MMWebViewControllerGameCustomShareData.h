//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSNumber, NSString, UIImage;

@interface MMWebViewControllerGameCustomShareData : NSObject
{
    NSNumber *_buttonId;
    NSString *_buttonTitle;
    UIImage *_buttonImage;
}

- (void).cxx_destruct;
@property(copy, nonatomic) UIImage *buttonImage; // @synthesize buttonImage=_buttonImage;
@property(copy, nonatomic) NSString *buttonTitle; // @synthesize buttonTitle=_buttonTitle;
@property(retain, nonatomic) NSNumber *buttonId; // @synthesize buttonId=_buttonId;

@end

