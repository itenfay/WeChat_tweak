//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

typedef void (^CDUnknownBlockType)(void);

@interface LiteAppJsApiNavigateToMiniProgramForFinderProductShare
{
    CDUnknownBlockType _customShareBtnActionBlock;
}

@property(copy, nonatomic) CDUnknownBlockType customShareBtnActionBlock; // @synthesize customShareBtnActionBlock=_customShareBtnActionBlock;
- (CDUnknownBlockType)getShareAction;
- (void)superInvokeJsApi:(id)arg1 param:(id)arg2 isFromView:(_Bool)arg3;
- (void)invokeJsApi:(id)arg1 param:(id)arg2 isFromView:(_Bool)arg3;
- (id)init;

@end
