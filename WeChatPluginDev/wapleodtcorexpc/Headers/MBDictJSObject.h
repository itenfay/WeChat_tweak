//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSObject;

@interface MBDictJSObject
{
    NSObject *_data;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSObject *data; // @synthesize data=_data;
- (id)description;
- (id)toDict;
- (id)toArray;
- (_Bool)toBoolean;
- (unsigned int)toUInt32;
- (double)toNumber;
- (const void *)toRawArrayBuffer:(unsigned long long *)arg1;
- (id)toArrayBuffer;
- (const char *)toRawString;
- (id)toString;
- (void)setDict:(id)arg1 forName:(id)arg2;
- (void)setArray:(id)arg1 forName:(id)arg2;
- (void)setData:(id)arg1 forName:(id)arg2;
- (void)setBoolean:(_Bool)arg1 forName:(id)arg2;
- (void)setNumber:(double)arg1 forName:(id)arg2;
- (void)setString:(id)arg1 forName:(id)arg2;
- (void)setObject:(id)arg1 forName:(id)arg2;
- (id)get:(id)arg1;
- (id)initWithObject:(id)arg1;
- (id)initWithDict:(id)arg1;
- (id)init;

@end

