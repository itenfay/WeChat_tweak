//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSNumber;

@interface TPVideoSizeRet : NSObject
{
    NSNumber *_width;
    NSNumber *_height;
}

+ (id)nullableFromList:(id)arg1;
+ (id)fromList:(id)arg1;
+ (id)makeWithWidth:(id)arg1 height:(id)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) NSNumber *height; // @synthesize height=_height;
@property(retain, nonatomic) NSNumber *width; // @synthesize width=_width;
- (id)toList;

@end

