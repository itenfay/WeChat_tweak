//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface EcsJumpMiniAppInfo
{
    unsigned int _scene;
    unsigned int _versionType;
    NSString *_appId;
    NSString *_appUsername;
    NSString *_path;
    NSString *_sceneNote;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int versionType; // @synthesize versionType=_versionType;
@property(retain, nonatomic) NSString *sceneNote; // @synthesize sceneNote=_sceneNote;
@property(nonatomic) unsigned int scene; // @synthesize scene=_scene;
@property(retain, nonatomic) NSString *path; // @synthesize path=_path;
@property(retain, nonatomic) NSString *appUsername; // @synthesize appUsername=_appUsername;
@property(retain, nonatomic) NSString *appId; // @synthesize appId=_appId;
- (id)toXML;
- (_Bool)fromXML:(struct XmlReaderNode_t *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

