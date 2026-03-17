//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "IWAWebViewPluginProtocol-Protocol.h"

@protocol ITXLivePlayJSAdapter;

@protocol IWAWebViewPlugin_LivePlayer <IWAWebViewPluginProtocol>
@property(nonatomic) _Bool isInLiveFullScreen;
- (id <ITXLivePlayJSAdapter>)getLivePlayerWithPlayerId:(unsigned int)arg1;
- (void)disableFullScreen;
@end

