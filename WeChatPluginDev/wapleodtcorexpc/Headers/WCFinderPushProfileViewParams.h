//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface WCFinderPushProfileViewParams : NSObject
{
    int _reportCommentScene;
    unsigned int _enterType;
    int _selectedTab;
    NSString *_lastSeenTid;
    NSString *_redPacketLinkUrl;
    NSString *_redPacketCoverId;
    long long _redPacketJumpFrom;
    NSDictionary *_businessByPass;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSDictionary *businessByPass; // @synthesize businessByPass=_businessByPass;
@property(nonatomic) int selectedTab; // @synthesize selectedTab=_selectedTab;
@property(nonatomic) long long redPacketJumpFrom; // @synthesize redPacketJumpFrom=_redPacketJumpFrom;
@property(retain, nonatomic) NSString *redPacketCoverId; // @synthesize redPacketCoverId=_redPacketCoverId;
@property(retain, nonatomic) NSString *redPacketLinkUrl; // @synthesize redPacketLinkUrl=_redPacketLinkUrl;
@property(nonatomic) unsigned int enterType; // @synthesize enterType=_enterType;
@property(nonatomic) int reportCommentScene; // @synthesize reportCommentScene=_reportCommentScene;
@property(copy, nonatomic) NSString *lastSeenTid; // @synthesize lastSeenTid=_lastSeenTid;
- (id)init;

@end

