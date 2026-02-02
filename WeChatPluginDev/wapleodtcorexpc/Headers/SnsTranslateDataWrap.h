//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, WCDataItem, WCUserComment;

@interface SnsTranslateDataWrap : NSObject
{
    int iScene;
    WCDataItem *m_dataItem;
    WCUserComment *m_userComment;
    NSString *m_dataItemTid;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *m_dataItemTid; // @synthesize m_dataItemTid;
@property(nonatomic) int iScene; // @synthesize iScene;
@property(retain, nonatomic) WCUserComment *m_userComment; // @synthesize m_userComment;
@property(retain, nonatomic) WCDataItem *m_dataItem; // @synthesize m_dataItem;
- (void)dealloc;
- (id)init;

@end

