//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class DialogComplianceHalfPageViewData, DialogHalfPageV2ViewData, DialogListBasedHalfPage, ImageViewData, NSMutableArray, NSString;

@interface Dialog : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *action; // @dynamic action;
@property(retain, nonatomic) DialogComplianceHalfPageViewData *complianceHalfPage; // @dynamic complianceHalfPage;
@property(retain, nonatomic) NSString *content; // @dynamic content;
@property(nonatomic) int contentAlign; // @dynamic contentAlign;
@property(retain, nonatomic) DialogHalfPageV2ViewData *halfPageDialogV2; // @dynamic halfPageDialogV2;
@property(retain, nonatomic) NSString *image; // @dynamic image;
@property(retain, nonatomic) DialogListBasedHalfPage *listBasedHalfPage; // @dynamic listBasedHalfPage;
@property(retain, nonatomic) ImageViewData *logo; // @dynamic logo;
@property(nonatomic) unsigned int showType; // @dynamic showType;
@property(retain, nonatomic) NSString *title; // @dynamic title;
@property(retain, nonatomic) NSString *viewId; // @dynamic viewId;

@end

