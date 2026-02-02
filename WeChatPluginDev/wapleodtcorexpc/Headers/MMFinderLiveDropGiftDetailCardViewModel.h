//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, UIImage;

@interface MMFinderLiveDropGiftDetailCardViewModel : NSObject
{
    UIImage *_backgroundImage;
    NSString *_title;
    NSString *_desc;
    NSString *_subDesc;
    NSString *_giftImgUrl;
    NSString *_coinImgUrl;
    NSString *_coinSum;
    Class _cardViewClazz;
}

+ (id)defaultForFirstOpenGiftDetailCardViewForAudience;
+ (id)defaultForOpenGiftDetailCardViewForAnchor;
+ (id)defaultForOpenGiftDetailCardViewUnavailable;
- (void).cxx_destruct;
@property(retain, nonatomic) Class cardViewClazz; // @synthesize cardViewClazz=_cardViewClazz;
@property(retain, nonatomic) NSString *coinSum; // @synthesize coinSum=_coinSum;
@property(retain, nonatomic) NSString *coinImgUrl; // @synthesize coinImgUrl=_coinImgUrl;
@property(retain, nonatomic) NSString *giftImgUrl; // @synthesize giftImgUrl=_giftImgUrl;
@property(retain, nonatomic) NSString *subDesc; // @synthesize subDesc=_subDesc;
@property(retain, nonatomic) NSString *desc; // @synthesize desc=_desc;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) UIImage *backgroundImage; // @synthesize backgroundImage=_backgroundImage;

@end

