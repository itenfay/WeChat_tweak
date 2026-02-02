//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@protocol TingEventPluginProtocol;

@interface WebviewJSEventHandlerTingBase
{
    id <TingEventPluginProtocol> _outterTingPlugin;
}

@property(nonatomic) __weak id <TingEventPluginProtocol> outterTingPlugin; // @synthesize outterTingPlugin=_outterTingPlugin;
- (id)tingPlugin;

@end

