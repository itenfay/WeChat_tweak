//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class CContact;

@protocol SelectSubContactViewControllerDelegate <NSObject>
- (void)didSelectChatBoxContact:(CContact *)arg1;
- (void)didUnMultiSelectChatBoxContact:(CContact *)arg1;
- (void)didMultiSelectChatBoxContact:(CContact *)arg1;
@end

