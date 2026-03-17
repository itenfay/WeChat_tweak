//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "MMUIViewControllerDelegate-Protocol.h"

@class NSString;

@protocol ContactsViewTagListCollectionViewDelegate <MMUIViewControllerDelegate>

@optional
- (void)didContactTagCreateTagWithTagId:(unsigned int)arg1 result:(_Bool)arg2 isRename:(_Bool)arg3;
- (void)didSelectedOrCancelTagButtonWithTagId:(unsigned int)arg1 tagName:(NSString *)arg2 isSelected:(_Bool)arg3;
@end

