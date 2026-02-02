//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class FinderLiveCheerInfo, FinderLiveContact, FinderLiveMicInfo, FinderLiveNoticeBubbleInfo, FinderLiveRealnameLikeBubbleInfo, NSMutableArray;

@interface MMFinderLiveGetLiveMessageRespContext : NSObject
{
    _Bool _isNeverJoinFanclub;
    unsigned int _isHistoryMsg;
    NSMutableArray *_enableExtraSyncCmds;
    NSMutableArray *_notifyExtraSyncCmds;
    NSMutableArray *_disableExtraSyncCmds;
    NSMutableArray *_originalMsgList;
    NSMutableArray *_originalAppMsgList;
    FinderLiveCheerInfo *_cheerInfo;
    FinderLiveMicInfo *_liveMicInfo;
    FinderLiveRealnameLikeBubbleInfo *_realnameLikeBubbleInfo;
    FinderLiveNoticeBubbleInfo *_noticeBubbleInfo;
    FinderLiveContact *_anchorContact;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isNeverJoinFanclub; // @synthesize isNeverJoinFanclub=_isNeverJoinFanclub;
@property(retain, nonatomic) FinderLiveContact *anchorContact; // @synthesize anchorContact=_anchorContact;
@property(retain, nonatomic) FinderLiveNoticeBubbleInfo *noticeBubbleInfo; // @synthesize noticeBubbleInfo=_noticeBubbleInfo;
@property(retain, nonatomic) FinderLiveRealnameLikeBubbleInfo *realnameLikeBubbleInfo; // @synthesize realnameLikeBubbleInfo=_realnameLikeBubbleInfo;
@property(retain, nonatomic) FinderLiveMicInfo *liveMicInfo; // @synthesize liveMicInfo=_liveMicInfo;
@property(retain, nonatomic) FinderLiveCheerInfo *cheerInfo; // @synthesize cheerInfo=_cheerInfo;
@property(retain, nonatomic) NSMutableArray *originalAppMsgList; // @synthesize originalAppMsgList=_originalAppMsgList;
@property(retain, nonatomic) NSMutableArray *originalMsgList; // @synthesize originalMsgList=_originalMsgList;
@property(retain, nonatomic) NSMutableArray *disableExtraSyncCmds; // @synthesize disableExtraSyncCmds=_disableExtraSyncCmds;
@property(retain, nonatomic) NSMutableArray *notifyExtraSyncCmds; // @synthesize notifyExtraSyncCmds=_notifyExtraSyncCmds;
@property(retain, nonatomic) NSMutableArray *enableExtraSyncCmds; // @synthesize enableExtraSyncCmds=_enableExtraSyncCmds;
@property(nonatomic) unsigned int isHistoryMsg; // @synthesize isHistoryMsg=_isHistoryMsg;

@end

