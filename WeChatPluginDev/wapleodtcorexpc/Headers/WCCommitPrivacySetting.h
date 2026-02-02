//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSArray, NSString;

@interface WCCommitPrivacySetting
{
    _Bool _isDynamicTagEnabled;
    long long _privacy;
    NSArray *_selectContacts;
    NSArray *_selectTags;
    NSArray *_recentSelectedChatroom;
}

+ (void)initialize;
+ (void)PBArrayAdd_isDynamicTagEnabled;
+ (void)PBArrayAdd_recentSelectedChatroom;
+ (void)PBArrayAdd_selectTags;
+ (void)PBArrayAdd_selectContacts;
+ (void)PBArrayAdd_privacy;
- (void).cxx_destruct;
@property(nonatomic) _Bool isDynamicTagEnabled; // @synthesize isDynamicTagEnabled=_isDynamicTagEnabled;
@property(retain, nonatomic) NSArray *recentSelectedChatroom; // @synthesize recentSelectedChatroom=_recentSelectedChatroom;
@property(retain, nonatomic) NSArray *selectTags; // @synthesize selectTags=_selectTags;
@property(retain, nonatomic) NSArray *selectContacts; // @synthesize selectContacts=_selectContacts;
@property(nonatomic) long long privacy; // @synthesize privacy=_privacy;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

