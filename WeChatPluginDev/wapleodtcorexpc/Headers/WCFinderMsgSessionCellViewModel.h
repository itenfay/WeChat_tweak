//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class WCFinderMsgSessionCell, WCFinderMsgSessionInfo;

@interface WCFinderMsgSessionCellViewModel : NSObject
{
    WCFinderMsgSessionCell *_cell;
    WCFinderMsgSessionInfo *_sessionInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderMsgSessionInfo *sessionInfo; // @synthesize sessionInfo=_sessionInfo;
@property(nonatomic) __weak WCFinderMsgSessionCell *cell; // @synthesize cell=_cell;
- (id)sessionTitle;
- (id)realChatFinderContact;
- (void)updateCellData;
- (void)updateCellView;

@end

