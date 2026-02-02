//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface MMEmoticonLiteAppPageContextBase : NSObject
{
    _Bool isPresentModal;
    long long emotionScene;
    unsigned long long enterTimeInMs;
    CDUnknownBlockType openFailCallback;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType openFailCallback; // @synthesize openFailCallback;
@property(nonatomic) unsigned long long enterTimeInMs; // @synthesize enterTimeInMs;
@property(nonatomic) _Bool isPresentModal; // @synthesize isPresentModal;
@property(nonatomic) long long emotionScene; // @synthesize emotionScene;
- (_Bool)allowsInEmoticonLimited;
- (id)pageCreator;
- (_Bool)isValid;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

