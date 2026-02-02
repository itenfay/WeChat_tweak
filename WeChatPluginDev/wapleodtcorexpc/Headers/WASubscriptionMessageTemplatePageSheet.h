//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class WASMTPageSheetViewModel;

@interface WASubscriptionMessageTemplatePageSheet
{
    long long _backButtonType;
    WASMTPageSheetViewModel *_smtViewModel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WASMTPageSheetViewModel *smtViewModel; // @synthesize smtViewModel=_smtViewModel;
@property(nonatomic) long long backButtonType; // @synthesize backButtonType=_backButtonType;
- (id)subViewModel;
- (id)subviewClassList;
- (id)initWithTitle:(id)arg1 messageList:(id)arg2;

@end

