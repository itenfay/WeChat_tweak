//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface WCFinderFeedSearchParams : NSObject
{
    int _commentScene;
    int _interactionScene;
    NSString *_searchSessionID;
    NSString *_requestID;
    NSArray *_tagTexts;
    NSString *_queryText;
    unsigned long long _searchScene;
}

- (void).cxx_destruct;
@property(nonatomic) int interactionScene; // @synthesize interactionScene=_interactionScene;
@property(nonatomic) int commentScene; // @synthesize commentScene=_commentScene;
@property(nonatomic) unsigned long long searchScene; // @synthesize searchScene=_searchScene;
@property(retain, nonatomic) NSString *queryText; // @synthesize queryText=_queryText;
@property(retain, nonatomic) NSArray *tagTexts; // @synthesize tagTexts=_tagTexts;
@property(retain, nonatomic) NSString *requestID; // @synthesize requestID=_requestID;
@property(retain, nonatomic) NSString *searchSessionID; // @synthesize searchSessionID=_searchSessionID;

@end

