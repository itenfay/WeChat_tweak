//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface FBSDKGraphRequest : NSObject
{
    NSString *HTTPMethod;
    NSDictionary *_parameters;
    NSString *_tokenString;
    NSString *_graphPath;
    NSString *_version;
    unsigned long long _flags;
}

+ (id)preprocessParams:(id)arg1;
+ (id)serializeURL:(id)arg1 params:(id)arg2 httpMethod:(id)arg3 forBatch:(_Bool)arg4;
+ (id)serializeURL:(id)arg1 params:(id)arg2 httpMethod:(id)arg3;
+ (id)serializeURL:(id)arg1 params:(id)arg2;
+ (_Bool)isAttachment:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long flags; // @synthesize flags=_flags;
@property(readonly, copy, nonatomic) NSString *version; // @synthesize version=_version;
@property(readonly, copy, nonatomic) NSString *graphPath; // @synthesize graphPath=_graphPath;
@property(readonly, copy, nonatomic) NSString *tokenString; // @synthesize tokenString=_tokenString;
@property(copy, nonatomic) NSDictionary *parameters; // @synthesize parameters=_parameters;
@property(copy, nonatomic) NSString *HTTPMethod; // @synthesize HTTPMethod;
- (id)description;
- (id)startWithCompletionHandler:(CDUnknownBlockType)arg1;
- (_Bool)hasAttachments;
- (void)setGraphErrorRecoveryDisabled:(_Bool)arg1;
- (_Bool)isGraphErrorRecoveryDisabled;
- (id)initWithGraphPath:(id)arg1 parameters:(id)arg2 tokenString:(id)arg3 version:(id)arg4 HTTPMethod:(id)arg5;
- (id)initWithGraphPath:(id)arg1 parameters:(id)arg2 tokenString:(id)arg3 HTTPMethod:(id)arg4 flags:(unsigned long long)arg5;
- (id)initWithGraphPath:(id)arg1 parameters:(id)arg2 flags:(unsigned long long)arg3;
- (id)initWithGraphPath:(id)arg1 parameters:(id)arg2 HTTPMethod:(id)arg3;
- (id)initWithGraphPath:(id)arg1 parameters:(id)arg2;
- (id)initWithGraphPath:(id)arg1 HTTPMethod:(id)arg2;
- (id)initWithGraphPath:(id)arg1;

@end

