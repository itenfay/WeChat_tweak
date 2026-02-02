//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface GameLiteAppParam : NSObject
{
    _Bool _transParentLiteApp;
    NSString *_appId;
    NSString *_path;
    NSString *_queryStr;
    NSString *_pkgId;
}

+ (id)liteAppParaWithAppid:(id)arg1 path:(id)arg2 queryStr:(id)arg3 pkgId:(id)arg4;
+ (id)liteAppParamFromDict:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) _Bool transParentLiteApp; // @synthesize transParentLiteApp=_transParentLiteApp;
@property(retain, nonatomic) NSString *pkgId; // @synthesize pkgId=_pkgId;
@property(retain, nonatomic) NSString *queryStr; // @synthesize queryStr=_queryStr;
@property(retain, nonatomic) NSString *path; // @synthesize path=_path;
@property(retain, nonatomic) NSString *appId; // @synthesize appId=_appId;
- (id)description;

@end

