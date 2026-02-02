//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface BrandFinderLiveDataWrapperMedia : NSObject
{
    NSString *_coverUrl;
    double _width;
    double _height;
}

+ (id)modelCustomPropertyMapperForConfigTag:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) double height; // @synthesize height=_height;
@property(nonatomic) double width; // @synthesize width=_width;
@property(copy, nonatomic) NSString *coverUrl; // @synthesize coverUrl=_coverUrl;
- (id)description;
- (id)toXML;
- (_Bool)fromXML:(struct XmlReaderNode_t *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

