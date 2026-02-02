//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSArray, NSString, WAContact;

@protocol BraceletTopicRecordDelegate <NSObject>

@optional
- (void)onClickAppWithFinderUsername:(NSString *)arg1 records:(NSArray *)arg2;
- (void)onClickAppWithWAContact:(WAContact *)arg1;
@end

