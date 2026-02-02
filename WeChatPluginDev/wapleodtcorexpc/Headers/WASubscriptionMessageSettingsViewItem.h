//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSArray, NSString, SubscribeMsgItem;

@interface WASubscriptionMessageSettingsViewItem
{
    _Bool _selected;
    int _templateType;
    NSString *_wording;
    NSString *_templateID;
    NSArray *_detailItems;
    SubscribeMsgItem *_originMsgItem;
}

- (void).cxx_destruct;
@property(retain, nonatomic) SubscribeMsgItem *originMsgItem; // @synthesize originMsgItem=_originMsgItem;
@property(nonatomic) _Bool selected; // @synthesize selected=_selected;
@property(retain, nonatomic) NSArray *detailItems; // @synthesize detailItems=_detailItems;
@property(nonatomic) int templateType; // @synthesize templateType=_templateType;
@property(copy, nonatomic) NSString *templateID; // @synthesize templateID=_templateID;
@property(copy, nonatomic) NSString *wording; // @synthesize wording=_wording;
- (id)toMsgItem;
- (_Bool)itemDataChanged;
- (id)generateDetailItems:(id)arg1;
- (void)fillWithMsgItem:(id)arg1;
- (id)initWith:(id)arg1;

@end

