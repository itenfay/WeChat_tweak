//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>
typedef void (^CDUnknownBlockType)(void);

@class ZZBorderModel;

@interface ZZBorderChainModel : NSObject
{
    ZZBorderModel *_object;
}

@property(readonly, nonatomic) ZZBorderModel *object; // @synthesize object=_object;
- (CDUnknownBlockType)radius;
- (CDUnknownBlockType)color;
- (CDUnknownBlockType)width;

@end
