//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface WCFinderClickEventProxy : NSObject
{
    CDUnknownBlockType _block;
}

+ (id)proxyWithBlock:(CDUnknownBlockType)arg1;
- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType block; // @synthesize block=_block;
- (void)onClick;
- (void)addClickActionToButton:(id)arg1;
- (void)addTapGestureToView:(id)arg1;

@end

