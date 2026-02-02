//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class WCADCanvasEggAnimationElementInfo;

@interface WCADCanvasEggAnimationInfo : NSObject
{
    long long _animationType;
    WCADCanvasEggAnimationElementInfo *_animationElementInfo;
}

+ (id)fromXML:(struct XmlReaderNode_t *)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) WCADCanvasEggAnimationElementInfo *animationElementInfo; // @synthesize animationElementInfo=_animationElementInfo;
@property(nonatomic) long long animationType; // @synthesize animationType=_animationType;
- (_Bool)shouldShowAnimationFromShared;
- (_Bool)shouldUpdateCardId;
- (_Bool)isValid;
- (id)safeGetAnimationElementInfoForType:(long long)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

