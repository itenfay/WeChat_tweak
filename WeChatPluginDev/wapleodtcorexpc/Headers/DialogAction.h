//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//


@class CmdInfo, NSString, RouteInfo;

@class WXPBGeneratedMessage;

@interface DialogAction : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) CmdInfo *cmdInfo; // @dynamic cmdInfo;
@property(retain, nonatomic) RouteInfo *routeInfo; // @dynamic routeInfo;
@property(retain, nonatomic) NSString *title; // @dynamic title;
@property(nonatomic) int type; // @dynamic type;
@property(retain, nonatomic) NSString *viewId; // @dynamic viewId;

@end

