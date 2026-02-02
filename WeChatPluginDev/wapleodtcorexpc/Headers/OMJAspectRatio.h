//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface OMJAspectRatio : NSObject
{
    struct XMFAspectRatio _backingAspectRatio;
}

+ (id)loadFromData:(id)arg1;
+ (id)fromWidth:(int)arg1 height:(int)arg2;
+ (id)fromType:(unsigned long long)arg1;
+ (id)fromBackingAspectRatio:(const void *)arg1;
- (id).cxx_construct;
- (void).cxx_destruct;
@property(nonatomic) struct XMFAspectRatio backingAspectRatio; // @synthesize backingAspectRatio=_backingAspectRatio;
- (id)saveToData;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)toString;
- (_Bool)isValid;
@property(readonly, nonatomic) double doubleValue;
@property(readonly, nonatomic) int height;
@property(readonly, nonatomic) int width;
@property(readonly, nonatomic) unsigned long long aspectRatioType;
- (id)initWithBackingAspectRatio:(const void *)arg1;

@end

