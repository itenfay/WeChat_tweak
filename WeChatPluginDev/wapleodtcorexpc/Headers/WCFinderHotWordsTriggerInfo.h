//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSData, NSString;

@interface WCFinderHotWordsTriggerInfo : NSObject
{
    int _jumpDest;
    NSString *_keyword;
    unsigned long long _startTime;
    unsigned long long _endTime;
    long long _jumpScene;
    NSData *_bypassInfo;
}

+ (id)fromPBMsgConfig:(id)arg1;
+ (void)__wcdb_column_constraint_6:(void *)arg1;
+ (id)swift_bypassInfo;
+ (const void *)__wcdb_synthesize_5:(void *)arg1;
+ (const void *)bypassInfo;
+ (id)swift_jumpScene;
+ (const void *)__wcdb_synthesize_4:(void *)arg1;
+ (const void *)jumpScene;
+ (id)swift_jumpDest;
+ (const void *)__wcdb_synthesize_3:(void *)arg1;
+ (const void *)jumpDest;
+ (id)swift_endTime;
+ (const void *)__wcdb_synthesize_2:(void *)arg1;
+ (const void *)endTime;
+ (id)swift_startTime;
+ (const void *)__wcdb_synthesize_1:(void *)arg1;
+ (const void *)startTime;
+ (id)swift_keyword;
+ (const void *)__wcdb_synthesize_0:(void *)arg1;
+ (const void *)keyword;
+ (id)__wcdbtyper;
+ (id)allBridgeProperties;
+ (const void *)allProperties;
+ (const void *)objectRelationalMapping;
- (void).cxx_destruct;
@property(retain, nonatomic) NSData *bypassInfo; // @synthesize bypassInfo=_bypassInfo;
@property(nonatomic) long long jumpScene; // @synthesize jumpScene=_jumpScene;
@property(nonatomic) int jumpDest; // @synthesize jumpDest=_jumpDest;
@property(nonatomic) unsigned long long endTime; // @synthesize endTime=_endTime;
@property(nonatomic) unsigned long long startTime; // @synthesize startTime=_startTime;
@property(retain, nonatomic) NSString *keyword; // @synthesize keyword=_keyword;
- (id)description;

@end

