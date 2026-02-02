//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@interface WASubscriptionMessageDataReporter
{
    unsigned long long _scene;
}

@property(nonatomic) unsigned long long scene; // @synthesize scene=_scene;
- (void)reportUserOperationWithViewModel:(id)arg1;
- (void)recordInfoButtonClickedAtIndex:(unsigned long long)arg1 viewModel:(id)arg2;

@end

