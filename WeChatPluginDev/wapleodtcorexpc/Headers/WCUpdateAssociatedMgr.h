//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface WCUpdateAssociatedMgr : NSObject
{
    NSMutableDictionary *_methodSignatureSelectorDict;
    NSMutableDictionary *_selectorObjectNameDict;
}

+ (SEL)associateObjectForSetterName:(id)arg1;
+ (SEL)associateObjectForGetterName:(id)arg1;
+ (void)addMethodForClass:(Class)arg1 forSel:(SEL)arg2 withMethodType:(const char *)arg3 withPolicty:(unsigned long long)arg4;
+ (id)shareInstance;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *selectorObjectNameDict; // @synthesize selectorObjectNameDict=_selectorObjectNameDict;
@property(retain, nonatomic) NSMutableDictionary *methodSignatureSelectorDict; // @synthesize methodSignatureSelectorDict=_methodSignatureSelectorDict;
- (struct _NSRange)centerGetNSRange;
- (void)centerSetNSRangeNonAtomic:(struct _NSRange)arg1;
- (void)centerSetNSRangeAtomic:(struct _NSRange)arg1;
- (struct UIOffset)centerGetUIOffset;
- (void)centerSetUIOffsetNonAtomic:(struct UIOffset)arg1;
- (void)centerSetUIOffsetAtomic:(struct UIOffset)arg1;
- (struct UIEdgeInsets)centerGetUIEdgeInsets;
- (void)centerSetUIEdgeInsetsNonAtomic:(struct UIEdgeInsets)arg1;
- (void)centerSetUIEdgeInsetsAtomic:(struct UIEdgeInsets)arg1;
- (struct CGAffineTransform)centerGetCGTransform;
- (void)centerSetCGTransformNonAtomic:(struct CGAffineTransform)arg1;
- (void)centerSetCGTransformAtomic:(struct CGAffineTransform)arg1;
- (struct CGRect)centerGetCGRect;
- (void)centerSetCGRectNonAtomic:(struct CGRect)arg1;
- (void)centerSetCGRectAtomic:(struct CGRect)arg1;
- (struct CGVector)centerGetCGVector;
- (void)centerSetCGVectorNonAtomic:(struct CGVector)arg1;
- (void)centerSetCGVectorAtomic:(struct CGVector)arg1;
- (struct CGPoint)centerGetCGPoint;
- (void)centerSetCGPointNonAtomic:(struct CGPoint)arg1;
- (void)centerSetCGPointAtomic:(struct CGPoint)arg1;
- (struct CGSize)centerGetCGSize;
- (void)centerSetCGSizeNonAtomic:(struct CGSize)arg1;
- (void)centerSetCGSizeAtomic:(struct CGSize)arg1;
- (SEL)centerGetSEL;
- (void)centerSetSELNonatomic:(SEL)arg1;
- (void)centerSetSELAtomic:(SEL)arg1;
- (id)centerGetWeakID;
- (void)centerSetIDWeak:(id)arg1;
- (id)centerGetID;
- (void)centerSetIDCopy:(id)arg1;
- (void)centerSetIDRetain:(id)arg1;
- (void)centerSetIDCopyNonAtomic:(id)arg1;
- (void)centerSetIDRetainNonAtomic:(id)arg1;
- (void)centerSetIDAssign:(id)arg1;
- (double)centerGetDouble;
- (void)centerSetDoubleNonAtomic:(double)arg1;
- (void)centerSetDoubleAtomic:(double)arg1;
- (float)centerGetFloat;
- (void)centerSetFloatNonAtomic:(float)arg1;
- (void)centerSetFloatAtomic:(float)arg1;
- (unsigned short)centerGetUnsignedShort;
- (void)centerSetUnsignedShortNonAtomic:(unsigned short)arg1;
- (void)centerSetUnsignedShortAtomic:(unsigned short)arg1;
- (short)centerGetShort;
- (void)centerSetShortNonAtomic:(short)arg1;
- (void)centerSetShortAtomic:(short)arg1;
- (unsigned int)centerGetUnsignedInt;
- (void)centerSetUnsignedIntNonAtomic:(unsigned int)arg1;
- (void)centerSetUnsignedIntAtomic:(unsigned int)arg1;
- (int)centerGetInt;
- (void)centerSetIntNonAtomic:(int)arg1;
- (void)centerSetIntAtomic:(int)arg1;
- (unsigned char)centerGetUnsignedChar;
- (void)centerSetUnsignedCharNonAtomic:(unsigned char)arg1;
- (void)centerSetUnsignedCharAtomic:(unsigned char)arg1;
- (BOOL)centerGetChar;
- (void)centerSetCharNonAtomic:(BOOL)arg1;
- (void)centerSetCharAtomic:(BOOL)arg1;
- (_Bool)centerGetBOOL;
- (void)centerSetBOOLNonAtomic:(_Bool)arg1;
- (void)centerSetBOOLAtomic:(_Bool)arg1;
- (unsigned long long)centerGetUnsignedLongLong;
- (void)centerSetUnsignedLongLongNonAtomic:(unsigned long long)arg1;
- (void)centerSetUnsignedLongLongAtomic:(unsigned long long)arg1;
- (long long)centerGetLongLong;
- (void)centerSetLongLongNonAtomic:(long long)arg1;
- (void)centerSetLongLongAtomic:(long long)arg1;
- (void)keepStuffFromStrip;
- (id)init;

@end

