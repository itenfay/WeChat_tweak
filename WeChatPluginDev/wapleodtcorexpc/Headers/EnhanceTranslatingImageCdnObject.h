//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, UIImage;

@interface EnhanceTranslatingImageCdnObject : NSObject
{
    UIImage *_captureImage;
    UIImage *_enhanceImage;
    UIImage *_translateImage;
    NSString *_captureImageCdnFiledId;
    NSString *_captureImageCdnAesKey;
    NSString *_enhanceImageCdnFiledId;
    NSString *_enhanceImageCdnAesKey;
    NSString *_translateImageCdnFiledId;
    NSString *_translateImageCdnAesKey;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *translateImageCdnAesKey; // @synthesize translateImageCdnAesKey=_translateImageCdnAesKey;
@property(retain, nonatomic) NSString *translateImageCdnFiledId; // @synthesize translateImageCdnFiledId=_translateImageCdnFiledId;
@property(retain, nonatomic) NSString *enhanceImageCdnAesKey; // @synthesize enhanceImageCdnAesKey=_enhanceImageCdnAesKey;
@property(retain, nonatomic) NSString *enhanceImageCdnFiledId; // @synthesize enhanceImageCdnFiledId=_enhanceImageCdnFiledId;
@property(retain, nonatomic) NSString *captureImageCdnAesKey; // @synthesize captureImageCdnAesKey=_captureImageCdnAesKey;
@property(retain, nonatomic) NSString *captureImageCdnFiledId; // @synthesize captureImageCdnFiledId=_captureImageCdnFiledId;
@property(retain, nonatomic) UIImage *translateImage; // @synthesize translateImage=_translateImage;
@property(retain, nonatomic) UIImage *enhanceImage; // @synthesize enhanceImage=_enhanceImage;
@property(retain, nonatomic) UIImage *captureImage; // @synthesize captureImage=_captureImage;

@end

