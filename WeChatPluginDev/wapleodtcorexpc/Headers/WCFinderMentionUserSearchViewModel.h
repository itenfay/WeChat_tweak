//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class FTSContactSearchUtilLogic, NSArray, NSString, WCFinderMentionFriendContactSearchTask, WCFinderMentionUserSection;

@interface WCFinderMentionUserSearchViewModel : NSObject
{
    _Bool _isLoading;
    _Bool _error;
    NSString *_lastKeyword;
    WCFinderMentionUserSection *_followSection;
    WCFinderMentionUserSection *_friendSeciton;
    WCFinderMentionUserSection *_moreSection;
    NSArray *_sections;
    NSString *_requestId;
    FTSContactSearchUtilLogic *_contactSearchLogic;
    WCFinderMentionFriendContactSearchTask *_friendSeachTask;
    unsigned long long _searchSequence;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long searchSequence; // @synthesize searchSequence=_searchSequence;
@property(retain, nonatomic) WCFinderMentionFriendContactSearchTask *friendSeachTask; // @synthesize friendSeachTask=_friendSeachTask;
@property(retain, nonatomic) FTSContactSearchUtilLogic *contactSearchLogic; // @synthesize contactSearchLogic=_contactSearchLogic;
@property(nonatomic) _Bool error; // @synthesize error=_error;
@property(nonatomic) _Bool isLoading; // @synthesize isLoading=_isLoading;
@property(retain, nonatomic) NSString *requestId; // @synthesize requestId=_requestId;
@property(retain, nonatomic) NSArray *sections; // @synthesize sections=_sections;
@property(retain, nonatomic) WCFinderMentionUserSection *moreSection; // @synthesize moreSection=_moreSection;
@property(retain, nonatomic) WCFinderMentionUserSection *friendSeciton; // @synthesize friendSeciton=_friendSeciton;
@property(retain, nonatomic) WCFinderMentionUserSection *followSection; // @synthesize followSection=_followSection;
@property(retain, nonatomic) NSString *lastKeyword; // @synthesize lastKeyword=_lastKeyword;
- (void)onRequestMore:(id)arg1 complete:(CDUnknownBlockType)arg2;
- (void)_doSearch:(id)arg1 firstPage:(_Bool)arg2 complete:(CDUnknownBlockType)arg3;
- (void)_searchContact:(id)arg1 firstPage:(_Bool)arg2 complete:(CDUnknownBlockType)arg3;
- (void)_search:(id)arg1 seq:(unsigned long long)arg2 withFriendContactComplete:(CDUnknownBlockType)arg3;
- (void)_search:(id)arg1 seq:(unsigned long long)arg2 withoutFriendContactComplete:(CDUnknownBlockType)arg3;
- (void)search:(id)arg1 complete:(CDUnknownBlockType)arg2;
- (void)reset;
- (id)init;

@end

