//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSNumber, NSString;

@interface NetworkInfo : NSObject
{
    NSString *_type;
    NSNumber *_isFreeSimCard;
    NSNumber *_allowedMobileNet;
}

+ (id)nullableFromList:(id)arg1;
+ (id)fromList:(id)arg1;
+ (id)makeWithType:(id)arg1 isFreeSimCard:(id)arg2 allowedMobileNet:(id)arg3;
- (void).cxx_destruct;
@property(retain, nonatomic) NSNumber *allowedMobileNet; // @synthesize allowedMobileNet=_allowedMobileNet;
@property(retain, nonatomic) NSNumber *isFreeSimCard; // @synthesize isFreeSimCard=_isFreeSimCard;
@property(copy, nonatomic) NSString *type; // @synthesize type=_type;
- (id)toList;

@end

