//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSData, UIImage;

@interface DecodeRequest : NSObject
{
    UIImage *_imageRef;
    NSData *_data;
    CDStruct_d5967ce6 *_frameInfo;
}

- (void).cxx_destruct;
@property CDStruct_d5967ce6 *frameInfo; // @synthesize frameInfo=_frameInfo;
@property(retain, nonatomic) NSData *data; // @synthesize data=_data;
@property(retain) UIImage *imageRef; // @synthesize imageRef=_imageRef;
- (void)dealloc;

@end

