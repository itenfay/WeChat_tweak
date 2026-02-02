//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCPayConfirmTransferRequest : NSObject
{
    NSString *m_nsTransferID;
    NSString *m_nsFromUserName;
    unsigned long long m_uiInvalidTime;
    unsigned int _recv_channel_type;
    unsigned int _groupType;
    NSString *_left_button_continue;
    NSString *_group_username;
    NSString *_sub_title_clicked;
    unsigned long long _sub_recv_channel_id;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long sub_recv_channel_id; // @synthesize sub_recv_channel_id=_sub_recv_channel_id;
@property(retain, nonatomic) NSString *sub_title_clicked; // @synthesize sub_title_clicked=_sub_title_clicked;
@property(nonatomic) unsigned int groupType; // @synthesize groupType=_groupType;
@property(nonatomic) unsigned int recv_channel_type; // @synthesize recv_channel_type=_recv_channel_type;
@property(retain, nonatomic) NSString *group_username; // @synthesize group_username=_group_username;
@property(retain, nonatomic) NSString *left_button_continue; // @synthesize left_button_continue=_left_button_continue;
@property(nonatomic) unsigned long long m_uiInvalidTime; // @synthesize m_uiInvalidTime;
@property(retain, nonatomic) NSString *m_nsFromUserName; // @synthesize m_nsFromUserName;
@property(retain, nonatomic) NSString *m_nsTransferID; // @synthesize m_nsTransferID;

@end

