//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, FinderLiveLbsInfo, NSMutableArray, NSString;

@interface FinderGetLiveTabsResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(nonatomic) unsigned int hideTabs; // @dynamic hideTabs;
@property(retain, nonatomic) FinderLiveLbsInfo *lbsInfo; // @dynamic lbsInfo;
@property(retain, nonatomic) NSMutableArray *navTabList; // @dynamic navTabList;
@property(nonatomic) unsigned int prefechMinInterval; // @dynamic prefechMinInterval;
@property(nonatomic) unsigned int prefechNextTabPullType; // @dynamic prefechNextTabPullType;
@property(nonatomic) unsigned int prefechPreTabPullType; // @dynamic prefechPreTabPullType;
@property(nonatomic) unsigned int prefechTabPullType; // @dynamic prefechTabPullType;
@property(retain, nonatomic) NSMutableArray *tabList; // @dynamic tabList;
@property(retain, nonatomic) NSString *title; // @dynamic title;

@end

