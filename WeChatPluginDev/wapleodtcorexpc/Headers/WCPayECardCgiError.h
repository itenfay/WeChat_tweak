//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class PopItem;

@interface WCPayECardCgiError
{
    PopItem *_popItem;
}

- (void).cxx_destruct;
@property(retain, nonatomic) PopItem *popItem; // @synthesize popItem=_popItem;
- (id)description;
- (id)initWithErrorCode:(unsigned int)arg1 errorMsg:(id)arg2 popItem:(id)arg3;

@end

