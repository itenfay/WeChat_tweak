//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class CardImgItemInfo, UIImage;

@interface ContactCardImage : NSObject
{
    UIImage *_image;
    CardImgItemInfo *_cardItem;
}

+ (id)cardImageWithImage:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) CardImgItemInfo *cardItem; // @synthesize cardItem=_cardItem;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
- (id)description;

@end

