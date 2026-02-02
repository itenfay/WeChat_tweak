//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface ReportObj13980 : NSObject
{
    int _resultCode;
    unsigned int _costTime;
    NSString *_scene;
    NSString *_url;
    NSString *_pkgId;
    NSString *_pkgVersion;
    unsigned long long _beginTimeTemp;
    NSDictionary *_extInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSDictionary *extInfo; // @synthesize extInfo=_extInfo;
@property(nonatomic) unsigned int costTime; // @synthesize costTime=_costTime;
@property(nonatomic) unsigned long long beginTimeTemp; // @synthesize beginTimeTemp=_beginTimeTemp;
@property(nonatomic) int resultCode; // @synthesize resultCode=_resultCode;
@property(retain, nonatomic) NSString *pkgVersion; // @synthesize pkgVersion=_pkgVersion;
@property(retain, nonatomic) NSString *pkgId; // @synthesize pkgId=_pkgId;
@property(retain, nonatomic) NSString *url; // @synthesize url=_url;
@property(retain, nonatomic) NSString *scene; // @synthesize scene=_scene;
- (id)toLogExt;
- (id)init;

@end

