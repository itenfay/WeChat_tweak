//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//


@class BottomCell, CoverInfo, HalfPage;

@class WXPBGeneratedMessage;

@interface QRActionInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned int actionType; // @dynamic actionType;
@property(retain, nonatomic) BottomCell *bottomCellInfo; // @dynamic bottomCellInfo;
@property(retain, nonatomic) CoverInfo *coverInfo; // @dynamic coverInfo;
@property(retain, nonatomic) HalfPage *halfPageInfo; // @dynamic halfPageInfo;

@end

