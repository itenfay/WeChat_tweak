//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@protocol MMPageSheetProvider;

@interface WCCoinInterceptLogic
{
    id <MMPageSheetProvider> _pageSheetProvider;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <MMPageSheetProvider> pageSheetProvider; // @synthesize pageSheetProvider=_pageSheetProvider;
- (void)handleJumpInfo:(id)arg1 didClickBlock:(CDUnknownBlockType)arg2;
- (void)handleInterceptWin:(id)arg1 didClickBlock:(CDUnknownBlockType)arg2;
- (_Bool)shouldHandleIntercept:(id)arg1;

@end

