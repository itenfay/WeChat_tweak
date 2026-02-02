//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class ActiveSessionContext, AppSessionContext, SquareItemSessionContext, SquareSessionContext, SquareTabSessionContext;

@interface ExploreSessionsContext : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) ActiveSessionContext *activeSession; // @dynamic activeSession;
@property(retain, nonatomic) AppSessionContext *appSessionInherit; // @dynamic appSessionInherit;
@property(retain, nonatomic) SquareItemSessionContext *squareItemSession; // @dynamic squareItemSession;
@property(retain, nonatomic) SquareSessionContext *squareSession; // @dynamic squareSession;
@property(retain, nonatomic) SquareTabSessionContext *squareTabSession; // @dynamic squareTabSession;

@end

