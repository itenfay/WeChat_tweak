//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCFinderJumpNativeInfoVideoParams : NSObject
{
    _Bool _forbidGetRelatedList;
    NSString *_finderUsername;
    NSString *_objectId;
    NSString *_objectNonceId;
    unsigned long long _getRelatedListScene;
    NSString *_jumpInfoBypassInfo;
}

+ (id)modelCustomPropertyMapperForConfigTag:(id)arg1;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *jumpInfoBypassInfo; // @synthesize jumpInfoBypassInfo=_jumpInfoBypassInfo;
@property(nonatomic) unsigned long long getRelatedListScene; // @synthesize getRelatedListScene=_getRelatedListScene;
@property(nonatomic) _Bool forbidGetRelatedList; // @synthesize forbidGetRelatedList=_forbidGetRelatedList;
@property(retain, nonatomic) NSString *objectNonceId; // @synthesize objectNonceId=_objectNonceId;
@property(retain, nonatomic) NSString *objectId; // @synthesize objectId=_objectId;
@property(retain, nonatomic) NSString *finderUsername; // @synthesize finderUsername=_finderUsername;

@end

