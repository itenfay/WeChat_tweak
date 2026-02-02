//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class FinderJumpWebAppStoreParams_FinderJumpSKAdItem, NSString;

@interface FinderJumpWebAppStoreParams : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *extraData; // @dynamic extraData;
@property(nonatomic) int installAction; // @dynamic installAction;
@property(retain, nonatomic) NSString *installSchemeUrl; // @dynamic installSchemeUrl;
@property(retain, nonatomic) FinderJumpWebAppStoreParams_FinderJumpSKAdItem *skAdItem; // @dynamic skAdItem;
@property(retain, nonatomic) NSString *uxinfo; // @dynamic uxinfo;

@end

