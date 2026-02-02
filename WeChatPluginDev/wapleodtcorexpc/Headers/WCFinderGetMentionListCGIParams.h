//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSData, NSString;

@interface WCFinderGetMentionListCGIParams : NSObject
{
    long long _mentionType;
    unsigned long long _scene;
    NSString *_finderUsername;
    NSData *_lastBuffer;
    NSData *_pageBuffer;
    unsigned long long _fetchMode;
    unsigned long long _aggregatedRootMentionID;
}

+ (id)paramsWithMentionType:(long long)arg1 scene:(unsigned long long)arg2 finderUsername:(id)arg3;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long aggregatedRootMentionID; // @synthesize aggregatedRootMentionID=_aggregatedRootMentionID;
@property(nonatomic) unsigned long long fetchMode; // @synthesize fetchMode=_fetchMode;
@property(copy, nonatomic) NSData *pageBuffer; // @synthesize pageBuffer=_pageBuffer;
@property(copy, nonatomic) NSData *lastBuffer; // @synthesize lastBuffer=_lastBuffer;
@property(copy, nonatomic) NSString *finderUsername; // @synthesize finderUsername=_finderUsername;
@property(nonatomic) unsigned long long scene; // @synthesize scene=_scene;
@property(nonatomic) long long mentionType; // @synthesize mentionType=_mentionType;

@end

