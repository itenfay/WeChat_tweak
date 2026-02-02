//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class ButtonViewData, HalfPageTipsFooterViewData, HalfPageTipsHeaderViewData, ImageViewData, ListViewData, NSMutableArray, NSString, TextViewData;

@interface HalfPageTipsViewData : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *buttons; // @dynamic buttons;
@property(retain, nonatomic) ButtonViewData *closeButton; // @dynamic closeButton;
@property(retain, nonatomic) ListViewData *descList; // @dynamic descList;
@property(retain, nonatomic) HalfPageTipsFooterViewData *footer; // @dynamic footer;
@property(retain, nonatomic) HalfPageTipsHeaderViewData *header; // @dynamic header;
@property(retain, nonatomic) ImageViewData *logo; // @dynamic logo;
@property(retain, nonatomic) TextViewData *mainContent; // @dynamic mainContent;
@property(retain, nonatomic) TextViewData *title; // @dynamic title;
@property(retain, nonatomic) NSString *viewId; // @dynamic viewId;

@end

