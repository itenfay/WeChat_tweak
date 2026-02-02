//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface WXTalkieComponent : NSObject
{
    struct WXTalkieEngineAdapter *_engineAdapter;
    struct ILiveConEngine *_wxTalkEngine;
}

@property(nonatomic) struct ILiveConEngine *wxTalkEngine; // @synthesize wxTalkEngine=_wxTalkEngine;
@property(nonatomic) struct WXTalkieEngineAdapter *engineAdapter; // @synthesize engineAdapter=_engineAdapter;
- (void)dealloc;
- (id)init;

@end

