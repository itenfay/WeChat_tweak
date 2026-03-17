//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

typedef void (^CDUnknownBlockType)(void);

@protocol MMPageSheetProvider;

@interface WCCoinInterceptLogic : NSObject
{
    id <MMPageSheetProvider> _pageSheetProvider;
}

@property(nonatomic) __weak id <MMPageSheetProvider> pageSheetProvider; // @synthesize pageSheetProvider=_pageSheetProvider;
- (void)handleJumpInfo:(id)arg1 didClickBlock:(CDUnknownBlockType)arg2;
- (void)handleInterceptWin:(id)arg1 didClickBlock:(CDUnknownBlockType)arg2;
- (_Bool)shouldHandleIntercept:(id)arg1;

@end
