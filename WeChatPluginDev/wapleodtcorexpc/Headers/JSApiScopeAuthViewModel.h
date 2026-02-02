//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class JSApiScopeAuthorizeInfo, JSApiScopeAuthorizePageSheet;

@interface JSApiScopeAuthViewModel
{
    CDUnknownBlockType _scrollToAvatarAction;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType scrollToAvatarAction; // @synthesize scrollToAvatarAction=_scrollToAvatarAction;

// Remaining properties
@property(retain, nonatomic) JSApiScopeAuthorizeInfo *infoModel; // @dynamic infoModel;
@property(nonatomic) __weak JSApiScopeAuthorizePageSheet *pageSheet; // @dynamic pageSheet;

@end

