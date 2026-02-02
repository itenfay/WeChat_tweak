//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class FinderLiveAppMsg, NSString;

@interface WCFinderGroupLiveChatHistoryAppMsgItem : NSObject
{
    _Bool _isLike;
    unsigned int _likeNumber;
    FinderLiveAppMsg *_liveAppMsg;
    NSString *_itemKey;
}

+ (void)initialize;
+ (void)PBArrayAdd_itemKey;
+ (void)PBArrayAdd_liveAppMsg;
+ (void)PBArrayAdd_likeNumber;
+ (void)PBArrayAdd_isLike;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *itemKey; // @synthesize itemKey=_itemKey;
@property(retain, nonatomic) FinderLiveAppMsg *liveAppMsg; // @synthesize liveAppMsg=_liveAppMsg;
@property(nonatomic) unsigned int likeNumber; // @synthesize likeNumber=_likeNumber;
@property(nonatomic) _Bool isLike; // @synthesize isLike=_isLike;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

