//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray;

@interface WCAdConsultBarCarouselInfo : NSObject
{
    unsigned long long _firstAnimInterval;
    NSArray *_barInfoList;
}

+ (id)fromXML:(struct XmlReaderNode_t *)arg1;
- (void).cxx_destruct;
@property(copy, nonatomic) NSArray *barInfoList; // @synthesize barInfoList=_barInfoList;
@property(nonatomic) unsigned long long firstAnimInterval; // @synthesize firstAnimInterval=_firstAnimInterval;
- (_Bool)isValid;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

