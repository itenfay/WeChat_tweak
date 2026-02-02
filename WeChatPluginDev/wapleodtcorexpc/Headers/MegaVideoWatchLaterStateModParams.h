//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class FinderObject;

@interface MegaVideoWatchLaterStateModParams : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) int action; // @dynamic action;
@property(nonatomic) _Bool disableTips; // @dynamic disableTips;
@property(retain, nonatomic) FinderObject *finderObject; // @dynamic finderObject;
@property(nonatomic) _Bool showTipsAfterSuc; // @dynamic showTipsAfterSuc;
@property(nonatomic) _Bool tipsForbidJumpToLongVideo; // @dynamic tipsForbidJumpToLongVideo;

@end

