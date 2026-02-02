//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface POPAnimatableProperty : NSObject
{
}

+ (id)propertyWithName:(id)arg1;
+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (void)initialize;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;

// Remaining properties
@property(readonly, copy, nonatomic) NSString *name; // @dynamic name;
@property(readonly, copy, nonatomic) CDUnknownBlockType readBlock; // @dynamic readBlock;
@property(readonly, nonatomic) double threshold; // @dynamic threshold;
@property(readonly, copy, nonatomic) CDUnknownBlockType writeBlock; // @dynamic writeBlock;

@end

