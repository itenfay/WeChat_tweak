//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSArray, NSDictionary;

@protocol IContactLabelMgrExt <NSObject>

@optional
- (void)onUpdateLabelOrder:(NSArray *)arg1 withRetCode:(int)arg2 andEventId:(unsigned int)arg3;
- (void)onContactTagNameUpdate:(NSDictionary *)arg1;
- (void)onAllTagNameUpdate;
- (void)setContactLabel:(NSArray *)arg1 withRetCode:(int)arg2 andEventId:(unsigned int)arg3;
- (void)updateContactLabelName:(NSArray *)arg1 withRetCode:(int)arg2 andEventId:(unsigned int)arg3;
- (void)onDeleteContactLabel:(NSArray *)arg1 withRetCode:(int)arg2 andEventId:(unsigned int)arg3;
- (void)onAddContactLabel:(NSArray *)arg1 withRetCode:(int)arg2 andEventId:(unsigned int)arg3;
- (void)onAllContactLabelUpdated:(NSArray *)arg1 withRetCode:(int)arg2 andEventId:(unsigned int)arg3;
@end

