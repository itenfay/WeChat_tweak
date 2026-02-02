//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class TPOptionalParamBool, TPOptionalParamFloat, TPOptionalParamLong, TPOptionalParamObject, TPOptionalParamQueueInt, TPOptionalParamQueueString, TPOptionalParamString;

@interface TPOptionalParam : NSObject
{
    unsigned long long _paramType;
    TPOptionalParamLong *_paramLong;
    TPOptionalParamFloat *_paramFloat;
    TPOptionalParamBool *_paramBool;
    TPOptionalParamString *_paramString;
    TPOptionalParamQueueInt *_paramQueueInt;
    TPOptionalParamQueueString *_paramQueueString;
    TPOptionalParamObject *_paramObject;
}

+ (id)paramObjectWithkey:(unsigned long long)arg1 value:(id)arg2;
+ (id)paramQueueStringWithKey:(unsigned long long)arg1 value:(id)arg2;
+ (id)paramQueueIntWithKey:(unsigned long long)arg1 value:(id)arg2;
+ (id)paramStringWithKey:(unsigned long long)arg1 value:(id)arg2 param1:(id)arg3 param2:(id)arg4;
+ (id)paramBoolWithKey:(unsigned long long)arg1 value:(_Bool)arg2 param1:(_Bool)arg3 param2:(_Bool)arg4;
+ (id)paramFloatWithKey:(unsigned long long)arg1 value:(float)arg2 param1:(float)arg3 param2:(float)arg4;
+ (id)paramLongWithKey:(unsigned long long)arg1 value:(long long)arg2 param1:(long long)arg3 param2:(long long)arg4;
- (void).cxx_destruct;
@property(retain, nonatomic) TPOptionalParamObject *paramObject; // @synthesize paramObject=_paramObject;
@property(retain, nonatomic) TPOptionalParamQueueString *paramQueueString; // @synthesize paramQueueString=_paramQueueString;
@property(retain, nonatomic) TPOptionalParamQueueInt *paramQueueInt; // @synthesize paramQueueInt=_paramQueueInt;
@property(retain, nonatomic) TPOptionalParamString *paramString; // @synthesize paramString=_paramString;
@property(retain, nonatomic) TPOptionalParamBool *paramBool; // @synthesize paramBool=_paramBool;
@property(retain, nonatomic) TPOptionalParamFloat *paramFloat; // @synthesize paramFloat=_paramFloat;
@property(retain, nonatomic) TPOptionalParamLong *paramLong; // @synthesize paramLong=_paramLong;
@property(nonatomic) unsigned long long paramType; // @synthesize paramType=_paramType;
- (id)description;
- (id)objectValue;
- (id)queueStringValue;
- (id)queueIntValue;
- (id)stringValue;
- (_Bool)boolValue;
- (float)floatValue;
- (long long)longParam1;
- (long long)longValue;
- (unsigned long long)key;
- (id)init;

@end

