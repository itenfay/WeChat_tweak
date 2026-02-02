//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class ZZBorderModel;

@interface ZZBorderChainModel : NSObject
{
    ZZBorderModel *_object;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) ZZBorderModel *object; // @synthesize object=_object;
- (CDUnknownBlockType)radius;
- (CDUnknownBlockType)color;
- (CDUnknownBlockType)width;

@end

