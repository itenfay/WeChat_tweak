//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface TextStateWeAppBuffer : NSObject
{
    unsigned int _version;
    unsigned int _versionType;
    NSString *_appId;
    NSString *_username;
    NSString *_path;
    NSString *_headImageURL;
    NSDictionary *_extraData;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSDictionary *extraData; // @synthesize extraData=_extraData;
@property(retain, nonatomic) NSString *headImageURL; // @synthesize headImageURL=_headImageURL;
@property(nonatomic) unsigned int versionType; // @synthesize versionType=_versionType;
@property(nonatomic) unsigned int version; // @synthesize version=_version;
@property(retain, nonatomic) NSString *path; // @synthesize path=_path;
@property(retain, nonatomic) NSString *username; // @synthesize username=_username;
@property(retain, nonatomic) NSString *appId; // @synthesize appId=_appId;
- (id)weAppJumpInfo;
- (id)initWithJumpInfo:(id)arg1;

@end

