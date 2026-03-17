//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//


@class NSMutableArray, ObjectAdContentH5, ObjectAdContentLeadLink, ObjectAdContentMiniApp, ObjectAdDesc;

@class WXPBGeneratedMessage;

@interface FinderObjectAdInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) ObjectAdDesc *adDesc; // @dynamic adDesc;
@property(retain, nonatomic) ObjectAdContentH5 *adH5; // @dynamic adH5;
@property(retain, nonatomic) NSMutableArray *adItems; // @dynamic adItems;
@property(retain, nonatomic) ObjectAdContentLeadLink *adLeadLink; // @dynamic adLeadLink;
@property(retain, nonatomic) ObjectAdContentMiniApp *adMiniApp; // @dynamic adMiniApp;
@property(nonatomic) unsigned int adType; // @dynamic adType;

@end

