//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

typedef void (^CDUnknownBlockType)(void);

@interface ContactGetPluginSwitchCgi
{
    CDUnknownBlockType _onGetSwitchBlock;
}

@property(copy, nonatomic) CDUnknownBlockType onGetSwitchBlock; // @synthesize onGetSwitchBlock=_onGetSwitchBlock;
- (void)didFailWithError:(id)arg1 response:(id)arg2;
- (void)didGetResponse:(id)arg1;
- (id)initWithRequest:(id)arg1;

@end
