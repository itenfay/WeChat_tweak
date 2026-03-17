//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface WCADCanvasEggAnimationElementInfo : NSObject
{
    _Bool _shouldUpdateCardId;
    _Bool _shouldShowAnimationFromShared;
}

+ (id)fromAdInfo:(id)arg1;
+ (id)fromXML:(struct XmlReaderNode_t *)arg1;
@property(nonatomic) _Bool shouldShowAnimationFromShared; // @synthesize shouldShowAnimationFromShared=_shouldShowAnimationFromShared;
@property(nonatomic) _Bool shouldUpdateCardId; // @synthesize shouldUpdateCardId=_shouldUpdateCardId;
- (_Bool)isValid;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

