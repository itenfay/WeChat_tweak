//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface PAGFont : NSObject
{
    NSString *fontFamily;
    NSString *fontStyle;
}

+ (void)UnregisterFont:(id)arg1;
+ (id)RegisterFont:(void *)arg1 size:(unsigned long long)arg2 family:(id)arg3 style:(id)arg4;
+ (id)RegisterFont:(void *)arg1 size:(unsigned long long)arg2;
+ (id)RegisterFont:(id)arg1 family:(id)arg2 style:(id)arg3;
+ (id)RegisterFont:(id)arg1;
@property(copy, nonatomic) NSString *fontStyle; // @synthesize fontStyle;
@property(copy, nonatomic) NSString *fontFamily; // @synthesize fontFamily;
- (void)dealloc;

@end

