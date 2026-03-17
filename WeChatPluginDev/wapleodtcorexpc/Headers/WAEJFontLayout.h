//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSData;

@interface WAEJFontLayout : NSObject
{
    NSData *glyphLayout;
    CDStruct_de2edefb metrics;
    long long glyphCount;
}

@property(readonly, nonatomic) long long glyphCount; // @synthesize glyphCount;
@property(readonly, nonatomic) CDStruct_869f9c67 metrics; // @synthesize metrics;
@property(readonly, nonatomic) CDStruct_7244e0df *glyphLayout;
- (void)dealloc;
- (id)initWithGlyphLayout:(id)arg1 glyphCount:(long long)arg2 metrics:(CDStruct_869f9c67)arg3;

@end

