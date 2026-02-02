//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSDictionary, NSString, UIImage;

@interface ExpressionWrap : NSObject
{
    NSString *_key;
    NSDictionary *_descDic;
    NSString *_imagePath;
    NSString *_imageName;
    UIImage *_image;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
@property(retain, nonatomic) NSString *imageName; // @synthesize imageName=_imageName;
@property(retain, nonatomic) NSString *imagePath; // @synthesize imagePath=_imagePath;
@property(retain, nonatomic) NSDictionary *descDic; // @synthesize descDic=_descDic;
@property(retain, nonatomic) NSString *key; // @synthesize key=_key;
- (id)loadImage;

@end

