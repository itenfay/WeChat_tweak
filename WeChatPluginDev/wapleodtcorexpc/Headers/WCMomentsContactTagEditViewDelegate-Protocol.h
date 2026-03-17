//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class ContactTagData, WCMomentsContactTagEditView;

@protocol WCMomentsContactTagEditViewDelegate <NSObject>
- (void)contactTagEditViewDidClickSearch:(WCMomentsContactTagEditView *)arg1;
- (void)contactTagEditView:(WCMomentsContactTagEditView *)arg1 deleteTagData:(ContactTagData *)arg2;
@end

