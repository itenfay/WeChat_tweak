//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@interface WCADCanvasEggAnimationSimpleTwist
{
    _Bool _clockwise;
}

+ (id)fromAdInfo:(id)arg1;
+ (id)fromXML:(struct XmlReaderNode_t *)arg1;
@property(nonatomic) _Bool clockwise; // @synthesize clockwise=_clockwise;
- (_Bool)isValid;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

