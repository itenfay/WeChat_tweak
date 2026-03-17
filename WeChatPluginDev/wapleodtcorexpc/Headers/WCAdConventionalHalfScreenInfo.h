//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface WCAdConventionalHalfScreenInfo : NSObject
{
    long long _jumpStyle;
    double _minHeightPercent;
}

+ (id)fromXML:(struct XmlReaderNode_t *)arg1;
@property(nonatomic) double minHeightPercent; // @synthesize minHeightPercent=_minHeightPercent;
@property(nonatomic) long long jumpStyle; // @synthesize jumpStyle=_jumpStyle;
- (double)fetchMinHeightPercent;
- (_Bool)isValid;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

