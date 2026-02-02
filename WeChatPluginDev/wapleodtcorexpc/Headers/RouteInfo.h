//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class ActionSheetViewData, ControlInfo, CustomModal, Dialog, FinderUri, HalfPageTipsViewData, LiteAppOpenInfo, NSMutableArray, NSString, RetryExtraParam, TinyAppUri;

@interface RouteInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;
+ (id)modelCustomPropertyMapperForConfigTag:(id)arg1;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *action; // @dynamic action;
@property(retain, nonatomic) ActionSheetViewData *actionSheet; // @dynamic actionSheet;
@property(retain, nonatomic) ControlInfo *backControlInfo; // @dynamic backControlInfo;
@property(retain, nonatomic) Dialog *dialog; // @dynamic dialog;
@property(retain, nonatomic) FinderUri *finderUri; // @dynamic finderUri;
@property(retain, nonatomic) HalfPageTipsViewData *halfPageTips; // @dynamic halfPageTips;
@property(nonatomic) _Bool isIntercepted; // @dynamic isIntercepted;
@property(retain, nonatomic) LiteAppOpenInfo *liteAppOpenInfo; // @dynamic liteAppOpenInfo;
@property(retain, nonatomic) CustomModal *modal; // @dynamic modal;
@property(retain, nonatomic) RetryExtraParam *retryExtraParam; // @dynamic retryExtraParam;
@property(retain, nonatomic) NSString *routeContext; // @dynamic routeContext;
@property(nonatomic) unsigned int subpageIndex; // @dynamic subpageIndex;
@property(retain, nonatomic) TinyAppUri *tinyAppUri; // @dynamic tinyAppUri;
@property(nonatomic) int type; // @dynamic type;
@property(retain, nonatomic) NSString *url; // @dynamic url;

@end

