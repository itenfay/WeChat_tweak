//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCPayRefuseTransferRequest : NSObject
{
    NSString *m_nsTransferID;
    NSString *m_nsFromUserName;
    unsigned long long m_uiInvalidTime;
    unsigned int _groupType;
    NSString *_group_username;
    NSString *_sub_title_clicked;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *sub_title_clicked; // @synthesize sub_title_clicked=_sub_title_clicked;
@property(nonatomic) unsigned int groupType; // @synthesize groupType=_groupType;
@property(retain, nonatomic) NSString *group_username; // @synthesize group_username=_group_username;
@property(nonatomic) unsigned long long m_uiInvalidTime; // @synthesize m_uiInvalidTime;
@property(retain, nonatomic) NSString *m_nsFromUserName; // @synthesize m_nsFromUserName;
@property(retain, nonatomic) NSString *m_nsTransferID; // @synthesize m_nsTransferID;

@end

