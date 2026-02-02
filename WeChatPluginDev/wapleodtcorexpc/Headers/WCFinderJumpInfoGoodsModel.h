//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class WCFinderFeedContentVM;

@interface WCFinderJumpInfoGoodsModel
{
    WCFinderFeedContentVM *_contentVM;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderFeedContentVM *contentVM; // @synthesize contentVM=_contentVM;
- (void)realJumpToMiniApp:(id)arg1 fromVC:(id)arg2 params:(id)arg3 productInfo:(id)arg4 widgetParameters:(id)arg5;
- (void)jumpToMiniApp:(id)arg1 fromVC:(id)arg2 params:(id)arg3;
- (id)initWithContentVM:(id)arg1;

@end

