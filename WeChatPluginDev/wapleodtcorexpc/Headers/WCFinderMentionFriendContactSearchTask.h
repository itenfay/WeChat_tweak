//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSDictionary, NSMutableArray, NSString, WCFinderBaseCgi;

@interface WCFinderMentionFriendContactSearchTask : NSObject
{
    NSString *_keyword;
    NSMutableArray *_contacts;
    NSDictionary *_dicMatchTips;
    WCFinderBaseCgi *_fetchingCGI;
}

+ (void)fillMatchInfo:(id)arg1 ToContact:(id)arg2;
+ (_Bool)_acceptMatchType:(unsigned long long)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderBaseCgi *fetchingCGI; // @synthesize fetchingCGI=_fetchingCGI;
@property(retain, nonatomic) NSDictionary *dicMatchTips; // @synthesize dicMatchTips=_dicMatchTips;
@property(retain, nonatomic) NSMutableArray *contacts; // @synthesize contacts=_contacts;
@property(retain, nonatomic) NSString *keyword; // @synthesize keyword=_keyword;
- (void)_doSearchContactFinder:(id)arg1 complete:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (void)doFetchTask:(long long)arg1 complete:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (void)asyncFetchContactCount:(long long)arg1 successful:(CDUnknownBlockType)arg2 pendingResult:(id)arg3 failure:(CDUnknownBlockType)arg4;
- (void)asyncFetchContact:(CDUnknownBlockType)arg1 failure:(CDUnknownBlockType)arg2;

@end

