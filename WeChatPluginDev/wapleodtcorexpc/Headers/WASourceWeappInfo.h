//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WASourceWeappInfo : NSObject
{
    unsigned int _showSourceView;
    unsigned int _versionType;
    NSString *_appId;
    NSString *_nickname;
    NSString *_iconUrl;
    NSString *_enterPath;
    NSString *_forwardSceneNote;
    unsigned long long _timestamp;
}

+ (id)fromXML:(void *)arg1;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;
@property(nonatomic) unsigned int versionType; // @synthesize versionType=_versionType;
@property(nonatomic) unsigned int showSourceView; // @synthesize showSourceView=_showSourceView;
@property(copy, nonatomic) NSString *forwardSceneNote; // @synthesize forwardSceneNote=_forwardSceneNote;
@property(copy, nonatomic) NSString *enterPath; // @synthesize enterPath=_enterPath;
@property(copy, nonatomic) NSString *iconUrl; // @synthesize iconUrl=_iconUrl;
@property(copy, nonatomic) NSString *nickname; // @synthesize nickname=_nickname;
@property(copy, nonatomic) NSString *appId; // @synthesize appId=_appId;
- (id)toXML;

@end

