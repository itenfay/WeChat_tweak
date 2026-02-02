//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface NewLifeGlobalFavoriteTransferInfo : NSObject
{
    unsigned int _commentScene;
    unsigned int _userVersion;
    NSString *_nonceId;
    NSString *_sessionBuffer;
    NSString *_finderUsername;
    NSString *_contextId;
}

+ (id)modelCustomPropertyMapperForConfigTag:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *contextId; // @synthesize contextId=_contextId;
@property(nonatomic) unsigned int userVersion; // @synthesize userVersion=_userVersion;
@property(nonatomic) unsigned int commentScene; // @synthesize commentScene=_commentScene;
@property(retain, nonatomic) NSString *finderUsername; // @synthesize finderUsername=_finderUsername;
@property(retain, nonatomic) NSString *sessionBuffer; // @synthesize sessionBuffer=_sessionBuffer;
@property(retain, nonatomic) NSString *nonceId; // @synthesize nonceId=_nonceId;

@end

