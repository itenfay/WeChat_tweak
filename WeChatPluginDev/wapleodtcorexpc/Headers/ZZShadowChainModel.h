//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class ZZShadowModel;

@interface ZZShadowChainModel : NSObject
{
    ZZShadowModel *_object;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) ZZShadowModel *object; // @synthesize object=_object;
- (CDUnknownBlockType)opacity;
- (CDUnknownBlockType)radius;
- (CDUnknownBlockType)color;
- (CDUnknownBlockType)offset;

@end

