//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface WCEliminatedSlotMMKV
{
    unsigned int _slotCount;
    unsigned int _slotTimeSize;
    unsigned int _readBufferCount;
    NSString *_slotMapId;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int readBufferCount; // @synthesize readBufferCount=_readBufferCount;
@property(nonatomic) unsigned int slotTimeSize; // @synthesize slotTimeSize=_slotTimeSize;
@property(nonatomic) unsigned int slotCount; // @synthesize slotCount=_slotCount;
@property(copy, nonatomic) NSString *slotMapId; // @synthesize slotMapId=_slotMapId;
- (_Bool)isGetterKeyValid:(id)arg1;
- (_Bool)isSetterKeyValid:(id)arg1;
- (_Bool)containsKey:(id)arg1;
- (void)clear;
- (void)removeValueForKey:(id)arg1;
- (id)slotMMKVWithIndex:(unsigned int)arg1;
- (id)orderlyMMKvArrayInReadBuffer;
- (id)currentMMKVForWrite;
- (id)getDataForKey:(id)arg1 defaultValue:(id)arg2;
- (id)getDataForKey:(id)arg1;
- (id)getDateForKey:(id)arg1 defaultValue:(id)arg2;
- (id)getDateForKey:(id)arg1;
- (double)getDoubleForKey:(id)arg1 defaultValue:(double)arg2;
- (double)getDoubleForKey:(id)arg1;
- (float)getFloatForKey:(id)arg1 defaultValue:(float)arg2;
- (float)getFloatForKey:(id)arg1;
- (unsigned long long)getUInt64ForKey:(id)arg1 defaultValue:(unsigned long long)arg2;
- (unsigned long long)getUInt64ForKey:(id)arg1;
- (long long)getInt64ForKey:(id)arg1 defaultValue:(long long)arg2;
- (long long)getInt64ForKey:(id)arg1;
- (unsigned int)getUInt32ForKey:(id)arg1 defaultValue:(unsigned int)arg2;
- (unsigned int)getUInt32ForKey:(id)arg1;
- (int)getInt32ForKey:(id)arg1 defaultValue:(int)arg2;
- (int)getInt32ForKey:(id)arg1;
- (_Bool)getBoolForKey:(id)arg1 defaultValue:(_Bool)arg2;
- (_Bool)getBoolForKey:(id)arg1;
- (id)getStringForKey:(id)arg1 defaultValue:(id)arg2;
- (id)getStringForKey:(id)arg1;
- (id)getArrayOfValueType:(Class)arg1 forKey:(id)arg2;
- (id)getObjectOfClass:(Class)arg1 forKey:(id)arg2;
- (_Bool)setDouble:(double)arg1 forKey:(id)arg2;
- (_Bool)setFloat:(float)arg1 forKey:(id)arg2;
- (_Bool)setUInt64:(unsigned long long)arg1 forKey:(id)arg2;
- (_Bool)setInt64:(long long)arg1 forKey:(id)arg2;
- (_Bool)setUInt32:(unsigned int)arg1 forKey:(id)arg2;
- (_Bool)setInt32:(int)arg1 forKey:(id)arg2;
- (_Bool)setBool:(_Bool)arg1 forKey:(id)arg2;
- (_Bool)setObject:(id)arg1 forKey:(id)arg2;
- (id)init;
- (id)initWithSlotMMKVMapId:(id)arg1 expiredTime:(unsigned int)arg2;
- (id)initWithSlotMMKVMapId:(id)arg1 slotCount:(unsigned int)arg2 slotTimeSize:(unsigned int)arg3 readBufferCount:(unsigned int)arg4;

@end

