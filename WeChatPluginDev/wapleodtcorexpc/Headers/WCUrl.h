//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCUrl : NSObject
{
    int _encIdx;
    NSString *_url;
    long long _type;
    NSString *_md5;
    unsigned long long _enckey;
    NSString *_encryptKey;
    NSString *_token;
    NSString *_videomd5;
}

+ (id)UrlWithUrl:(id)arg1 type:(long long)arg2;
+ (void)initialize;
+ (void)PBArrayAdd_encryptKey;
+ (void)PBArrayAdd_videomd5;
+ (void)PBArrayAdd_enckey;
+ (void)PBArrayAdd_encIdx;
+ (void)PBArrayAdd_token;
+ (void)PBArrayAdd_md5;
+ (void)PBArrayAdd_type;
+ (void)PBArrayAdd_url;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *videomd5; // @synthesize videomd5=_videomd5;
@property(retain, nonatomic) NSString *token; // @synthesize token=_token;
@property(retain, nonatomic) NSString *encryptKey; // @synthesize encryptKey=_encryptKey;
@property(nonatomic) int encIdx; // @synthesize encIdx=_encIdx;
@property(nonatomic) unsigned long long enckey; // @synthesize enckey=_enckey;
@property(retain, nonatomic) NSString *md5; // @synthesize md5=_md5;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(retain, nonatomic) NSString *url; // @synthesize url=_url;
@property(readonly, copy) NSString *description;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

