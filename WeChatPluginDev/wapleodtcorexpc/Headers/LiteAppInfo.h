//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface LiteAppInfo : NSObject
{
    NSString *_appId;
    NSString *_groupId;
    NSString *_url;
    NSString *_md5;
    NSString *_signatureKey;
    NSString *_path;
    NSString *_type;
    NSString *_patchId;
    unsigned long long _updateTime;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long updateTime; // @synthesize updateTime=_updateTime;
@property(retain, nonatomic) NSString *patchId; // @synthesize patchId=_patchId;
@property(retain, nonatomic) NSString *type; // @synthesize type=_type;
@property(retain, nonatomic) NSString *path; // @synthesize path=_path;
@property(retain, nonatomic) NSString *signatureKey; // @synthesize signatureKey=_signatureKey;
@property(retain, nonatomic) NSString *md5; // @synthesize md5=_md5;
@property(retain, nonatomic) NSString *url; // @synthesize url=_url;
@property(retain, nonatomic) NSString *groupId; // @synthesize groupId=_groupId;
@property(retain, nonatomic) NSString *appId; // @synthesize appId=_appId;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

