//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray, NSString, WCFinderAuthInfo, WCFinderMention;

@interface WCFinderMentionTitleModel : NSObject
{
    _Bool _shouldShowFinderLogo;
    _Bool _shouldShowFollowBtn;
    WCFinderMention *_mention;
    unsigned long long _aggregatedCount;
    NSArray *_aggregatedContacts;
    unsigned long long _aggregatedContactMaxLine;
    NSString *_title;
    NSString *_suffixTitle;
    WCFinderAuthInfo *_authInfo;
    NSString *_timeString;
    NSArray *_interactionLabels;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSArray *interactionLabels; // @synthesize interactionLabels=_interactionLabels;
@property(nonatomic) _Bool shouldShowFollowBtn; // @synthesize shouldShowFollowBtn=_shouldShowFollowBtn;
@property(copy, nonatomic) NSString *timeString; // @synthesize timeString=_timeString;
@property(nonatomic) _Bool shouldShowFinderLogo; // @synthesize shouldShowFinderLogo=_shouldShowFinderLogo;
@property(retain, nonatomic) WCFinderAuthInfo *authInfo; // @synthesize authInfo=_authInfo;
@property(copy, nonatomic) NSString *suffixTitle; // @synthesize suffixTitle=_suffixTitle;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) unsigned long long aggregatedContactMaxLine; // @synthesize aggregatedContactMaxLine=_aggregatedContactMaxLine;
@property(copy, nonatomic) NSArray *aggregatedContacts; // @synthesize aggregatedContacts=_aggregatedContacts;
@property(nonatomic) unsigned long long aggregatedCount; // @synthesize aggregatedCount=_aggregatedCount;
@property(retain, nonatomic) WCFinderMention *mention; // @synthesize mention=_mention;
- (id)init;

@end

