//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface TextStateNotifyCacheItem : NSObject
{
    unsigned int _doLikeCount;
    unsigned int _referenceCount;
    unsigned int _commentCount;
    NSString *_textStateId;
    unsigned long long _doLikeCountVersion;
}

+ (void)initialize;
+ (void)PBArrayAdd_commentCount;
+ (void)PBArrayAdd_doLikeCountVersion;
+ (void)PBArrayAdd_referenceCount;
+ (void)PBArrayAdd_doLikeCount;
+ (void)PBArrayAdd_textStateId;
- (void).cxx_destruct;
@property(nonatomic) unsigned int commentCount; // @synthesize commentCount=_commentCount;
@property(nonatomic) unsigned int referenceCount; // @synthesize referenceCount=_referenceCount;
@property(nonatomic) unsigned long long doLikeCountVersion; // @synthesize doLikeCountVersion=_doLikeCountVersion;
@property(nonatomic) unsigned int doLikeCount; // @synthesize doLikeCount=_doLikeCount;
@property(retain, nonatomic) NSString *textStateId; // @synthesize textStateId=_textStateId;
- (unsigned int)count;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

