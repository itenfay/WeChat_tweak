//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class CEmoticonWrap, NSString;

@interface EmoticonRemoteRecentUse : NSObject
{
    unsigned int _lastUsedTime;
    NSString *_md5;
    NSString *_query;
    CEmoticonWrap *_refEmoticon;
}

+ (void)initialize;
+ (void)PBArrayAdd_refEmoticon;
+ (void)PBArrayAdd_lastUsedTime;
+ (void)PBArrayAdd_query;
+ (void)PBArrayAdd_md5;
- (void).cxx_destruct;
@property(retain, nonatomic) CEmoticonWrap *refEmoticon; // @synthesize refEmoticon=_refEmoticon;
@property(nonatomic) unsigned int lastUsedTime; // @synthesize lastUsedTime=_lastUsedTime;
@property(retain, nonatomic) NSString *query; // @synthesize query=_query;
@property(retain, nonatomic) NSString *md5; // @synthesize md5=_md5;
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

