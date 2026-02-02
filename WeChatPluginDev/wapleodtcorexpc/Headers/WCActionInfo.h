//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCActionInfo : NSObject
{
    int _scene;
    int _type;
    int _appInstalledActionScene;
    int _appUninstalledActionScene;
    NSString *_mediaTagName;
    NSString *_appID;
    NSString *_url;
    NSString *_wordingKey;
    NSString *_messageExt;
    NSString *_messageAction;
    NSString *_appInstalledWordingKey;
    NSString *_appUninstalledWordingKey;
    NSString *_customAppInstalledWording;
    NSString *_customAppInstalledWording4ZhTw;
    NSString *_customAppInstalledWording4EnUs;
    NSString *_customAppUninstalledWording;
    NSString *_customAppUninstalledWording4ZhTw;
    NSString *_customAppUninstalledWording4EnUs;
}

+ (id)fromXML:(struct XmlReaderNode_t *)arg1;
+ (void)initialize;
+ (void)PBArrayAdd_customAppUninstalledWording4EnUs;
+ (void)PBArrayAdd_customAppUninstalledWording4ZhTw;
+ (void)PBArrayAdd_customAppUninstalledWording;
+ (void)PBArrayAdd_customAppInstalledWording4EnUs;
+ (void)PBArrayAdd_customAppInstalledWording4ZhTw;
+ (void)PBArrayAdd_customAppInstalledWording;
+ (void)PBArrayAdd_appUninstalledWordingKey;
+ (void)PBArrayAdd_appInstalledWordingKey;
+ (void)PBArrayAdd_appUninstalledActionScene;
+ (void)PBArrayAdd_appInstalledActionScene;
+ (void)PBArrayAdd_messageAction;
+ (void)PBArrayAdd_messageExt;
+ (void)PBArrayAdd_wordingKey;
+ (void)PBArrayAdd_url;
+ (void)PBArrayAdd_appID;
+ (void)PBArrayAdd_type;
+ (void)PBArrayAdd_scene;
+ (void)PBArrayAdd_mediaTagName;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *customAppUninstalledWording4EnUs; // @synthesize customAppUninstalledWording4EnUs=_customAppUninstalledWording4EnUs;
@property(retain, nonatomic) NSString *customAppUninstalledWording4ZhTw; // @synthesize customAppUninstalledWording4ZhTw=_customAppUninstalledWording4ZhTw;
@property(retain, nonatomic) NSString *customAppUninstalledWording; // @synthesize customAppUninstalledWording=_customAppUninstalledWording;
@property(retain, nonatomic) NSString *customAppInstalledWording4EnUs; // @synthesize customAppInstalledWording4EnUs=_customAppInstalledWording4EnUs;
@property(retain, nonatomic) NSString *customAppInstalledWording4ZhTw; // @synthesize customAppInstalledWording4ZhTw=_customAppInstalledWording4ZhTw;
@property(retain, nonatomic) NSString *customAppInstalledWording; // @synthesize customAppInstalledWording=_customAppInstalledWording;
@property(retain, nonatomic) NSString *appUninstalledWordingKey; // @synthesize appUninstalledWordingKey=_appUninstalledWordingKey;
@property(retain, nonatomic) NSString *appInstalledWordingKey; // @synthesize appInstalledWordingKey=_appInstalledWordingKey;
@property(nonatomic) int appUninstalledActionScene; // @synthesize appUninstalledActionScene=_appUninstalledActionScene;
@property(nonatomic) int appInstalledActionScene; // @synthesize appInstalledActionScene=_appInstalledActionScene;
@property(retain, nonatomic) NSString *messageAction; // @synthesize messageAction=_messageAction;
@property(retain, nonatomic) NSString *messageExt; // @synthesize messageExt=_messageExt;
@property(retain, nonatomic) NSString *wordingKey; // @synthesize wordingKey=_wordingKey;
@property(retain, nonatomic) NSString *url; // @synthesize url=_url;
@property(retain, nonatomic) NSString *appID; // @synthesize appID=_appID;
@property(nonatomic) int type; // @synthesize type=_type;
@property(nonatomic) int scene; // @synthesize scene=_scene;
@property(retain, nonatomic) NSString *mediaTagName; // @synthesize mediaTagName=_mediaTagName;
- (id)toXML;
- (id)messageExtDict;
- (id)getWordingkey;
- (id)getProperWording;
- (_Bool)isValidForShow;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

