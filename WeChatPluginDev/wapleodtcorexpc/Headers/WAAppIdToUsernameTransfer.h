//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class WAContactGetter;

@interface WAAppIdToUsernameTransfer
{
    WAContactGetter *_contactGetter;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WAContactGetter *contactGetter; // @synthesize contactGetter=_contactGetter;
- (void)transferAppidToUsernameWithAppId:(id)arg1 handler:(CDUnknownBlockType)arg2;

@end

