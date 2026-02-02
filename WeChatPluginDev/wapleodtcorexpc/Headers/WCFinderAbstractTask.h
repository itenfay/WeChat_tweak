//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>
typedef void (^CDUnknownBlockType)(void);

@interface WCFinderAbstractTask : NSObject
{
    _Bool _cancelAction;
    CDUnknownBlockType _action;
}

@property(copy, nonatomic) CDUnknownBlockType action; // @synthesize action=_action;
@property(nonatomic, getter=isCancelAction) _Bool cancelAction; // @synthesize cancelAction=_cancelAction;
- (void)asyncPreformAction:(CDUnknownBlockType)arg1 fail:(CDUnknownBlockType)arg2;
- (void)preformAction:(CDUnknownBlockType)arg1 fail:(CDUnknownBlockType)arg2;
- (id)initWithAction:(CDUnknownBlockType)arg1;

@end
