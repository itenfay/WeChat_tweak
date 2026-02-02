//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableSet, NSString;

@interface TipsPathInfo : NSObject
{
    NSString *_nsPathKey;
    NSMutableSet *_setTipsId;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableSet *setTipsId; // @synthesize setTipsId=_setTipsId;
@property(retain, nonatomic) NSString *nsPathKey; // @synthesize nsPathKey=_nsPathKey;

@end

