//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class GameCenterMsgSender, GameJumpInfo, NSString;

@interface GameCenterMsgV2Node : NSObject
{
    _Bool _dontShowInMsgCenter;
    _Bool _notInMsgCenter;
    unsigned int _mergeCount;
    unsigned int _quickResponseFlag;
    GameCenterMsgSender *_msgSender;
    GameJumpInfo *_jumpInfo;
    GameJumpInfo *_mergeJumpInfo;
    GameJumpInfo *_commentJumpInfo;
    NSString *_primaryContent;
    NSString *_minorContent;
    NSString *_pictureUrl;
    NSString *_sourceName;
    NSString *_mergeId;
    NSString *_actionDesc;
    NSString *_actionText;
    NSString *_quoteText;
    NSString *_quickResponseId;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int quickResponseFlag; // @synthesize quickResponseFlag=_quickResponseFlag;
@property(retain, nonatomic) NSString *quickResponseId; // @synthesize quickResponseId=_quickResponseId;
@property(retain, nonatomic) NSString *quoteText; // @synthesize quoteText=_quoteText;
@property(retain, nonatomic) NSString *actionText; // @synthesize actionText=_actionText;
@property(retain, nonatomic) NSString *actionDesc; // @synthesize actionDesc=_actionDesc;
@property(nonatomic) _Bool notInMsgCenter; // @synthesize notInMsgCenter=_notInMsgCenter;
@property(nonatomic) unsigned int mergeCount; // @synthesize mergeCount=_mergeCount;
@property(retain, nonatomic) NSString *mergeId; // @synthesize mergeId=_mergeId;
@property(retain, nonatomic) NSString *sourceName; // @synthesize sourceName=_sourceName;
@property(retain, nonatomic) NSString *pictureUrl; // @synthesize pictureUrl=_pictureUrl;
@property(retain, nonatomic) NSString *minorContent; // @synthesize minorContent=_minorContent;
@property(retain, nonatomic) NSString *primaryContent; // @synthesize primaryContent=_primaryContent;
@property(retain, nonatomic) GameJumpInfo *commentJumpInfo; // @synthesize commentJumpInfo=_commentJumpInfo;
@property(retain, nonatomic) GameJumpInfo *mergeJumpInfo; // @synthesize mergeJumpInfo=_mergeJumpInfo;
@property(retain, nonatomic) GameJumpInfo *jumpInfo; // @synthesize jumpInfo=_jumpInfo;
@property(retain, nonatomic) GameCenterMsgSender *msgSender; // @synthesize msgSender=_msgSender;
@property(nonatomic) _Bool dontShowInMsgCenter; // @synthesize dontShowInMsgCenter=_dontShowInMsgCenter;

@end

