//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WAWxMaterialOpenInfo : NSObject
{
    unsigned int _materialScene;
    NSString *_appId;
    NSString *_enterPath;
    unsigned long long _debugType;
    NSString *_fileExt;
    NSString *_materialPath;
    NSString *_materialName;
    unsigned long long _materialSize;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int materialScene; // @synthesize materialScene=_materialScene;
@property(nonatomic) unsigned long long materialSize; // @synthesize materialSize=_materialSize;
@property(retain, nonatomic) NSString *materialName; // @synthesize materialName=_materialName;
@property(retain, nonatomic) NSString *materialPath; // @synthesize materialPath=_materialPath;
@property(retain, nonatomic) NSString *fileExt; // @synthesize fileExt=_fileExt;
@property(nonatomic) unsigned long long debugType; // @synthesize debugType=_debugType;
@property(retain, nonatomic) NSString *enterPath; // @synthesize enterPath=_enterPath;
@property(retain, nonatomic) NSString *appId; // @synthesize appId=_appId;

@end

