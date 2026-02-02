//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class WCPayLqpJumpInfo, WCPayLqpWordingItem;

@interface WCPayLqpEntranceInfo : NSObject
{
    _Bool _is_exposure;
    WCPayLqpJumpInfo *_jump_info;
    WCPayLqpWordingItem *_wording_item;
}

- (void).cxx_destruct;
@property(retain) WCPayLqpWordingItem *wording_item; // @synthesize wording_item=_wording_item;
@property(retain) WCPayLqpJumpInfo *jump_info; // @synthesize jump_info=_jump_info;
@property _Bool is_exposure; // @synthesize is_exposure=_is_exposure;

@end

