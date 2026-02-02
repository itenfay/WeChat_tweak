//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface KeyboardDismissProxy : NSObject
{
    CDUnknownBlockType _block;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType block; // @synthesize block=_block;
- (void)checkAndHideKeyboard;
- (id)initWithExcuteBlock:(CDUnknownBlockType)arg1;

@end

