//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSDictionary;

@interface WAJSEventHandler_shareAppMessageToSpecificContactDirectly
{
    NSDictionary *_dic;
    _Bool _forNativeWeApp;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool forNativeWeApp; // @synthesize forNativeWeApp=_forNativeWeApp;
- (void)onSuccess:(id)arg1;
- (void)shareWithParams:(id)arg1 username:(id)arg2;
- (void)handleShareTransID:(id)arg1;
- (void)onCgiResponse:(id)arg1 forEvent:(unsigned int)arg2;
- (void)transferOpenId:(id)arg1 appId:(id)arg2;
- (void)doShareLogicWith:(id)arg1 forNativeWeApp:(_Bool)arg2;
- (void)handleJSEvent:(id)arg1;

@end

