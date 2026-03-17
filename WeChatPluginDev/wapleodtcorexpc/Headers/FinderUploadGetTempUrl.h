//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//


@class NSMutableArray;

@class WXPBGeneratedMessage;

@interface FinderUploadGetTempUrl : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned int enableFinder; // @dynamic enableFinder;
@property(nonatomic) unsigned int enableLive; // @dynamic enableLive;
@property(nonatomic) unsigned int enableNewlife; // @dynamic enableNewlife;
@property(retain, nonatomic) NSMutableArray *finderParam; // @dynamic finderParam;
@property(retain, nonatomic) NSMutableArray *liveParam; // @dynamic liveParam;
@property(retain, nonatomic) NSMutableArray *newlifeParam; // @dynamic newlifeParam;

@end

