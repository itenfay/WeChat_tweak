//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface WCAdMultiProductsInfo : NSObject
{
    NSArray *_imageList;
    NSString *_productDesc;
}

+ (id)fromXML:(struct XmlReaderNode_t *)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *productDesc; // @synthesize productDesc=_productDesc;
@property(retain, nonatomic) NSArray *imageList; // @synthesize imageList=_imageList;
- (_Bool)isValid;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

