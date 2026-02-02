//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString;

@interface SolitaireSessionHandler : NSObject
{
    NSString *_chatName;
    NSMutableDictionary *_dicActiveSolitaire;
    NSMutableDictionary *_dicSolitaireForMatch;
}

+ (void)initialize;
+ (void)PBArrayAdd_dicSolitaireForMatch;
+ (void)PBArrayAdd_dicActiveSolitaire;
+ (void)PBArrayAdd_chatName;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *dicSolitaireForMatch; // @synthesize dicSolitaireForMatch=_dicSolitaireForMatch;
@property(retain, nonatomic) NSMutableDictionary *dicActiveSolitaire; // @synthesize dicActiveSolitaire=_dicActiveSolitaire;
@property(retain, nonatomic) NSString *chatName; // @synthesize chatName=_chatName;
- (void)notifyDeactiveSolitaire:(id)arg1;
- (void)notifyActiveSolitaire:(id)arg1;
- (void)tryReportActive:(id)arg1 InfoObj:(id)arg2;
- (_Bool)matchSolitaireWithInfoObj:(id)arg1;
- (_Bool)checkAndDropSolitaire;
- (_Bool)dropForMatchSolitaire;
- (_Bool)dropActiveSolitaire;
- (id)getSolitaireWithMsgWrap:(id)arg1;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

