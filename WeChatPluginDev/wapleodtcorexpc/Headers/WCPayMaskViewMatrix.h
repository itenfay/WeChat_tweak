//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface WCPayMaskViewMatrix : NSObject
{
    char *data;
    CDStruct_73b5d383 _max;
}

@property(nonatomic) CDStruct_73b5d383 max; // @synthesize max=_max;
- (void)dealloc;
- (void)fillWithValue:(BOOL)arg1;
- (BOOL)getValueWithCoordinates:(unsigned long long)arg1 y:(unsigned long long)arg2;
- (void)setValue:(BOOL)arg1 forCoordinates:(unsigned long long)arg2 y:(unsigned long long)arg3;
- (BOOL)valueForCoordinates:(unsigned long long)arg1 y:(unsigned long long)arg2;
- (id)initWithMax:(CDStruct_73b5d383)arg1;
- (id)initWithMaxX:(unsigned long long)arg1 MaxY:(unsigned long long)arg2;

@end

