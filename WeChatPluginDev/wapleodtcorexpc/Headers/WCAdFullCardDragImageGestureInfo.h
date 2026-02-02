//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCAdFullCardDragImageGestureInfo : NSObject
{
    int _basicRemWidth;
    double _relatedWidth;
    unsigned long long _dragStartTime;
    unsigned long long _dragEndTime;
    NSString *_imageUrl;
    NSString *_srcDisplayRectStr;
    NSString *_destDisplayRectStr;
    NSString *_srcHitRectStr;
    NSString *_destHitRectStr;
    struct CGRect _srcDisplayRect;
    struct CGRect _destDisplayRect;
    struct CGRect _srcHitRect;
    struct CGRect _destHitRect;
}

+ (id)fromXML:(struct XmlReaderNode_t *)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *destHitRectStr; // @synthesize destHitRectStr=_destHitRectStr;
@property(retain, nonatomic) NSString *srcHitRectStr; // @synthesize srcHitRectStr=_srcHitRectStr;
@property(retain, nonatomic) NSString *destDisplayRectStr; // @synthesize destDisplayRectStr=_destDisplayRectStr;
@property(retain, nonatomic) NSString *srcDisplayRectStr; // @synthesize srcDisplayRectStr=_srcDisplayRectStr;
@property(nonatomic) int basicRemWidth; // @synthesize basicRemWidth=_basicRemWidth;
@property(retain, nonatomic) NSString *imageUrl; // @synthesize imageUrl=_imageUrl;
@property(nonatomic) unsigned long long dragEndTime; // @synthesize dragEndTime=_dragEndTime;
@property(nonatomic) unsigned long long dragStartTime; // @synthesize dragStartTime=_dragStartTime;
- (_Bool)isValid;
- (double)parseNumberStr:(id)arg1 basicWidth:(int)arg2 relatedWidth:(double)arg3;
- (struct CGRect)parseRectString:(id)arg1;
@property(readonly, nonatomic) struct CGRect destHitRect; // @synthesize destHitRect=_destHitRect;
@property(readonly, nonatomic) struct CGRect srcHitRect; // @synthesize srcHitRect=_srcHitRect;
@property(readonly, nonatomic) struct CGRect destDisplayRect; // @synthesize destDisplayRect=_destDisplayRect;
@property(readonly, nonatomic) struct CGRect srcDisplayRect; // @synthesize srcDisplayRect=_srcDisplayRect;
@property(nonatomic) double relatedWidth; // @synthesize relatedWidth=_relatedWidth;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

