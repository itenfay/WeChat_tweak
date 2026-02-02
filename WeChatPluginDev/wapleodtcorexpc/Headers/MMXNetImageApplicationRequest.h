//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray, UIImage;

@interface MMXNetImageApplicationRequest : NSObject
{
    UIImage *_image;
    NSArray *_response;
}

+ (id)requestWithImage:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *response; // @synthesize response=_response;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;

@end

