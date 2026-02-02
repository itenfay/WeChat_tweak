//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, UIPasteboard;

@interface FBSDKBridgeAPIProtocolNativeV1 : NSObject
{
    _Bool _includeAppIcon;
    NSString *_appScheme;
    unsigned long long _dataLengthThreshold;
    UIPasteboard *_pasteboard;
}

+ (void)clearData:(id)arg1 fromPasteboardOnApplicationDidBecomeActive:(id)arg2;
- (void).cxx_destruct;
@property(readonly, nonatomic) UIPasteboard *pasteboard; // @synthesize pasteboard=_pasteboard;
@property(readonly, nonatomic, getter=shouldIncludeAppIcon) _Bool includeAppIcon; // @synthesize includeAppIcon=_includeAppIcon;
@property(readonly, nonatomic) unsigned long long dataLengthThreshold; // @synthesize dataLengthThreshold=_dataLengthThreshold;
@property(readonly, copy, nonatomic) NSString *appScheme; // @synthesize appScheme=_appScheme;
- (id)_JSONStringForObject:(id)arg1 enablePasteboard:(_Bool)arg2 error:(id *)arg3;
- (id)_errorWithDictionary:(id)arg1;
- (id)_bridgeParametersWithActionID:(id)arg1 error:(id *)arg2;
- (id)_appIcon;
- (id)responseParametersForActionID:(id)arg1 queryParameters:(id)arg2 cancelled:(_Bool *)arg3 error:(id *)arg4;
- (id)requestURLWithActionID:(id)arg1 scheme:(id)arg2 methodName:(id)arg3 methodVersion:(id)arg4 parameters:(id)arg5 error:(id *)arg6;
- (id)initWithAppScheme:(id)arg1 pasteboard:(id)arg2 dataLengthThreshold:(unsigned long long)arg3 includeAppIcon:(_Bool)arg4;
- (id)initWithAppScheme:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

