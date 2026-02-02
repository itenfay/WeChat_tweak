//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface QTCObjcTypeAutoCodingBaseWrapper : NSObject
{
}

+ (id)qtc_generateClassPropertyNames;
+ (id)qtc_supportedObjcType;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)qtc_encodeWithCoder:(id)arg1;
- (void)qtc_decodeWithCoder:(id)arg1;
- (id)qtc_getPropertyNames;
- (id)qtc_decode;
- (id)qtc_encodeWithValue:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

