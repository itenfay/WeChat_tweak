//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class SubscribeMsgItem;

@interface SubscribeMsgItemWrap
{
    _Bool _isHandling;
    SubscribeMsgItem *_msgItem;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isHandling; // @synthesize isHandling=_isHandling;
@property(retain, nonatomic) SubscribeMsgItem *msgItem; // @synthesize msgItem=_msgItem;

@end

