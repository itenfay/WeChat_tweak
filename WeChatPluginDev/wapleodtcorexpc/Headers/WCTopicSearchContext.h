//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCTopicSearchContext : NSObject
{
    long long _sourceType;
    long long _sourceScene;
    NSString *_sourceSceneId;
    NSString *_inputQuery;
    unsigned long long _curseLocation;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long curseLocation; // @synthesize curseLocation=_curseLocation;
@property(copy, nonatomic) NSString *inputQuery; // @synthesize inputQuery=_inputQuery;
@property(copy, nonatomic) NSString *sourceSceneId; // @synthesize sourceSceneId=_sourceSceneId;
@property(nonatomic) long long sourceScene; // @synthesize sourceScene=_sourceScene;
@property(nonatomic) long long sourceType; // @synthesize sourceType=_sourceType;

@end

