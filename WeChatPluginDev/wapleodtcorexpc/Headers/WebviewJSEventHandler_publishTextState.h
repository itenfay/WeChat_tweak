//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSDictionary, NSString, TextStatePublishConfiguration, TextStatePublishSourceInfo;

@interface WebviewJSEventHandler_publishTextState
{
    TextStatePublishSourceInfo *_sourceInfo;
    TextStatePublishConfiguration *_configuration;
    NSString *_imageURLString;
    NSDictionary *_attachInfo;
}

+ (unsigned int)dataTypeForString:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSDictionary *attachInfo; // @synthesize attachInfo=_attachInfo;
@property(retain, nonatomic) NSString *imageURLString; // @synthesize imageURLString=_imageURLString;
@property(retain, nonatomic) TextStatePublishConfiguration *configuration; // @synthesize configuration=_configuration;
@property(retain, nonatomic) TextStatePublishSourceInfo *sourceInfo; // @synthesize sourceInfo=_sourceInfo;
- (void)onTextStatePublishCancelled;
- (void)onTextStatePublishedWithIconId:(id)arg1 iconDescription:(id)arg2;
- (void)ImageDidFail:(id)arg1;
- (void)ImageDidLoad:(id)arg1 Url:(id)arg2;
- (id)dataItemsFromJSON:(id)arg1;
- (id)jumpLiteAppInfoFromDictionary:(id)arg1;
- (void)jumpToTextStatePublishViewController;
- (void)jumpToPublishStatusVC:(id)arg1 event:(id)arg2 params:(id)arg3 resultDict:(id)arg4;
- (_Bool)checkPublishSourceInfo:(id)arg1 event:(id)arg2 resultDict:(id)arg3;
- (void)handleJSEvent:(id)arg1 HandlerFacade:(id)arg2 ExtraData:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

