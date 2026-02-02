//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableSet, QuickCallContactCgi;
@protocol QuickCallLogicDelegate;

@interface QuickCallLogic : NSObject
{
    id <QuickCallLogicDelegate> _delegate;
    QuickCallContactCgi *_quickCallCgi;
    NSMutableArray *_contacts;
    NSMutableSet *_contactSet;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableSet *contactSet; // @synthesize contactSet=_contactSet;
@property(retain, nonatomic) NSMutableArray *contacts; // @synthesize contacts=_contacts;
@property(retain, nonatomic) QuickCallContactCgi *quickCallCgi; // @synthesize quickCallCgi=_quickCallCgi;
@property(nonatomic) __weak id <QuickCallLogicDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onModifyContact:(id)arg1;
- (void)loadQuickCallContacts;
- (_Bool)shouldShowWidgetEducate;
- (void)removeContacts:(id)arg1 complete:(CDUnknownBlockType)arg2;
- (void)addContacts:(id)arg1 complete:(CDUnknownBlockType)arg2;
- (id)quickCallContacts;
- (id)quickCallContactAtIndex:(long long)arg1;
- (long long)quickCallContactCount;
- (void)dealloc;
- (id)init;

@end

