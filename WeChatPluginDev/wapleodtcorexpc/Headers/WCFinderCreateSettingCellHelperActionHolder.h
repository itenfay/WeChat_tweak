//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>
typedef void (^CDUnknownBlockType)(void);

@interface WCFinderCreateSettingCellHelperActionHolder : NSObject
{
    NSObject *_owner;
    CDUnknownBlockType _block;
}

+ (id)instanceWithBlock:(CDUnknownBlockType)arg1;
@property(copy, nonatomic) CDUnknownBlockType block; // @synthesize block=_block;
@property(nonatomic) __weak NSObject *owner; // @synthesize owner=_owner;
- (void)attachToOwner:(id)arg1;
- (void)onAction:(id)arg1;

@end
