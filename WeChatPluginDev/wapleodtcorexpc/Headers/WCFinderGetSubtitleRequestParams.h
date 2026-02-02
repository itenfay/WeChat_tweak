//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSData, NSMutableArray, NSString;

@interface WCFinderGetSubtitleRequestParams : NSObject
{
    int _commentScene;
    NSString *_tid;
    unsigned long long _subtitleId;
    unsigned long long _startTime;
    NSData *_lastBuffer;
    NSMutableArray *_languageReq;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *languageReq; // @synthesize languageReq=_languageReq;
@property(retain, nonatomic) NSData *lastBuffer; // @synthesize lastBuffer=_lastBuffer;
@property(nonatomic) unsigned long long startTime; // @synthesize startTime=_startTime;
@property(nonatomic) int commentScene; // @synthesize commentScene=_commentScene;
@property(nonatomic) unsigned long long subtitleId; // @synthesize subtitleId=_subtitleId;
@property(copy, nonatomic) NSString *tid; // @synthesize tid=_tid;
- (id)description;

@end

